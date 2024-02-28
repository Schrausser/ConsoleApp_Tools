//---------------------------------------------------------------------------| KOPIE by Dietmar SCHRAUSSER 2oo8              

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void _err_msg (); //---------------------------------------------------------> prozedur fehlermeldung und usage instruktion   
void _head(); //---------------------------------------------------------> prozedur für kopfzeilen                       

char c_1, c_2 ;

int index = 1;

main(int argc, char *argv[]) //----------------------------------------------> main übernimmt n argumente im vektor argv      
{   
	FILE *inStream, *outStream; //---------------------------------------> streams                                        
      
	if (argc != 3) //----------------------------------------------------> was wenn keine oder zuwenig, zuviel argumente? 
	{
   		printf(" check arguments!\n");
   		_err_msg(argv[0]);
	}
   
	//-------------------------------------------------------------------| def von input und outputdatei (binärmodus):                 
	inStream = fopen( argv[1], "rb" );
	outStream = fopen( argv[2], "wb" );                                                                                  
   
	if (inStream == NULL) //---------------------------------------------> was wenn keine inputdatei                      
	{
		printf(" check file %s!\n", argv[1]);
		_err_msg(argv[0]);
	}
  
	_head();
   
	//-------------------------------------------------------------------| Prozedur                                       

	do
	{
		c_1 = fgetc(inStream);

		/*if (c_1 == '\n') c_1 = '\\'; /*----------------------------------> bsp: ersetzt absatz durch \ */

		if (index > 1) fputc (c_2, outStream); //------------------------> um 1 zeichen versetzte ausgabe in outstream (löscht anhängsel am ende der datei)


		c_2 = c_1;

		index++;

	}while (feof (inStream) == 0); //------------------------------------> do solange nicht end of file	
 
	fclose( inStream  );
	fclose( outStream );

	return 0;
}

//---------------------------------------------------------------------------| allgemeine fehlerroutine                       
void _err_msg()
{
	printf("-----------------------------\n");
	printf("Usage: KOPIE [input] [output]\n");
	printf(" [input] ... Eingabe Datei\n");
	printf(" [output] .. Ausgabe Datei\n");
	printf("-----------------------------\n");
	printf("KOPIE by Dietmar Schrausser\n");
        printf("compiled on %s @ %s\n", __DATE__, __TIME__);
	exit(EXIT_FAILURE);
}	

//---------------------------------------------------------------------------| titelzeile bildschirmausgabe                   
void _head() 
{
	printf("\nKOPIE by Dietmar Schrausser\n");
	printf("compiled on %s @ %s\n", __DATE__, __TIME__);
	printf("computing KOPIE:\n"); 
}

//---------------------------------------------------------------------------| ENDE                                            
