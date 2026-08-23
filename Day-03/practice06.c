#include<stdio.h>
int main ()
{
    int a ;
    int b;

    printf("Enter the Number a :");
    scanf("%d", &a);
    printf("Enter the Number b :");
    scanf("%d", &b);

    printf("\n Number = %d \n", ++a);
    printf("\n Number = %d \n", ++b);
    printf("\n Number = %d \n", --a);
    printf("\n Number = %d \n", --b);
    printf("\n Number = %d \n", a++);
    printf("\n Number = %d \n", b++);
    printf("\n Number = %d \n", a--);
    printf("\n Number = %d \n", b--);
    return 0;
}