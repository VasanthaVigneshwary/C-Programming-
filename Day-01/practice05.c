#include <stdio.h>
int main()
{
    char Name [50];
    int Age ;
    float Height ;
    char Grade ;

    printf("Enter your Name :");
    scanf("%s", Name);

    printf("Enter Your Age :");
    scanf("%d", &Age);

    printf("Enter Your Height :");
    scanf("%f",&Height);

    printf("Enter Your Grade :");
    scanf(" %c", &Grade);

    printf("\n..............student Details........\n");

    
    printf("Name = %s\n", Name);
    printf("Age = %d\n",Age);
    printf("Height=%f \n",Height);
    printf("Grade = %c\n", Grade);

    return 0 ;

    
}