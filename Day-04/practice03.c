#include <stdio.h>
int main()
{
    int a ;
    int b ;
    int c ;
    printf("enter a number 1 :");
    scanf("%d", &a);
    printf("enter a number 2 :");
    scanf("%d", &b);
    printf("enter a number :");
    scanf("%d", &c);
     if( a > b && a> c)
     {
     printf("A is Largest"); 
    }
    else if (b >a && b > c)
    {
        printf("B is Largest");
    }
    else
    {
        printf("C  is Largest");
    }
    return 0 ;
}