//---------------------------------------------------| DOSCOM Dietmar SCHRAUSSER 2oo8                

#include <stdlib.h>
#include <stdio.h>

int main(void)
{

// alternativ via generiertem batchfile
//FILE *outStream;
//outStream  = fopen("_cpy_.bat", "w" );
//fprintf	(outStream,"xcopy d:\\EIGENEDATEIEN\\_LAUFENDES\\_C_Programme\\_DOSCOM_\\Release\\DOSCOM.EXE d:\\EIGENEDATEIEN\\_LAUFENDES\\_C_Programme\\_DOSCOM_\\_DOSCOM\\");

system ("cmd"); //-----------------------------------> öffnet eine dosshell im aktuellen verzeichnis  

//fclose( outStream );

// kopiert doscom.exe in das mit dem desktop verknüpfte verzeichnis, so kann doscom in ein beliebiges verzeichnis verschoben werden, dort ausgeführt und wieder gelöscht werden ohne am desktop zu fehlen
system("xcopy d:\\EIGENEDATEIEN\\_LAUFENDES\\_C_Programme\\_DOSCOM_\\Release\\DOSCOM.EXE d:\\EIGENEDATEIEN\\_LAUFENDES\\_C_Programme\\_DOSCOM_\\_DOSCOM\\");

// alternativ via generiertem batchfile
//system ("_cpy_.bat");

system ("ren DOSCOM.exe nil"); //--------------------> umbenennung in nil zur leichtern löscherkennung

return 0;
}