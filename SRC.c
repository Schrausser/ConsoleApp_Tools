//---------------------------------------------------------------------------| SRC by Dietmar SCHRAUSSER 2010               

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void _profil(); 
void _kopf();                      

char dbuffer[9],tbuffer[9];  

main(int argc, char *argv[])   
{   
	FILE *outStream;                                 
      
	if (argc != 5) {printf("\n> check arguments\n");_profil();	}
   	          
	if(argv[2][0]=='0')outStream = fopen( argv[1], "a" ); 
	if(argv[2][0]=='1')outStream = fopen( argv[1], "w" ); 

	_kopf();

	fprintf(outStream,"%s", argv[3]);
	if(argv[4][0]=='0')fprintf(outStream,"\n");
	if(argv[4][0]=='1')fprintf(outStream," ");
	 
	fclose( outStream );

	return 0;
}
         
void _profil()
{
	printf("---------------------------------------------------------------\n");
	printf("Usage: SRC [output] [typ] [arg] [sw]\n");
	printf("[output] ... Ausgabe Datei\n");
	printf("[typ] ...... (0):anhaengen (1):neu erstellen \n");
	printf("[arg] ...... Argument \n");
	printf("[sw] ........(0):Zeilenumbruch (1):Leerzeichen (2):kein Zeichen\n");
	printf("---------------------------------------------------------------\n");
	printf("SRC by Dietmar Schrausser\n");
    printf("compiled on %s @ %s\n", __DATE__, __TIME__);
	exit(0);
}	

void _kopf() 
{
	printf("\nSRC by Dietmar Schrausser\n");
	printf("compiled on %s @ %s\n", __DATE__, __TIME__);
	printf("computing SRC:\n"); 
}                                           
