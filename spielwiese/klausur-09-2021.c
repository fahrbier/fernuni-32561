#include <stdio.h>
#include <stdlib.h>

typedef enum {TRUE, FALSE} BOOLEAN;
typedef enum {VW, BMW, PORSCHE} MARKE;
typedef struct {
  MARKE marke;
  int vmax;
  BOOLEAN abs;
  int tueren;
} car_t;

int main (void);
car_t getCar(car_t car);
float schaetzeWert(car_t car);

car_t getCar(car_t car) {
    return car;
}

float schaetzeWert(car_t car) {

  printf("Schaetze Wert\n Marke: %i\n vmax: %i\n abs: %i\n Tueren: %i\n", car.marke, car.vmax, car.abs, car.tueren);

  float wert = 0;
  wert = car.vmax * 50 * car.tueren;
  wert = wert + (car.abs == TRUE ? 5000 : 0);
  wert = wert * (car.marke == BMW ? 1.25 : 1);
  wert = wert * (car.marke == PORSCHE ? 2 : 1);

  printf("Schaetzwert: %.2f\n", wert);

  return wert;
}

int main() {
    car_t dienstfahrzeuge[3]= {
        getCar( (car_t){VW, 190, TRUE, 5} ),
        getCar( (car_t){BMW, 210, TRUE, 3} ),
        getCar( (car_t){PORSCHE, 260, FALSE, 4} )
    };

    double gesamtpreis = 0;

    for (int i=0 ; i<3 ; i++){
		gesamtpreis = gesamtpreis + schaetzeWert(dienstfahrzeuge[i]);
	}
	
	printf("Der geschätzte Gesamtpreis aller Fahrzeuge liegt bei: %.2f\n\n", gesamtpreis);
}