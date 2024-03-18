# ConsoleApp_Tools
Console tool applications.

## AUTO

Creates a c-source file and directory structure.

- Declaration of c-project parmeters (name, filestreams, loops).
- Creation of 1 c-source framework-file `NAME.c` as specified.
- Creation of 1 ASCII framework-file `NOTE_NAME.txt`.

Directory structure:

      _NAME_\NAME.c
      _NAME_\debug\NOTE_NAME.txt	  
                   DOSCOM.exe
Usage:

     AUTO [name] [in] [out] [nl] [L]
     [name] .... C Projekt Name 
     [input] ... ASCII Input Filename
     [output] .. ASCII Output Filename
     [nl] ...... Number of Loop-Shells to implement
     [L] ....... Language of Comments and Text

Example: 

     AUTO TEST 0 0 0 0
     AUTO PRO1 input.txt output.txt 3 1
     AUTO PRO2 0 output.txt 1 0

## DLS

Schreibt eine Datei zur Konsole.
  
Handhabung:

     DLS [input] [ [i]m1]m2] ]
     [input] ... Eingabe Datei
     optional:
     [i] ....... (1):Zeigt Dateiname, n, k ggf. m1, m2 sowie i, j 
                 (0):Zeigt keine zusaetzliche Information
     [m1] ...... Start Zeile der Textausgabe
     [m2] ...... End Zeile der Textausgabe

Bsp.: 

     DLS NOTIZ_DLS.txt
     DLS NOTIZ_DLS.txt 1
     DLS NOTIZ_DLS.txt 1 1
     DLS NOTIZ_DLS.txt 0 3 10
     DLS NOTIZ_DLS.txt 1 10 10

## FIL

Schreibt eine Liste aller spezifizierten Dateien des aktuellen Verzeichnisses in eine ASCII Datei.
  
Handhabung:

     FIL [output] [*] 
     [output] .. Ausgabe Datei 
     [*] ....... Dateispezifikation

Bsp.:

     FIL dir.txt *.*

## KOPIE

Kopiert eine Datei.

- Übernahme einer Datei. 
- Ausgabe einer (ggf. modifizierten) Dateikopie.

Handhabung:

     KOPIE [input] [output] ([switch]) 
     [input] ... Eingabe Datei 
     [output] .. Ausgabe Datei 

Bsp.: 	

     KOPIE DTREN.BAT DTRENA.BAT 
     
## SRC

Schreibt das Kommandozeilenargument in eine ASCII Datei.
  
Handhabung:

     SRC [output] [typ] [arg] [sw]
     [output] ... Ausgabe Datei
     [typ] ...... (0):anhaengen (1):neu erstellen
     [arg] ...... Argument
     [sw] ........(0):Zeilenumbruch (1):Leerzeichen (2):kein Zeichen

Bsp.: 

     SRC out.bat 1 lsn 1
     SRC out.bat 0 nul.txt 0

## T

Fügt die Kommandozeilenargumente in die ASCII Datei `T.txt` ein. 
Die Argumente werden in der Datei durch ein Leerzeichen getrennt.
  
Handhabung:

     T [argi] ... [argn]
     [argi] ... String

Bsp.:

     T Das ist ein sehr einfaches Programm
     T zur schnellen Texteingabe in eine Datei.

## DOSCOM

Startet eine DOS-Shell im aktuellen Verzeichnis.
Kopiert sich selbst in das mit dem Desktop verknüfte Verzeichis [_DOSCOM].
Umbenennung in "nil" nach Gebrauch im aktuellen Verzeichis.

Handhabung:

Aus der Desktopverknüpfung [_DOSCOM] in ein beliebiges Verzeichnis ziehen, 
dort ausführen und nach Gebrauch löschen.

## FINDE

Dateien suchen und finden.

Handhabung: 
    
     FINDE [datei]
     [datei] ... zu findende Datei

## LSN

Löscht eine Datei. 

Arbeitsweise:

- Übernahme eines Dateinamens einer zu löschenden Datei.  

Handhabung:

     LSN [datei] 
     [datei] ... Dateiname 

Bsp.:

     LSN oo

## CMND, CMNDw

Führt Consolenbefehle mit Argumenten aus.

Handhabung: 

     CMND [cmd]
     [cmd]... Command

     CMNDw [cmd] [argc]
     [cmd].......... Command
     [argc].. n of Arguments

