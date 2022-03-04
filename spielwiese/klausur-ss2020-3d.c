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



void aus(BSTL b) {
    printf("%i\t%i\t%.2f\t", b.anz, b.artnr, b.price);
    printf("%i.%i.%i\n", b.bestelldatum.d, b.bestelldatum.m, b.bestelldatum.y);
}

int main() 
{
    int anzBes = 0;
    int maxBest = 1;
    float minPrice = 0.0;
    BSTL bestListe[maxBest];
    
    while (anzBes <= maxBest) {
        bestListe[anzBes] =  ein();
        anzBes++;
    }
    anzBes = 0;

   printf("Minimalpreis?");
   scanf("%f", &minPrice);   

    printf("Anzahl\tArtNr\tPreis\tDatum\n");
    while (anzBes <= maxBest) {
        if (bestListe[anzBes].price >= minPrice) {
           aus(bestListe[anzBes]);
        }
        anzBes++;
    }

}