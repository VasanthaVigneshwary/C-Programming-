#include <stdio.h>
int main ()
{
    int a ;
    float b;
    char c;
    double e;

    printf("Enter an integer :");
    scanf("%d", &a);

    printf("Enter a float :");
    scanf("%f", &b);

    printf("Enter a Character :");
    scanf(" %c",&c);

    printf("Enter a double :");
    scanf("%lf", &e);

    printf("\n Integer = %d\n",a);
    printf("\n Float=%f\n",b);
    printf("\n Character= %c\n",c);
    printf("\n Double = %lf\n",e);

    return 0 ;

}