
/*****************************************************************************/
/*
/*      FernUni Hagen, Lehrstuhl EvIS
/*
/*      C-Kurs 810
/*
/*      Beispiel:       09-04, Personen- und Mitarbeiterdaten
/*
/*      Konzepte/       Strukturen und der Zugriff auf deren
/*      Sprachelemente: Komponenten
/*
/*      Aufgabenteil:   nein
/*
/*      Beschreibung:   Das Programm speichert Daten eines Mitarbeiters
/*                      einer Firma in zwei Strukturen ab.
/*
/*****************************************************************************/

/*****************************************************************************/
/* Include-Dateien laden
/*****************************************************************************/

#include <stdio.h>      /* enthaelt Ein- und Ausgabefunktionen */
#include <string.h>     /* Funktionen fuer Zeichenkettenmanipulation */

/*****************************************************************************/
/* Makros definieren
/*****************************************************************************/

#define PAUSE {printf("\nRETURN!\n"); fflush(stdin); getchar();}
#define MAXZEICHEN 16

/*****************************************************************************/
/* Typen definieren
/*****************************************************************************/

/* Strukturtyp "PERSONAL" definieren */
typedef struct
        {
            char name[MAXZEICHEN];
            char vorname[MAXZEICHEN];
            int  prsnr;
        } PERSONAL;

/*****************************************************************************/
/* Globale Variablen definieren
/*****************************************************************************/

/* Vereinbarung einer Variablen des Datentyps Personal */
PERSONAL mitarbeiter;

/* Globale Struktur "person" definieren */
struct
{
    char name[MAXZEICHEN];
    char vorname[MAXZEICHEN];
    int  alter;
} person;

/*****************************************************************************/
/* Funktionen definieren
/*****************************************************************************/

int main(void)
{
    /* Anweisungen */

    /* Information */
    printf("\nFernUni Hagen, Lehrstuhl EvIS, C-Kurs 810\n");
    printf("----- Beispiel: 09-04, Personen- und Mitarbeiterdaten -----\n\n");

    printf("\nDas Programm liest und schreibt Personen- und Mitarbeiterdaten.\n");

    printf("\nDateneingabe.");
    /* in die Komponente name der Struktur person wird eine Zeichenkette
       eingelesen */
    printf("\nBitte Namen angeben (max. %i Zeichen): ",MAXZEICHEN-1);
    scanf("%s", &person.name, MAXZEICHEN-1);

    /* die eingelesene Zeichenkette wird in die Komponente name der
       Struktur mitarbeiter kopiert */
    strcpy(mitarbeiter.name,  person.name);

    /* Das gleiche nochmal fuer den Vornamen */
    printf("Bitte Vornamen angeben (max. %i Zeichen): ",MAXZEICHEN-1);
    scanf("%s",&mitarbeiter.vorname, MAXZEICHEN-1);
    strcpy(person.vorname,  mitarbeiter.vorname);

    /* Alter wird eingelesen */
    printf("Bitte Alter angeben: ");
    scanf("%d",&person.alter);

    /* Personalnummer wird eingelesen */
    printf("Bitte Personal-Nr. angeben (1 <= Nr. <= 1000): ");
    scanf("%d",&mitarbeiter.prsnr);

    /* Ausgabe der eingelesenen Informationen durch das Ansprechen der
       jeweiligen Komponenten der Struktur */
    printf("\nDatenausgabe.");
    printf("\n%s %s", mitarbeiter.vorname, person.name);
    printf(" ist %d Jahre alt", person.alter);
    printf(" und hat die Personal-Nr. %d.\n\n", mitarbeiter.prsnr);
    PAUSE;
}
