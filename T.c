//---------------------------------------------------------------------------| T by Dietmar SCHRAUSSER 2010               

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void _profil();                       

char dbuffer[9],tbuffer[9];  

void main(int argc, char *argv[])   
{   
	FILE *outStream;  
	int i_=2;
      
	if (argc < 2) {printf("\n> check arguments\n");_profil();	}
   	           
    outStream = fopen( "T.txt", "a" ); 

	fprintf(outStream,"%s", argv[1]);

	do { fprintf(outStream," %s", argv[i_]); i_++; } while(argv[i_]!=0);
	
	fprintf(outStream,"\n");
	
	fclose( outStream );
}
         
void _profil()
{
	printf("--------------------------\n");
	printf("Usage: T [argi] ... [argn]\n");
	printf("[argi] ............ String\n");
	printf("--------------------------\n");
	printf("T by Dietmar Schrausser\n");
    printf("compiled on %s @ %s\n", __DATE__, __TIME__);
	exit(0);
}	

