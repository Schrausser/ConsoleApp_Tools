//------------------------------------------------------------------------| FINDE by Dietmar SCHRAUSSER 2oo8               

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void _err_msg (); //-------------------------------------------------------> prozedur fehlermeldung und usage instruktion   
void _head(); //-----------------------------------------------------------> prozedur für kopfzeilen                        

main(int argc, char *argv[]) //--------------------------------------------> main übernimmt n argumente im vektor argv      
{   
	FILE *outstream; //----------------------------------------------------> streams                                        
      
	if (argc != 2) //------------------------------------------------------> was wenn keine oder zuwenig, zuviel argumente? 
	{
   		printf("ERROR, check arguments!\n");
   		_err_msg(argv[0]);
	}
   
	outstream = fopen( "tmp.bat", "w" );                                                                                   
   
	_head();
   
	//---------------------------------------------------------------------| Prozedur                                       


	system ("dir c:\\ /s /b >> dir.txt");

	system ("dir d:\\ /s /b >> dir.txt");


	fprintf (outstream, 

			"findstr /i %s dir.txt > finde.txt\n", 

			argv[1]
	    	);

	fclose( outstream );
	
	system ("tmp.bat");
	system ("notepad finde.txt");
	system ("del tmp.bat finde.txt dir.txt");

	return 0;
}

//-------------------------------------------------------------------------| allgemeine fehlerroutine                      
void _err_msg()
{
	printf("---------------------------------------------------------\n");
	printf("Usage: FINDE [datei] \n ");
	printf("[datei] ... zu findende Datei (Konventionen siehe FINDSTR)\n");
	printf("---------------------------------------------------------\n");
	printf("FINDE by Dietmar Schrausser\n");
        printf("compiled on %s @ %s\n", __DATE__, __TIME__);
	exit(EXIT_FAILURE);
}	

//-------------------------------------------------------------------------| titelzeile bildschirmausgabe                  
void _head(void) 
{
	printf("\nFINDE by Dietmar Schrausser\n");
	printf("compiled on %s @ %s\n", __DATE__, __TIME__);
	printf("computing FINDE:"); 
}

//-------------------------------------------------------------------------| ENDE                          

