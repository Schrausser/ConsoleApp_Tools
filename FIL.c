//---------------------------------------------------------------------------| FIL by Dietmar SCHRAUSSER 2010               

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <direct.h>
#include <io.h>

void _profil(); 
void _kopf();                      

char dbuffer[9],tbuffer[9]; 
int  fil;

struct _finddata_t  datei; 

main(int argc, char *argv[])   
{   
	FILE *outStream;                                 
      
	if (argc != 3) {printf("\n> check arguments\n");_profil();	}
   	
	outStream = fopen( argv[1], "a" );           

	_kopf();	
  
	
															   fil=_findfirst( argv[2],  &datei );
	while (errno == 0)
	{
		if(                strcmp (datei.name, "." ) !=0 &&
						   strcmp (datei.name, "..") !=0	)
		fprintf( outStream,"%s\n", datei.name);     _findnext( fil,                  &datei ); 
	} 

	fclose( outStream );

	return 0;
}
         
void _profil()
{
	printf("------------------------------\n");
	printf("Usage: FIL [output] [*]\n");
	printf("[output] .. Ausgabe Datei \n");
	printf("[*] ....... Dateispezifikation\n");
	printf("------------------------------\n");
	printf("FIL by Dietmar Schrausser\n");
    printf("compiled on %s @ %s\n", __DATE__, __TIME__);
	exit(0);
}	

void _kopf() 
{
	printf("\nFIL by Dietmar Schrausser\n");
	printf("compiled on %s @ %s\n", __DATE__, __TIME__);
	printf("computing FIL:\n"); 
}                                           





