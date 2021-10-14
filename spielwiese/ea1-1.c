#include <stdio.h>


int arr[5] = {2, 0, 0, 7, 1};

int f(int v, int i)
{
  int a = 0;
  if (0 <= i && i < 5){
    if (arr[i] == v) 
      a = 1;
    else
      a = f(v + 1, i + 1);
    } 
      return a;
}


int main()
{
  int z;
  z = f(4,0);
    printf("\n\n/* Ausgabe 4 */  \ni = %d ", z);  /* Ausgabe 4 */  
    printf("\n\n");
}