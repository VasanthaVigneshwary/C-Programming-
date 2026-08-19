
==========================================================
                 C PROGRAMMING - DAY 02
       Data Types, Constants & Type Conversion
===========================================================

Topics Covered:
1. Basic Data Types
2. sizeof()
3. Constants
4. Implicit Type Conversion
5. Explicit Type Conversion
6. Type Casting
7. Integer Division
8. ASCII Values
9. Character Arithmetic
10. Character Input
===========================================================
*/

#include <stdio.h>

int main()
{
    // -------------------------------------------------
    // Example 1: Basic Data Types
    // -------------------------------------------------

    int age = 19;
    float height = 5.2;
    double pi = 3.1415926535;
    char grade = 'O';

    printf("===== BASIC DATA TYPES =====\n");

    printf("Age = %d\n", age);
    printf("Height = %.2f\n", height);
    printf("Pi = %.10f\n", pi);
    printf("Grade = %c\n", grade);


    // -------------------------------------------------
    // Example 2: sizeof()
    // -------------------------------------------------

    printf("\n===== sizeof() =====\n");

    printf("Size of int = %zu bytes\n", sizeof(int));
    printf("Size of float = %zu bytes\n", sizeof(float));
    printf("Size of double = %zu bytes\n", sizeof(double));
    printf("Size of char = %zu byte\n", sizeof(char));


    // -------------------------------------------------
    // Example 3: Constant
    // -------------------------------------------------

    printf("\n===== CONSTANT =====\n");

    const float PI = 3.14159;

    printf("PI = %.5f\n", PI);


    // -------------------------------------------------
    // Example 4: Implicit Type Conversion
    // -------------------------------------------------

    printf("\n===== IMPLICIT TYPE CONVERSION =====\n");

    int number = 10;
    float convertedNumber;

    convertedNumber = number;

    printf("Integer value = %d\n", number);
    printf("Converted float value = %f\n", convertedNumber);


    // -------------------------------------------------
    // Example 5: Explicit Type Conversion
    // -------------------------------------------------

    printf("\n===== EXPLICIT TYPE CONVERSION =====\n");

    int a = 10;
    int b = 3;

    float result;

    result = (float)a / b;

    printf("10 / 3 = %f\n", result);


    // -------------------------------------------------
    // Example 6: Integer Division
    // -------------------------------------------------

    printf("\n===== INTEGER DIVISION =====\n");

    int x = 10;
    int y = 3;

    printf("10 / 3 = %d\n", x / y);


    // -------------------------------------------------
    // Example 7: Float to Integer Type Casting
    // -------------------------------------------------

    printf("\n===== FLOAT TO INTEGER =====\n");

    float price = 99.99;

    int integerPrice = (int)price;

    printf("Original float = %.2f\n", price);
    printf("After casting to int = %d\n", integerPrice);


    // -------------------------------------------------
    // Example 8: ASCII Value
    // -------------------------------------------------

    printf("\n===== ASCII =====\n");

    char ch = 'A';

    printf("Character = %c\n", ch);
    printf("ASCII Value = %d\n", ch);


    // -------------------------------------------------
    // Example 9: Character Arithmetic
    // -------------------------------------------------

    printf("\n===== CHARACTER ARITHMETIC =====\n");

    char letter = 'D';

    printf("Character = %c\n", letter);
    printf("Next Character = %c\n", letter + 1);
    printf("Previous Character = %c\n", letter - 1);


    // -------------------------------------------------
    // Example 10: Character Input
    // -------------------------------------------------

    printf("\n===== CHARACTER INPUT =====\n");

    char inputChar;

    printf("Enter a character: ");
    scanf(" %c", &inputChar);

    printf("You entered = %c\n", inputChar);
    printf("ASCII Value = %d\n", inputChar);


    // -------------------------------------------------
    // End of Program
    // -------------------------------------------------

    return 0;
}