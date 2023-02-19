# ConsoleApp_Tools
Console tool applications.

## AUTO

Creates a c-source file and directory structure.

- Declaration of c-project parmeters (name, filestreams, loops).
- Creation of 1 c-source framework-file NAME.c as specified.
- Creation of 1 ASCII framework-file NOTE_NAME.txt.

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
