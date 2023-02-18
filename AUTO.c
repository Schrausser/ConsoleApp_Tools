//---------------------------------------------------------------------------------------------| AUTO by Dietmar SCHRAUSSER 2010               

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void _profil(); 
void _head();                      
  
main(int argc, char *argv[])   
{   
	FILE *out;  
	
	int iLauf, jLauf;
	char src_[30], nt_[30], dir_[30], mov1_[50], mov2_[50], mov3_[50], mov4_[100];
      
	if (argc != 6) {printf("\nn of arguments .0\n");_profil();	}

	strcpy(src_,argv[1]);strcat(src_,".c");
	if (atoi(argv[5])==0){strcpy(nt_,"NOTE_");strcat(nt_,argv[1]);strcat(nt_,".txt");}
	if (atoi(argv[5])==1){strcpy(nt_,"NOTIZ_");strcat(nt_,argv[1]);strcat(nt_,".txt");}

	strcpy(dir_,"md _");strcat(dir_,argv[1]);strcat(dir_,"_\\debug\\");
	
	strcpy(mov1_,"move ");strcat(mov1_,src_);strcat(mov1_," _");strcat(mov1_,argv[1]);strcat(mov1_,"_"); 
	strcpy(mov2_,"move ");strcat(mov2_,nt_); strcat(mov2_," _");strcat(mov2_,argv[1]);strcat(mov2_,"_\\debug\\"); 
	strcpy(mov3_,"copy DOSCOM.exe _");strcat(mov3_,argv[1]);strcat(mov3_,"_\\debug\\ >~0");
	
	// C source directory
	strcpy(mov4_,"move ");strcat(mov4_," _");strcat(mov4_,argv[1]);strcat(mov4_,"_ ");strcat(mov4_,"D:\\_EIGENEDATEIEN_\\1_LAUFENDES\\1_SYSTEM\\3_C_PROGRAMME\\"); 

	_head();

	if (atoi(argv[5])==0) // English //
	{//	
		//C source file shell
		out = fopen( src_, "w" );
		
		fprintf(out,"// AUTO generated code shell -----------------------------------------------------------------------| %s by Dietmar SCHRAUSSER 20__\n",argv[1]);
		fprintf(out,"//\n");
		fprintf(out,"#include <stdio.h>\n");
		fprintf(out,"#include <stdlib.h>\n");
		fprintf(out,"#include <string.h>\n");
		fprintf(out,"#include <time.h>\n");
		fprintf(out,"//#include <_>\n");
		fprintf(out,"//#include \"_\"\n");
		fprintf(out,"\n");
		fprintf(out,"void _profil();\n");
		fprintf(out,"void _head();\n");
		fprintf(out,"\n");
		fprintf(out,"main(int argc, char *argv[])\n");
		fprintf(out,"{\n");
		if(strcmp(argv[2],"0")==1||strcmp(argv[3],"0")==1)fprintf(out,"\tFILE");
		if(strcmp(argv[2],"0")==1)fprintf(out," *in");
		if(strcmp(argv[2],"0")==1&&strcmp(argv[3],"0")==1)fprintf(out,",");
		if(strcmp(argv[3],"0")==1)fprintf(out," *out");
		if(strcmp(argv[2],"0")==1||strcmp(argv[3],"0")==1)fprintf(out,";\n\n");
		
		if(atoi(argv[4])<=1)fprintf(out,"\tint iLauf;\n");
		if(atoi(argv[4])>1 )fprintf(out,"\tint Lauf[%i];\n", atoi(argv[4])+1);
		fprintf(out,"\tdouble var_[11];\n");
		if(strcmp(argv[2],"0")==1)fprintf(out,"\tchar s_var_[11][50];\n");
		fprintf(out,"\n");
		fprintf(out,"\tif (argc != 4) { printf(\"\\nn of arguments .0\\n\"); _profil(); }\n");
		if(strcmp(argv[2],"0")==1)fprintf(out,"\tin = fopen( \"%s\", \"r\" ); if(in == 0) { printf(\"\\ninput file .0\\n\"); _profil(); }\n",argv[2]); 
		fprintf(out,"\n");
		if(atoi(argv[4])<=1)fprintf(out,"\tfor(iLauf=0;iLauf<=10;iLauf++) var_[iLauf]=0; //vector var_ -> 0\n");
		if(atoi(argv[4])>1 )fprintf(out,"\tfor(Lauf[0]=0;Lauf[0]<=10;Lauf[0]++) var_[Lauf[0]]=0; //vector var_ -> 0\n");

		if(strcmp(argv[2],"0")==1||strcmp(argv[3],"0")==1)fprintf(out,"\n");
		if(strcmp(argv[2],"0")==1)fprintf(out,"\tin = fopen( \"%s\", \"r\");\n",argv[2]);
		if(strcmp(argv[3],"0")==1)fprintf(out,"\tout = fopen( \"%s\", \"w\");\n",argv[3]);
		
		fprintf(out,"\n");
		fprintf(out,"\t_head();\n");
		fprintf(out,"\n");
	
		if(atoi(argv[4])==0)if(strcmp(argv[2],"0")==0)fprintf(out,"\tprintf(\"\\nOutput\\n\"); //output\n");
		if(atoi(argv[4])==0)if(strcmp(argv[2],"0")==1)fprintf(out,"\tfscanf(in,\"%%s\\n\",&s_var_[1]); //file input\n");
		if(atoi(argv[4])==0)if(strcmp(argv[2],"0")==1)fprintf(out,"\tprintf(\"\\n%%s\\n\",s_var_[1]); //output\n");

		if(atoi(argv[4])==0)
		if(strcmp(argv[2],"0")==0)if(strcmp(argv[3],"0")==1)fprintf(out,"\tfprintf(out,\"Fileoutput\\n\"); //file output\n");
		if(atoi(argv[4])==0)
		if(strcmp(argv[2],"0")==1)if(strcmp(argv[3],"0")==1)fprintf(out,"\tfprintf(out,\"%%s\\n\",s_var_[1]); //file output\n");
		
		
		if(atoi(argv[4])==1)fprintf(out,"\tfor(iLauf=1;iLauf<=3;iLauf++)\n");
		if(atoi(argv[4])==1)fprintf(out,"\t{\n");
		if(atoi(argv[4])==1)fprintf(out,"\t\t//\n");
		if(atoi(argv[4])==1)fprintf(out,"\t\t//Loop\n");
		if(atoi(argv[4])==1)fprintf(out,"\t\t//\n");
		if(strcmp(argv[2],"0")==1)
		if(atoi(argv[4])==1)fprintf(out,"\t\tfscanf(in,\"%%s\\n\",&s_var_[iLauf]); //file input\n");
		if(strcmp(argv[2],"0")==1&&strcmp(argv[3],"0")==1)
		if(atoi(argv[4])==1)fprintf(out,"\t\tfprintf(out,\"iLauf= %%i\\t%%s\\n\",iLauf, s_var_[iLauf]); //file output\n");
		if(strcmp(argv[2],"0")==0&&strcmp(argv[3],"0")==1)
		if(atoi(argv[4])==1)fprintf(out,"\t\tfprintf(out,\"iLauf= %%i\\n\",iLauf); //file output\n");
		if(atoi(argv[4])==1)fprintf(out,"\t\tprintf(\"iLauf= %%i\\r\",iLauf); //counter\n");
		if(atoi(argv[4])==1)fprintf(out,"\t}\n");

		if(atoi(argv[4])>1)
		{
			for(iLauf=1;iLauf<=atoi(argv[4]);iLauf++)
			{
				for(jLauf=1;jLauf<=iLauf;jLauf++)fprintf(out,"\t");
				fprintf(out,"for(Lauf[%i]=1;Lauf[%i]<=3;Lauf[%i]++)\n",iLauf,iLauf,iLauf);
				for(jLauf=1;jLauf<=iLauf;jLauf++)fprintf(out,"\t");fprintf(out,"{\n");
			}
			
			for(jLauf=0;jLauf<=atoi(argv[4]);jLauf++)fprintf(out,"\t");fprintf(out,"//\n");
			for(jLauf=0;jLauf<=atoi(argv[4]);jLauf++)fprintf(out,"\t");fprintf(out,"//Loop\n");
			for(jLauf=0;jLauf<=atoi(argv[4]);jLauf++)fprintf(out,"\t");fprintf(out,"//\n");
			
			if(strcmp(argv[2],"0")==1)
			{
				for(jLauf=0;jLauf<=atoi(argv[4]);jLauf++) fprintf(out,"\t");
				fprintf(out,"fscanf(in,\"%%s\\n\",&s_var_[Lauf[%i]]); //file input\n", atoi(argv[4]));
			}
			
			if(strcmp(argv[2],"0")==1&&strcmp(argv[3],"0")==1)
			{
				for(jLauf=0;jLauf<=atoi(argv[4]);jLauf++)fprintf(out,"\t");
				fprintf(out,"fprintf(out,\"Lauf[%i]= %%i\\t%%s\\n\",Lauf[%i], s_var_[Lauf[%i]]); //file output\n", atoi(argv[4]), atoi(argv[4]), atoi(argv[4]));
			}
			
			if(strcmp(argv[2],"0")==0&&strcmp(argv[3],"0")==1)
			{
				for(jLauf=0;jLauf<=atoi(argv[4]);jLauf++)fprintf(out,"\t");
				fprintf(out,"fprintf(out,\"Lauf[%i]= %%i\\n\",Lauf[%i]); //file output\n", atoi(argv[4]), atoi(argv[4]));
			}
			
			for(jLauf=0;jLauf<=atoi(argv[4]);jLauf++)fprintf(out,"\t");
			fprintf(out,"printf(\"Lauf[%i]= %%i\\r\",Lauf[%i]); //counter\n", atoi(argv[4]), atoi(argv[4]));
			
			
			for(iLauf=1;iLauf<=atoi(argv[4]);iLauf++)
			{
				for(jLauf=1;jLauf<=atoi(argv[4])-iLauf+1;jLauf++)fprintf(out,"\t");
				fprintf(out,"}//Lauf%i\n",(atoi(argv[4])-iLauf)+1);
			}
		}

		if(strcmp(argv[2],"0")==1||strcmp(argv[3],"0")==1)fprintf(out,"\n");
		if(strcmp(argv[2],"0")==1)fprintf(out,"\tfclose( in );\n");
		if(strcmp(argv[3],"0")==1)fprintf(out,"\tfclose( out );\n");
		fprintf(out,"\n");
		fprintf(out,"\treturn 0;\n");
		
		fprintf(out,"};\n");
		fprintf(out,"\n");
		fprintf(out,"void _profil()\n");
		fprintf(out,"{\n");
		fprintf(out,"\tprintf(\"----------------------------------\\n\");\n");
		fprintf(out,"\tprintf(\"Usage: %s [input] [output] [_]\\n\");\n",argv[1]);
		fprintf(out,"\tprintf(\"[input] ..... Input File\\n\");\n");
		fprintf(out,"\tprintf(\"[output] .... Output File\\n\");\n");
		fprintf(out,"\tprintf(\"[_] ......... _\\n\");\n");
		fprintf(out,"\tprintf(\"----------------------------------\\n\");\n");
		fprintf(out,"\tprintf(\"%s by Dietmar Schrausser\\n\");\n",argv[1]);
		fprintf(out,"\tprintf(\"compiled on %%s @ %%s\\n\", __DATE__, __TIME__);\n");
		fprintf(out,"\texit(0);\n");
		fprintf(out,"};\n");

		fprintf(out,"\n");
		fprintf(out,"void _head()\n");
		fprintf(out,"{\n");
		fprintf(out,"\tprintf(\"\\n%s by Dietmar Schrausser\\n\");\n",argv[1]);
		fprintf(out,"\tprintf(\"compiled on %%s @ %%s\\n\", __DATE__, __TIME__);\n");
		fprintf(out,"\tprintf(\"computing %s:\\n\");\n",argv[1]);
		fprintf(out,"};\n");

		fprintf(out,"\n");
		fprintf(out,"//\n");
		fprintf(out,"// C source file system generator AUTO by Dietmar Schrausser, (c) SCHRAUSSER 2010");


		fclose( out );
		

		//ASCII NOTE file shell
		out = fopen( nt_, "w" );

		fprintf(out,"%s by Dietmar SCHRAUSSER 20__\n",argv[1]);
		fprintf(out,"\n");
		fprintf(out,"Program\n-------\n%s _\n\n\n",argv[1]);
		fprintf(out,"Method\n------\n\n\n");
		fprintf(out,"Usage\n-----\n");
		fprintf(out,"%s [input] [output] [_]\n",argv[1]);
		fprintf(out,"[input] ... Input File\n");
		fprintf(out,"[output] .. Output File\n");
		fprintf(out,"[_] ....... _\n");
		fprintf(out,"\n");
		fprintf(out,"example: %s _ _\n",argv[1]);

		fprintf(out,"\n\n");
		fprintf(out,"------------------------------------------------------------------------------\n");
		fprintf(out,"C source file system generator AUTO by Dietmar Schrausser, (c) SCHRAUSSER 2010");
		
		fclose( out );
	}

	if (atoi(argv[5])==1) // Deutsch //
	{
		//C Quelldatei Vorlage
		out = fopen( src_, "w" );
		
		fprintf(out,"// AUTO generierte Quelldatei Vorlage ---------------------------------------------------------------| %s von Dietmar SCHRAUSSER 20__\n",argv[1]);
		fprintf(out,"//\n");
		fprintf(out,"#include <stdio.h>\n");
		fprintf(out,"#include <stdlib.h>\n");
		fprintf(out,"#include <string.h>\n");
		fprintf(out,"#include <time.h>\n");
		fprintf(out,"//#include <_>\n");
		fprintf(out,"//#include \"_\"\n");
		fprintf(out,"\n");
		fprintf(out,"void _profil();\n");
		fprintf(out,"void _head();\n");
		fprintf(out,"\n");
		fprintf(out,"main(int argc, char *argv[])\n");
		fprintf(out,"{\n");
		if(strcmp(argv[2],"0")==1||strcmp(argv[3],"0")==1)fprintf(out,"\tFILE");
		if(strcmp(argv[2],"0")==1)fprintf(out," *in");
		if(strcmp(argv[2],"0")==1&&strcmp(argv[3],"0")==1)fprintf(out,",");
		if(strcmp(argv[3],"0")==1)fprintf(out," *out");
		if(strcmp(argv[2],"0")==1||strcmp(argv[3],"0")==1)fprintf(out,";\n\n");

		if(atoi(argv[4])<=1)fprintf(out,"\tint iLauf;\n");
		if(atoi(argv[4])>1 )fprintf(out,"\tint Lauf[%i];\n", atoi(argv[4])+1);
		fprintf(out,"\tdouble var_[11];\n");
		if(strcmp(argv[2],"0")==1)fprintf(out,"\tchar s_var_[11][50];\n");
		fprintf(out,"\n");
		fprintf(out,"\tif (argc != 4) { printf(\"\\nArgument n .0\\n\"); _profil(); }\n");
		if(strcmp(argv[2],"0")==1)fprintf(out,"\tin = fopen( \"%s\", \"r\" ); if(in == 0) { printf(\"\\nEingabe Datei .0\\n\"); _profil(); }\n",argv[2]); 
		fprintf(out,"\n");
		if(atoi(argv[4])<=1)fprintf(out,"\tfor(iLauf=0;iLauf<=10;iLauf++) var_[iLauf]=0; //Vektor var_ -> 0-Vektor\n");
		if(atoi(argv[4])>1 )fprintf(out,"\tfor(Lauf[0]=0;Lauf[0]<=10;Lauf[0]++) var_[Lauf[0]]=0; //Vektor var_ -> 0-Vektor\n");

		if(strcmp(argv[2],"0")==1||strcmp(argv[3],"0")==1)fprintf(out,"\n");
		if(strcmp(argv[2],"0")==1)fprintf(out,"\tin = fopen( \"%s\", \"r\");\n",argv[2]);
		if(strcmp(argv[3],"0")==1)fprintf(out,"\tout = fopen( \"%s\", \"w\");\n",argv[3]);
		
		fprintf(out,"\n");
		fprintf(out,"\t_head();\n");
		fprintf(out,"\n");
	
		if(atoi(argv[4])==0)if(strcmp(argv[2],"0")==0)fprintf(out,"\tprintf(\"\\nBildschirm-Ausgabe\\n\"); //Bildschirm-Ausgabe\n");
		if(atoi(argv[4])==0)if(strcmp(argv[2],"0")==1)fprintf(out,"\tfscanf(in,\"%%s\\n\",&s_var_[1]); //Datei-Eingabe\n");
		if(atoi(argv[4])==0)if(strcmp(argv[2],"0")==1)fprintf(out,"\tprintf(\"\\n%%s\\n\",s_var_[1]); //Bildschirm-Ausgabe\n");

		if(atoi(argv[4])==0)
		if(strcmp(argv[2],"0")==0)if(strcmp(argv[3],"0")==1)fprintf(out,"\tfprintf(out,\"Datei-Ausgabe\\n\"); //Datei-Ausgabe\n");
		if(atoi(argv[4])==0)
		if(strcmp(argv[2],"0")==1)if(strcmp(argv[3],"0")==1)fprintf(out,"\tfprintf(out,\"%%s\\n\",s_var_[1]); //Datei-Ausgabe\n");
		
		
		if(atoi(argv[4])==1)fprintf(out,"\tfor(iLauf=1;iLauf<=3;iLauf++)\n");
		if(atoi(argv[4])==1)fprintf(out,"\t{\n");
		if(atoi(argv[4])==1)fprintf(out,"\t\t//\n");
		if(atoi(argv[4])==1)fprintf(out,"\t\t//Schleife\n");
		if(atoi(argv[4])==1)fprintf(out,"\t\t//\n");
		if(strcmp(argv[2],"0")==1)
		if(atoi(argv[4])==1)fprintf(out,"\t\tfscanf(in,\"%%s\\n\",&s_var_[iLauf]); //Datei-Eingabe\n");
		if(strcmp(argv[2],"0")==1&&strcmp(argv[3],"0")==1)
		if(atoi(argv[4])==1)fprintf(out,"\t\tfprintf(out,\"iLauf= %%i\\t%%s\\n\",iLauf, s_var_[iLauf]); //Datei-Ausgabe\n");
		if(strcmp(argv[2],"0")==0&&strcmp(argv[3],"0")==1)
		if(atoi(argv[4])==1)fprintf(out,"\t\tfprintf(out,\"iLauf= %%i\\n\",iLauf); //Datei-Ausgabe\n");
		if(atoi(argv[4])==1)fprintf(out,"\t\tprintf(\"iLauf= %%i\\r\",iLauf); //Bildschirmzähler\n");
		if(atoi(argv[4])==1)fprintf(out,"\t}\n");

		if(atoi(argv[4])>1)
		{
			for(iLauf=1;iLauf<=atoi(argv[4]);iLauf++)
			{
				for(jLauf=1;jLauf<=iLauf;jLauf++)fprintf(out,"\t");
				fprintf(out,"for(Lauf[%i]=1;Lauf[%i]<=3;Lauf[%i]++)\n",iLauf,iLauf,iLauf);
				for(jLauf=1;jLauf<=iLauf;jLauf++)fprintf(out,"\t");fprintf(out,"{\n");
			}
			
			for(jLauf=0;jLauf<=atoi(argv[4]);jLauf++)fprintf(out,"\t");fprintf(out,"//\n");
			for(jLauf=0;jLauf<=atoi(argv[4]);jLauf++)fprintf(out,"\t");fprintf(out,"//Meta-Schleife\n");
			for(jLauf=0;jLauf<=atoi(argv[4]);jLauf++)fprintf(out,"\t");fprintf(out,"//\n");
			
			if(strcmp(argv[2],"0")==1)
			{
				for(jLauf=0;jLauf<=atoi(argv[4]);jLauf++) fprintf(out,"\t");
				fprintf(out,"fscanf(in,\"%%s\\n\",&s_var_[Lauf[%i]]); //Datei-Eingabe\n", atoi(argv[4]));
			}
			
			if(strcmp(argv[2],"0")==1&&strcmp(argv[3],"0")==1)
			{
				for(jLauf=0;jLauf<=atoi(argv[4]);jLauf++)fprintf(out,"\t");
				fprintf(out,"fprintf(out,\"Lauf[%i]= %%i\\t%%s\\n\",Lauf[%i], s_var_[Lauf[%i]]); //Datei-Ausgabe\n", atoi(argv[4]), atoi(argv[4]), atoi(argv[4]));
			}
			
			if(strcmp(argv[2],"0")==0&&strcmp(argv[3],"0")==1)
			{
				for(jLauf=0;jLauf<=atoi(argv[4]);jLauf++)fprintf(out,"\t");
				fprintf(out,"fprintf(out,\"Lauf[%i]= %%i\\n\",Lauf[%i]); //Datei-Ausgabe\n", atoi(argv[4]), atoi(argv[4]));
			}
			
			for(jLauf=0;jLauf<=atoi(argv[4]);jLauf++)fprintf(out,"\t");
			fprintf(out,"printf(\"Lauf[%i]= %%i\\r\",Lauf[%i]); //Bildschirmzähler\n", atoi(argv[4]), atoi(argv[4]));
			
			
			for(iLauf=1;iLauf<=atoi(argv[4]);iLauf++)
			{
				for(jLauf=1;jLauf<=atoi(argv[4])-iLauf+1;jLauf++)fprintf(out,"\t");
				fprintf(out,"}//Lauf%i\n",(atoi(argv[4])-iLauf)+1);
			}
		}

		if(strcmp(argv[2],"0")==1||strcmp(argv[3],"0")==1)fprintf(out,"\n");
		if(strcmp(argv[2],"0")==1)fprintf(out,"\tfclose( in );\n");
		if(strcmp(argv[3],"0")==1)fprintf(out,"\tfclose( out );\n");
		fprintf(out,"\n");
		fprintf(out,"\treturn 0;\n");
		
		fprintf(out,"};\n");

		fprintf(out,"\n");
		fprintf(out,"void _profil()\n");
		fprintf(out,"{\n");
		fprintf(out,"\tprintf(\"----------------------------------\\n\");\n");
		fprintf(out,"\tprintf(\"Gebrauch: %s [E] [A] [_]\\n\");\n",argv[1]);
		fprintf(out,"\tprintf(\"[E] ......... Eingabe Datei\\n\");\n");
		fprintf(out,"\tprintf(\"[A] ......... Ausgabe Datei\\n\");\n");
		fprintf(out,"\tprintf(\"[_] ......... _\\n\");\n");
		fprintf(out,"\tprintf(\"----------------------------------\\n\");\n");
		fprintf(out,"\tprintf(\"%s von Dietmar Schrausser\\n\");\n",argv[1]);
		fprintf(out,"\tprintf(\"compiliert: %%s @ %%s\\n\", __DATE__, __TIME__);\n");
		fprintf(out,"\texit(0);\n");
		fprintf(out,"};\n");

		fprintf(out,"\n");
		fprintf(out,"void _head()\n");
		fprintf(out,"{\n");
		fprintf(out,"\tprintf(\"\\n%s von Dietmar Schrausser\\n\");\n",argv[1]);
		fprintf(out,"\tprintf(\"compiliert: %%s @ %%s\\n\", __DATE__, __TIME__);\n");
		fprintf(out,"\tprintf(\"berechne %s:\\n\");\n",argv[1]);
		fprintf(out,"};\n");

		fprintf(out,"\n");
		fprintf(out,"//\n");
		fprintf(out,"// C Quelldateisystem-Generator AUTO von Dietmar Schrausser, (c) SCHRAUSSER 2010");

		fclose( out );

		//ASCII NOTIZ Datei Vorlage
		out = fopen( nt_, "w" );
		
		fprintf(out,"%s von Dietmar SCHRAUSSER 20__\n",argv[1]);
		fprintf(out,"\n");
		fprintf(out,"Allgemein\n---------\n%s _\n\n\n",argv[1]);
		fprintf(out,"Arbeitsweise\n------------\n\n\n");
		fprintf(out,"Handhabung\n----------\n");
		fprintf(out,"%s [E] [A] [_]\n",argv[1]);
		fprintf(out,"[E] ....... Eingabe Datei\n");
		fprintf(out,"[A] ....... Ausgabe Datei\n");
		fprintf(out,"[_] ....... _\n");
		fprintf(out,"\n");
		fprintf(out,"bsp: %s _ _\n",argv[1]);

		fprintf(out,"\n\n");
		fprintf(out,"-----------------------------------------------------------------------------\n");
		fprintf(out,"C Quelldateisystem-Generator AUTO von Dietmar Schrausser, (c) SCHRAUSSER 2010");
		
		fclose( out );
	}
	
	system (dir_);system (mov1_);system (mov2_);system (mov3_);system (mov4_);system ("del ~0"); //directory structure

	return 0;
}
         
void _profil()
{
	printf("-------------------------------------------\n");
	printf("Usage: AUTO [name] [in] [out] [nl] [L]\n");
	printf("[name] ..... C Project Name\n");
	printf("[input1] ... ASCII Input Filename\n");
	printf("[output] ... ASCII Output Filename\n");
    printf("[nl] ....... n of Loops\n");
	printf("[L] ........ Language (0)English (1)Deutsch\n");
	printf("-------------------------------------------\n");
	printf("AUTO by Dietmar Schrausser\n");
    printf("compiled on %s @ %s\n", __DATE__, __TIME__);
	exit(0);
}	

void _head() 
{
	printf("\nAUTO by Dietmar Schrausser\n");
	printf("compiled on %s @ %s\n", __DATE__, __TIME__);
	printf("computing AUTO:\n"); 
}                                           
