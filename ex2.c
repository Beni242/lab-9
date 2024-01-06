//factorial of a number
#include <stdio.h>


int main ()
{
    int i, N, F;

    printf("enter number N: ");
    scanf("%d", &N);

    i = 1;
    F = 1;

    while ( i<= N)
    {
        F = F*i;
        i++;
    }

    printf("the factorial number of %d is : %d ", N, F);

    return 0;
    
}