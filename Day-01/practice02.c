#include <stdio.h>
int main ()
{
    char Name [50] ;
    int age ;

    printf("Enter Your Name :" );
    scanf("%s",Name);

    printf("Enter Your Age:");
    scanf("%d", &age);

    printf("\n Hello %s\n",Name);
    printf("You are %d Years old\n",age);

    return 0 ;
}