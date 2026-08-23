#include<stdio.h>
int main ()
{
    int a ;
    int b;

    printf("Enter the Number a :");
    scanf("%d", &a);
    printf("Enter the Number b :");
    scanf("%d", &b);

    printf("\n both greater than 10 = %d \n",a>10 && b>10);
    printf("\n At least one greater than 10 = %d\n", a>10 || b>10);
    printf("\nFirst Number is not Greater than 10 = %d \n", !(a>10));
    return 0;
}