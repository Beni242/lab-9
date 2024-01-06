//Sum

#include <stdio.h>
#include <math.h>

int main ()
{
    int N, i, S, T, power, F, x;

    //numbers of terms 

    printf("enter N : ");
    scanf("%d", &N);

    //power
    power = 1;
    
   //factorial number
    i = 1;
    F = 1;

    //sum
    S = S + T;

    //temporary value
T = ( x ^ power)/F ;

    while ( i<= N)
    {
        S = S + T;

        power++;
        i++;

        F = F * i;
    }

    printf("the sum is : %d", S);
    
   
    return 0;
}