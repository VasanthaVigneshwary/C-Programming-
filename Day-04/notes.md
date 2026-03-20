# DAY 04 — DECISION MAKING IN C

## 1. Introduction to Decision Making

Decision making allows a C program to choose which statements to execute based on a condition. For example, if marks are greater than or equal to 50, the result can be Pass; otherwise, it can be Fail. The main decision-making statements in C are `if`, `if-else`, `else-if`, and nested `if`.

## 2. if Statement

The `if` statement executes a block of code only when a condition is true.

Syntax:

    if (condition)
    {
        // statements
    }

Example:

    #include <stdio.h>

    int main()
    {
        int age = 20;

        if (age >= 18)
        {
            printf("Eligible");
        }

        return 0;
    }

Here, `age >= 18` is the condition. Since age is 20, the condition is true and the statement inside the `if` block executes. If the condition is false, the `if` block is skipped.

## 3. if-else Statement

The `if-else` statement is used when there are two possible outcomes.

Syntax:

    if (condition)
    {
        // statements if condition is true
    }
    else
    {
        // statements if condition is false
    }

Example:

    #include <stdio.h>

    int main()
    {
        int age = 16;

        if (age >= 18)
        {
            printf("Eligible");
        }
        else
        {
            printf("Not Eligible");
        }

        return 0;
    }

Here, `16 >= 18` is false, so the `else` block executes.

Logic:

    Condition
       |
    ---------
    |       |
   TRUE   FALSE
    |       |
    if     else
   block   block

## 4. Odd or Even

The modulus operator `%` can be used to check whether a number is odd or even. When a number is divided by 2, if the remainder is 0, the number is even. Otherwise, it is odd.

Example:

    #include <stdio.h>

    int main()
    {
        int number;

        printf("Enter a number: ");
        scanf("%d", &number);

        if (number % 2 == 0)
        {
            printf("Even");
        }
        else
        {
            printf("Odd");
        }

        return 0;
    }

Example: If number = 10, then `10 % 2 = 0`, so the number is Even. If number = 7, then `7 % 2 = 1`, so the number is Odd.

## 5. else-if Statement

The `else-if` statement is used when there are multiple possible conditions.

Syntax:

    if (condition1)
    {
        // statements
    }
    else if (condition2)
    {
        // statements
    }
    else
    {
        // statements
    }

C checks the conditions from top to bottom. Once a condition becomes true, its block executes and the remaining conditions are skipped.

## 6. Positive, Negative or Zero

A number can be positive, negative, or zero. We can use `if`, `else-if`, and `else` to check this.

Example:

    #include <stdio.h>

    int main()
    {
        int number;

        printf("Enter a number: ");
        scanf("%d", &number);

        if (number > 0)
        {
            printf("Positive");
        }
        else if (number < 0)
        {
            printf("Negative");
        }
        else
        {
            printf("Zero");
        }

        return 0;
    }

Logic:

    number > 0  → Positive
    number < 0  → Negative
    number == 0 → Zero

## 7. Logical Operators with Conditions

Logical operators are used to combine conditions. The three main logical operators are `&&`, `||`, and `!`.

`&&` means AND. Both conditions must be true.

Example:

    int age = 20;
    int mark = 80;

    if (age >= 18 && mark >= 50)
    {
        printf("Eligible");
    }

Here, `age >= 18` is TRUE and `mark >= 50` is TRUE. Therefore, `TRUE && TRUE` gives TRUE.

`||` means OR. At least one condition must be true.

Example:

    int age = 16;
    int mark = 80;

    if (age >= 18 || mark >= 50)
    {
        printf("Eligible");
    }

Here, `age >= 18` is FALSE and `mark >= 50` is TRUE. Therefore, `FALSE || TRUE` gives TRUE.

`!` means NOT. It reverses the result of a condition.

Example:

    int age = 20;

    if (!(age < 18))
    {
        printf("Adult");
    }

Here, `age < 18` is FALSE, so `!(FALSE)` becomes TRUE.

## 8. Nested if

An `if` statement inside another `if` statement is called a nested `if`.

Example:

    #include <stdio.h>

    int main()
    {
        int age = 20;
        int hasID = 1;

        if (age >= 18)
        {
            if (hasID == 1)
            {
                printf("Entry Allowed");
            }
        }

        return 0;
    }

The second condition is checked only when the first condition is true.

Logic:

    Age >= 18?
        ↓
       YES
        ↓
    Has ID?
        ↓
       YES
        ↓
    Entry Allowed

## 9. Largest of Two Numbers

We can use `if-else` to find the larger of two numbers.

Example:

    #include <stdio.h>

    int main()
    {
        int a = 20;
        int b = 15;

        if (a > b)
        {
            printf("A is larger");
        }
        else
        {
            printf("B is larger");
        }

        return 0;
    }

If `a > b`, A is larger. Otherwise, B is larger.

## 10. Largest of Three Numbers

To find the largest of three numbers, we can use relational operators and the AND operator `&&`.

Example:

    #include <stdio.h>

    int main()
    {
        int a = 10;
        int b = 25;
        int c = 15;

        if (a > b && a > c)
        {
            printf("A is largest");
        }
        else if (b > a && b > c)
        {
            printf("B is largest");
        }
        else
        {
            printf("C is largest");
        }

        return 0;
    }

For A to be the largest, both `a > b` and `a > c` must be true. For B to be the largest, both `b > a` and `b > c` must be true.

## 11. Pass or Fail

A simple pass/fail problem can be solved using `if-else`.

Example:

    #include <stdio.h>

    int main()
    {
        int mark;

        printf("Enter mark: ");
        scanf("%d", &mark);

        if (mark >= 50)
        {
            printf("Pass");
        }
        else
        {
            printf("Fail");
        }

        return 0;
    }

Logic:

    mark >= 50 → Pass
    mark < 50  → Fail

## 12. Grade Calculation

Grade calculation is a good example of using multiple `else-if` conditions.

Example:

    #include <stdio.h>

    int main()
    {
        int mark;

        printf("Enter mark: ");
        scanf("%d", &mark);

        if (mark >= 90)
        {
            printf("Grade A");
        }
        else if (mark >= 75)
        {
            printf("Grade B");
        }
        else if (mark >= 60)
        {
            printf("Grade C");
        }
        else if (mark >= 50)
        {
            printf("Grade D");
        }
        else
        {
            printf("Fail");
        }

        return 0;
    }

Conditions:

    90 and above → Grade A
    75–89        → Grade B
    60–74        → Grade C
    50–59        → Grade D
    Below 50     → Fail

## 13. Importance of Condition Order

The order of `else-if` conditions is very important.

Wrong:

    if (mark >= 50)
    {
        printf("Grade D");
    }
    else if (mark >= 75)
    {
        printf("Grade B");
    }

If mark is 80, C checks `80 >= 50`, which is TRUE. Therefore, it immediately prints Grade D and does not check the next condition.

Correct order:

    if (mark >= 90)
    {
        printf("Grade A");
    }
    else if (mark >= 75)
    {
        printf("Grade B");
    }
    else if (mark >= 60)
    {
        printf("Grade C");
    }
    else if (mark >= 50)
    {
        printf("Grade D");
    }
    else
    {
        printf("Fail");
    }

Always check higher ranges first when using this type of condition.

## 14. Leap Year

A year is a leap year when the year is divisible by 400, OR when the year is divisible by 4 AND not divisible by 100.

Condition:

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
    {
        printf("Leap Year");
    }
    else
    {
        printf("Not a Leap Year");
    }

Examples:

    2024 → Leap Year
    2023 → Not a Leap Year
    1900 → Not a Leap Year
    2000 → Leap Year

This problem combines `%`, `==`, `!=`, `&&`, `||`, `if`, and `else`.


## 16. Decision-Making Summary

`if` → Used for one condition.

`if-else` → Used for two possible outcomes.

`else-if` → Used for multiple conditions.

Nested `if` → An `if` statement inside another `if`.

`&&` → AND → Both conditions must be true.

`||` → OR → At least one condition must be true.

`!` → NOT → Reverses the condition.
