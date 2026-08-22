#include<stdio.h>
int main ()
{
    float num ;
    printf("Enter A Number :");
    scanf("%f", &num);
    int Number= (int) num ;
    printf("\n Number = %d \n ",Number);
    printf("\n Result = %.2f",num);
    return 0 ;
}