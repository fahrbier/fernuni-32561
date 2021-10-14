
/*****************************************************************************/
/*
/*      FernUni Hagen, Lehrstuhl EvIS
/*
/*      C-Kurs 810
/*
/*      Beispiel:       09-06, Lohn und Gehalt
/*
/*      Konzepte/       Unionen und Strukturen, Felder aus Strukturen
/*      Sprachelemente: 
/*
/*      Aufgabenteil:   nein
/*
/*      Beschreibung:   Das Programm zeigt den Umgang mit Unionen, die auch
/*                      Teil einer Struktur sein koennen.
/*
/*****************************************************************************/

/*****************************************************************************/
/* Include-Dateien laden
/*****************************************************************************/

#include <stdio.h>      /* enthaelt Ein- und Ausgabefunktionen */
#include <string.h>     /* Funktionen fuer die Stringmanipulation */

/*****************************************************************************/
/* Makros definieren
/*****************************************************************************/

#define PAUSE {printf("\nRETURN!\n"); fflush(stdin); getchar();}
#define MAXZEICHEN 15

/*****************************************************************************/
/* Typen definieren
/*****************************************************************************/

typedef struct
        {
            float std_zahl;
            float std_lohn;
        } LOHN;

typedef union
        {
            float gehalt;
            LOHN  lohn;
        } GELD;

typedef struct
        {
            int persnr;
            char name[MAXZEICHEN];
            char std_oder_geh;
            GELD geld;
        } PERSONAL;

/*****************************************************************************/
/* Globale Variable definieren
/*****************************************************************************/

PERSONAL personal[5];   /* Strukturen-Vektor */

/*****************************************************************************/
/* Funktionen definieren
/*****************************************************************************/
void strcpy_n (char*);
int main(void)
{
    /* lokale Variablen */
    int i;
    
    /* Anweisungen */

    /* Information */
    printf("\nFernUni Hagen, Lehrstuhl EvIS, C-Kurs 810\n");
    printf("----- Beispiel: 09-06, Lohn und Gehalt --------------------\n\n");
    printf("\nDas Programm verarbeitet Lohn- und Gehaltsdaten.\n");

    /* Fuellen der Datensaetze des Strukturen-Vektors mit Informationen */
    personal[0].persnr = 1;
    strcpy(personal[0].name, "Mayer");
    personal[0].std_oder_geh = 'G';
    personal[0].geld.gehalt = 3199.5f;

    personal[1].persnr = 2;
    strcpy(personal[1].name, "Mueller");
    personal[1].std_oder_geh = 'G';
    personal[1].geld.gehalt = 3628.52f;

    personal[2].persnr = 3;
    strcpy(personal[2].name,  "Knut");
    personal[2].std_oder_geh = 'L';
    personal[2].geld.lohn.std_zahl = 134.0f;
    personal[2].geld.lohn.std_lohn = 15.2f;

    personal[3].persnr = 4;
    strcpy(personal[3].name,  "Hans");
    personal[3].std_oder_geh = 'L';
    personal[3].geld.lohn.std_lohn = 12.79f;
    personal[3].geld.lohn.std_zahl = 134.0f;

    personal[4].persnr = 5;
    strcpy(personal[4].name,  "Urs");
    personal[4].std_oder_geh = 'L';
    personal[4].geld.lohn.std_lohn = 19.99f;
    personal[4].geld.lohn.std_zahl = 130.0f;

    /* Ermittlung von Loehnen, Ausgabe von Lohn- und Gehaltsdaten*/
    for (i = 0; i <= 4; i++)
    {
        printf("\nPersonal-Nr.: %d     ", personal[i].persnr);
        printf("Name: %-14s  ", personal[i].name);
        if (personal[i].std_oder_geh == 'G')
                printf("Gehalt: %.2f", personal[i].geld.gehalt);
        else
                printf("Lohn:   %.2f",
                personal[i].geld.lohn.std_zahl*personal[i].geld.lohn.std_lohn);
        putchar('\n');
        }
    printf("\n");
    PAUSE;
}
