#include <stdio.h>


int main ()
{
    int low, high;

    low = 1000;
    high = 2000;

    while(low < high)
    {
        printf("even number : %d\n", low);
        low+=2;
    }

    return 0;
}