#include <stdio.h>

int fibo(int i) 
{

    if (0 == i)
        return 0;

    if (1 == i)
        return 1;
 
    return fibo(i-1) + fibo (i-2);   

}

int main()
{
    int z;
    int i = 3;

    int number;
    printf("Die wievielte Fibonacci Zahl soll ich zeigen?: ");
    scanf("%d", &number);

    z = fibo(number);
    printf("Die Fibonacci Zahl zu %d ist %d\n", number, z); 
}