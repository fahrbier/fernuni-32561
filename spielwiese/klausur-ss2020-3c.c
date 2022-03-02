#include <stdio.h>

int binomial (int n ,int k)
{
    
    if ( k>n )
        return 0; 
    if ((k==0) || (n==0))
        return 1; 
    
    return binomial (n-1, k-1) + binomial(n-1,k);   

}

int main() 
{
   int n=10, k=5;
   printf("nCk %iC%i: %i\n", n, k, binomial(n,k));
}