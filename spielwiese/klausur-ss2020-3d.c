#include <stdio.h>

typedef struct {
    int d,m,y;
}DATE;

typedef struct {
    int anz;
    int artnr;
    float price;
    DATE bestelldatum;
}BSTL;

BSTL ein() {
   
   BSTL b;

   printf("Anzahl:");
   scanf("%d", &b.anz);

   printf("Artikelnummer:");
   scanf("%d", &b.artnr);

   printf("Einzelpreis:");
   scanf("%f", &b.price);

   printf("Datum Tag:");
   scanf("%i", &b.bestelldatum.d);  

   printf("Datum Monat:");
   scanf("%i", &b.bestelldatum.m);  

   printf("Datum Jahr:");
   scanf("%i", &b.bestelldatum.y);         

   return b;
}

int main() 
{
    int anzBes = 0;
    BSTL bestListe[10];
    
    while (anzBes <= 10) {
        bestListe[anzBes] =  ein();
        anzBes++;
    }

}