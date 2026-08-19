```c
/*
===========================================================
              C PROGRAMMING - DAY 01
              Basic C Examples
===========================================================

Topics:
1. Basic C Program Structure
2. Comments
3. Variables
4. Data Types
5. printf()
6. scanf()
7. Format Specifiers
8. Basic Input and Output
===========================================================
*/

#include <stdio.h>

int main()
{
    // -------------------------------------------------
    // Example 1: Print a simple message
    // -------------------------------------------------

    printf("Hello, World!\n");


    // -------------------------------------------------
    // Example 2: Integer variable
    // -------------------------------------------------

    int age = 20;

    printf("Age = %d\n", age);


    // -------------------------------------------------
    // Example 3: Float variable
    // -------------------------------------------------

    float height = 5.5;

    printf("Height = %f\n", height);


    // -------------------------------------------------
    // Example 4: Double variable
    // -------------------------------------------------

    double pi = 3.141592;

    printf("Pi = %lf\n", pi);


    // -------------------------------------------------
    // Example 5: Character variable
    // -------------------------------------------------

    char grade = 'A';

    printf("Grade = %c\n", grade);


    // -------------------------------------------------
    // Example 6: Multiple variables
    // -------------------------------------------------

    int marks = 95;
    char section = 'A';

    printf("Marks = %d\n", marks);
    printf("Section = %c\n", section);


    // -------------------------------------------------
    // Example 7: Taking integer input
    // -------------------------------------------------

    int number;

    printf("\nEnter a number: ");
    scanf("%d", &number);

    printf("You entered: %d\n", number);


    // -------------------------------------------------
    // Example 8: Taking multiple inputs
    // -------------------------------------------------

    int studentAge;
    float studentHeight;
    char studentGrade;

    printf("\nEnter your age: ");
    scanf("%d", &studentAge);

    printf("Enter your height: ");
    scanf("%f", &studentHeight);

    printf("Enter your grade: ");
    scanf(" %c", &studentGrade);


    // -------------------------------------------------
    // Display the entered information
    // -------------------------------------------------

    printf("\n----- Student Details -----\n");
    printf("Age    = %d\n", studentAge);
    printf("Height = %f\n", studentHeight);
    printf("Grade  = %c\n", studentGrade);


    // -------------------------------------------------
    // End of program
    // -------------------------------------------------

    return 0;
}
```
