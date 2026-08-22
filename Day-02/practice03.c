#include<stdio.h>
int main()
{
    int a ;
    int b ;
    float Average ;
    printf("Enter the first Number:");
    scanf("%d" ,&a);
    printf("Enter the second number :");
    scanf("%d",&b);
    Average = (float)(a+b)/2 ;
    printf("Average = %.2f",Average);
    return 0 ; 
}