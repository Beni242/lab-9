//palindrome

#include <stdio.h>


int main ()
{
    int N, i, R, T;

    printf("enter N : ");
    scanf("%d", &N);

    i = 0;
    R = 0;
    T = N;

    while("N != 0")
    {
        i = N % 10;
        R = R*10 + i;
        N = N/10;
    }    

    if(T == R)

    printf("palindrom");

    else
    printf("N is not a palindrom");

    return 0;
}