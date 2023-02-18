//---------------------------------------------------------------------------| CMND_MAT by Dietmar SCHRAUSSER 2010           //
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <time.h>
                   
void _prof_msg()
{
	int iLauf;

	for(iLauf=1; iLauf<=17; iLauf++) cprintf("\xC4"); printf("\n");
	printf("Usage: CMND [cmd]\n");
	printf(" [cmd]... Command\n");
	for(iLauf=1; iLauf<=17; iLauf++) cprintf("\xC4"); printf("\n");
	printf("CMND by Dietmar Schrausser\n");
    printf("compiled on %s @ %s\n", __DATE__, __TIME__);
	exit(0);
}	

char arg_[600], cmd_[650], cmd[20], zeit[9], datum[9];
int iLauf, arg_c ;
                  
main(int argc, char *argv[]) 
{   
	if (argc < 2){printf("bad arguments!\n"); _prof_msg(argv[0]);}
	
	strcpy(cmd, argv[1]);
	
	_strdate( datum ); _strtime( zeit );
	
	printf("\n%s %s", datum, zeit);
	printf ("\n%s CMND Interpreter by Dietmar Schrausser, (c) SCHRAUSSER 2011\n",cmd); //---> Kopfzeile
	
	//----------------------------------------------------------------------> ruft befehl mit argumenten auf, 
	//                                                                        eingabe von end ... beendet die schleife 
	//                                                                        (erstes argument wird auf end geprüft)
	while (stricmp(arg_, "end") != 0)
	{
		printf ("\n%s> ", cmd);//-------------------------------------------> cmnd prompt
		strcpy(cmd_, " ");
	
		gets (arg_); //--------------------------------------------------> liest ganze zeile bis absatz von console ein
		
		sprintf(cmd_,"%s %s",cmd, arg_);
		if(stricmp(arg_, "end") != 0) system (cmd_);//-------------------> befehlszeilenausführung
	
	}
	system("color 07");
	printf ("\n%s CMND: END\n", cmd); 
	_strdate( datum ); _strtime( zeit );
	printf("%s %s\n", datum, zeit);
	exit (1);
	
	return 0;
}
