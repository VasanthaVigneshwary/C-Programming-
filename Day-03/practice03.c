#include<stdio.h>
int main ()
{
    int a ;
    int b;

    printf("Enter the Number a :");
    scanf("%d", &a);
    printf("Enter the Number b :");
    scanf("%d", &b);

    printf("\n%d\n", a<b);
    printf("\n%d\n", a>b);
    printf("\n%d\n", a<=b);
    printf("\n%d\n", a>=b);
    printf("\n%d\n", a==b);
    printf("\n%d\n", a!=b);
    return 0;
}