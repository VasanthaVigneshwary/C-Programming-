#include <stdio.h>
int main()
{
    int year;
    
    printf("Enter a year :");
    scanf("%d", &year);

    if(year % 400 == 0 )
    {
        printf("it is a Leap Year");
        }
    else 
    {
        printf("Not a leap year");
    }
    return 0 ;
}