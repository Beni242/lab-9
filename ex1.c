//greatest number

#include <stdio.h>


int main ()
{
    int A,B, C;

    printf("enter number A : ");
    scanf("%d", &A);

    printf("enter number B : ");
    scanf("%d", &B);

    printf("enter number C : ");
    scanf("%d", &C);

    if(A > B && A > C)
    {
        printf("A is the greatest number");
    }

    if(B > A && B > C)
    {
        printf("B is the greatest number");
    }

    if(C > B && C > A)
    {
        printf("C is the greatest number");
    }

    if(A == B && A == C)
    {
        printf("they are equals");
    }
    return 0;
}
