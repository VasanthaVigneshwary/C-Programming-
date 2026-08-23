#include <stdio.h>
int main()
{
    int a ;
    
    printf("Enter Mark :");
    scanf("%d", &a);
    
     if( a >=90)
     {
     printf("Grade A "); 
    }
    else if (a >=80)
    {
        printf("Grade B");
    }
    else if (a >=70)
    {
        printf("Grade C");
    }
    else 
    {
        printf("fail");
    }
    return 0 ;
}