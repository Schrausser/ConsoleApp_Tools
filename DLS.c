//---------------------------------------------------------------------------| DLS by Dietmar SCHRAUSSER 2010               

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <conio.h>
#include <math.h>

void _profil();                     

char dbuffer[9],tbuffer[9];  

main(int argc, char *argv[])   
{   
	FILE *inStream; 
	
	int iLauf, n_=0, k_=0, ki=0, dez=0, zlr=0, zlr2=1, dn;
	char tmp[550], c_;
      
	if(argc < 2 || argc > 5)                                 {  printf("\n> check arguments\n"       ); _profil();}
	if(fopen(argv[1],"r")==0)                                {  printf("\n> check file %s\n", argv[1]); _profil();}
	if(argc==3 && ( atoi(argv[2]) >1  || atoi(argv[2]) <0 ) ){  printf("\n> check [i] (0,1)\n"       ); _profil();}
	


	inStream = fopen( argv[1], "r" ); do { if(fgetc(inStream)=='\n') n_++;} while (feof (inStream) == 0);   fclose( inStream  );	
	
	if(argc==4 &&   atoi(argv[3]) >n_                       ){  printf("\n> check m (m>n)\n"        ); _profil();}
	if(argc==5 && ( atoi(argv[3]) >n_ || atoi(argv[4]) >n_) ){  printf("\n> check m1, m2 (m>n)\n"   ); _profil();}
	if(argc==5 && ( atoi(argv[3]) >      atoi(argv[4])    ) ){  printf("\n> check m1, m2 (m1>m2)\n" ); _profil();}
	
	inStream = fopen( argv[1], "r" ); 
	do 
	{ 
		do {c_=fgetc(inStream); ki++;}while (c_ != '\n' && feof (inStream) == 0); 
		
		if (k_< ki) k_=ki; ki=0;
	} 
	while (feof (inStream) == 0);  
	
	if (k_< ki) k_=ki; k_-=1;
	
	
	fclose( inStream  );
	
	if (argc >= 3 && argv[2][0]=='1')
	{
		printf("\nDatei: %s (n=%i k=%i) ",argv[1], n_,k_);
		if(argc == 4)printf("(m=%s)",argv[3]);
		if(argc == 5)printf("(m1=%s m2=%s)",argv[3],argv[4]);
		
		printf("\n");

		printf("+ ");
		for(iLauf=0; iLauf<=  k_; iLauf++)
		{ 
			if(iLauf-dez!=0)printf("%i",iLauf-dez); 
			if(iLauf-dez==0 && iLauf>0)printf("."); 
			
			zlr++; 
			
			if(zlr==10){zlr=0;dez+=10;}
		}
	}

   	dez=0; zlr=1;          
	
	inStream = fopen( argv[1], "r" ); 

	printf("\n");

	if (argc >= 4 )for(iLauf=1; iLauf< atoi(argv[3]); iLauf++) {fgets(tmp,500,inStream); zlr2++; if(zlr2==11) zlr2=1;}
    
	                     if (argc == 4 )dn=n_;
	                     if (argc == 5 )dn=atoi(argv[4]);
	zlr=zlr2;
	if (argc >= 4 )for(iLauf=0; iLauf<= dn-atoi(argv[3]); iLauf++) 
	{
		if(argv[2][0]=='1')
		{
			if(iLauf+zlr2-dez!=0 && iLauf+zlr2-dez!=10)   printf("%i ",iLauf+zlr2-dez); 
			if(iLauf+zlr2-dez==0  || iLauf+zlr2-dez==10 ) printf(". "); 
			
			zlr++; 
			
			if(zlr==11){zlr=1;dez+=10;}
		}
		printf("%s",fgets(tmp,500,inStream));
	}
	else //do{ putch(fgetc(inStream)); }while(feof(inStream)==0);
	for(iLauf=0; iLauf<  n_; iLauf++)
	{
		if (argc == 3 && argv[2][0]=='1')
		{
			if(iLauf+1-dez!=0)printf("%i ",iLauf+1-dez); 
			if(iLauf+1-dez==0)printf(". "); 
			
			zlr++; 
			
			if(zlr==10){zlr=0;dez+=10;}
		}
		printf("%s",fgets(tmp,500,inStream));
	}
 
	fclose( inStream );

	return 0;
}
         
void _profil()
{
	printf("--------------------------------------\n");
	printf("Usage: DLS [Input] [ [i]m1]m2] ]\n");
	printf("[input] ... Eingabe Datei\n");
	printf("[i] ....... (1):n,k Info (0):ohne Info\n");
	printf("[m1] ...... Start Zeile\n");
	printf("[m2] ...... End Zeile\n");
	printf("--------------------------------------\n");
	printf("DLS by Dietmar Schrausser\n");
    printf("compiled on %s @ %s\n", __DATE__, __TIME__);
	exit(0);
}	

                                        
