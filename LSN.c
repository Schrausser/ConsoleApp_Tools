//---------------------------------------------------------------------------| LSN by Dietmar SCHRAUSSER 2009              
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <io.h>
#include <time.h>

void _profil();   
                      
main(int argc, char *argv[])       
{   

	FILE *oo;
	if (argc != 2){ printf("> check arguments\n");	_profil();}

	            oo = fopen(  argv[1], "r");
	if(         oo != 0)
	{
		fclose( oo ); unlink(argv[1]); printf("\n%s wurde geloescht.\n", argv[1] );	
	}

	return 0;
}
                     
void _profil()
{
	printf("----------------------\n");
	printf("Usage: LSN [datei]\n");
	printf(" [datei] ... Dateiname\n");
	printf("----------------------\n");
	printf("LSN by Dietmar Schrausser\n");
        printf("compiled on %s @ %s\n", __DATE__, __TIME__);
	exit(0);
}	

                                        
