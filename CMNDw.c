//---------------------------------------------------------------------------| CMNDw by Dietmar SCHRAUSSER 2009           //
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
                   
void _prof_msg()
{
	printf("\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4");
	printf("\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\n");
	printf("Usage: CMNDw [cmd] [argc]\n");
	printf(" [cmd].......... Command\n");
	printf(" [argc].. n of Arguments\n");
	printf("\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4");
	printf("\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\n");
	printf("CMNDw \xB8 by Dietmar Schrausser\n");
    printf("\xDF %s @ %s\n", __DATE__, __TIME__);
	exit(EXIT_FAILURE);
}	

char arg_[20][50], cmd_[200], cmd[200];
int iLauf, arg_c ;
                  
main(int argc, char *argv[]) 
{   
	if (argc != 3){printf("... arguments\n"); _prof_msg(argv[0]);}
	
	strcpy (cmd, argv[1]); //-----------------------------------------------> befehl
	arg_c = atoi(argv[2]); //-----------------------------------------------> anzahl der argumente argc
	
	system ("cls"); system ("color f8");//----------------------------------> consolen fenster
	printf ("\n\xDA");
	printf ("\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4");
	printf ("\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4");
	printf ("\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4");
	printf ("\xBF\n");
	printf ("| %s CMND Interpreter by Dietmar Schrausser \xB8 2009\n",cmd); // Kopfzeile
	
	//----------------------------------------------------------------------> ruft befehl mit argumenten auf, 
	//                                                                        eingabe von end ... beendet die schleife 
	//                                                                        (erstes argument wird auf end geprüft)
	while (stricmp(arg_[1], "end") != 0)
	{
		printf ("\n%s> ", cmd);//-------------------------------------------> cmnd prompt
		
		strcpy (cmd_, cmd); 
		for (iLauf=1; iLauf <= arg_c; iLauf++)//----------------------------> über anzahl der argumente arg_c	
		{	
			scanf ("%s", &arg_[iLauf]); strcat (cmd_, " "); strcat (cmd_, arg_[iLauf]); //befehlszeilenzusammenbau
		}
		//printf ("%s", cmd_);

		if (stricmp(arg_[1], "end") != 0) system(cmd_); //------------------> befehlszeilenausführung
	}
	printf ("\n\xB3 CMND: END", cmd);
	printf ("\n\xC0");
	printf ("\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4");
	printf ("\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4");
	printf ("\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4");
	printf ("\xD9\n");
	system ("color 0F");//--------------------------------------------------> consolen fenster ende

	return 0;
}
