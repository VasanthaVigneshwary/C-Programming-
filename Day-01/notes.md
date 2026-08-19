# C Programming — Day 01

## Topics Covered

* Introduction to C
* Basic C Program Structure
* Comments
* Variables
* Data Types
* Declaration and Initialization
* `printf()`
* `scanf()`
* Format Specifiers
* Escape Sequences
* Basic Input and Output

---

## 1. What is C?

C is a general-purpose programming language developed by Dennis Ritchie at Bell Labs.

C is:

* Fast
* Efficient
* Portable
* Structured
* Case-sensitive

C is an important language for learning programming fundamentals because it helps us understand variables, memory, functions, arrays, pointers, and program logic.

### Common Uses of C

* Operating Systems
* Embedded Systems
* System Software
* Compilers
* Device Drivers
* Networking
* Firmware

---

## 2. Basic C Program Structure

A basic C program:

```c
#include <stdio.h>

int main()
{
    printf("Hello, World!");

    return 0;
}
```

### Explanation

**`#include <stdio.h>`**

Includes the Standard Input/Output header file. It provides functions such as `printf()` and `scanf()`.

**`int main()`**

`main()` is the starting point of execution of a C program.

**`{ }`**

Curly braces define a block of code.

**`printf()`**

Used to display output on the screen.

**`return 0;`**

Indicates successful completion of the program.

**`;`**

Most C statements end with a semicolon.

---

## 3. Comments

Comments are notes written inside a program for programmers. The compiler ignores comments.

### Single-Line Comment

```c
// This is a single-line comment
```

### Multi-Line Comment

```c
/*
   This is a
   multi-line comment
*/
```

### Why Use Comments?

* Explain code
* Improve readability
* Add notes
* Temporarily disable code

---

## 4. Variables

A variable is a named memory location used to store data.

Example:

```c
int age = 20;
```

Here:

* `int` → Data type
* `age` → Variable name
* `20` → Value

A variable's value can be changed.

```c
int age = 20;

age = 21;
```

Now `age` contains `21`.

---

## 5. Declaration and Initialization

### Declaration

Declaration tells the compiler that a variable exists.

```c
int age;
```

### Initialization

Initialization means assigning an initial value to a variable.

```c
int age = 20;
```

We can also declare first and assign later:

```c
int age;

age = 20;
```

---

## 6. Basic Data Types

| Data Type | Used For                        | Example    |
| --------- | ------------------------------- | ---------- |
| `int`     | Whole numbers                   | `20`       |
| `float`   | Decimal numbers                 | `5.5`      |
| `double`  | Higher precision decimal values | `3.141592` |
| `char`    | Single character                | `'A'`      |

### Examples

```c
int age = 20;

float height = 5.5;

double pi = 3.141592;

char grade = 'A';
```

### Character vs String

A single character uses single quotes:

```c
'A'
```

A string/text uses double quotes:

```c
"Hello"
```

Strings will be studied properly on Day 11.

---

## 7. Variable Naming Rules

Variable names can contain:

* Letters
* Digits
* Underscores

A variable name cannot start with a digit.

Correct:

```c
int age;
int student1;
int student_age;
```

Incorrect:

```c
int 1age;
```

Spaces are not allowed.

Incorrect:

```c
int student age;
```

Correct:

```c
int student_age;
```

C is case-sensitive:

```text
age
Age
AGE
```

These are different identifiers.

### Good Naming Examples

```c
int age;
float height;
int marks;
char grade;
```

Meaningful variable names make programs easier to understand.

---

## 8. `printf()` — Output

`printf()` is used to display output on the screen.

Example:

```c
printf("Hello");
```

Output:

```text
Hello
```

We can also print variables.

```c
int age = 20;

printf("%d", age);
```

Output:

```text
20
```

---

## 9. Format Specifiers

Format specifiers tell C what type of data is being used.

| Data Type | Format Specifier |
| --------- | ---------------- |
| `int`     | `%d`             |
| `float`   | `%f`             |
| `double`  | `%lf`            |
| `char`    | `%c`             |
| String    | `%s`             |

### Examples

```c
int age = 20;
printf("%d", age);
```

```c
float height = 5.5;
printf("%f", height);
```

```c
double pi = 3.141592;
printf("%lf", pi);
```

```c
char grade = 'A';
printf("%c", grade);
```

---

## 10. Printing Text and Variables Together

Example:

```c
int age = 20;

printf("My age is %d", age);
```

Output:

```text
My age is 20
```

Multiple values can also be printed:

```c
int age = 20;
char grade = 'A';

printf("Age = %d\n", age);
printf("Grade = %c\n", grade);
```

Output:

```text
Age = 20
Grade = A
```

---

## 11. Escape Sequences

Escape sequences are special characters used inside strings.

### `\n` — New Line

```c
printf("Hello\nWorld");
```

Output:

```text
Hello
World
```

### `\t` — Tab

```c
printf("Name\tAge");
```

Output:

```text
Name    Age
```

---

## 12. `scanf()` — Input

`scanf()` is used to take input from the user.

Example:

```c
int age;

printf("Enter your age: ");
scanf("%d", &age);

printf("Age = %d", age);
```

If the user enters:

```text
20
```

The variable `age` stores `20`.

---

## 13. Why Do We Use `&` in `scanf()`?

Example:

```c
scanf("%d", &age);
```

`&age` represents the address of the variable `age`.

`scanf()` uses this address to store the entered value in the variable.

For now, remember:

```text
&variable → Address of the variable
```

Pointers and memory addresses will be studied in detail on Day 12.

---

## 14. Input for Different Data Types

### Integer

```c
int age;

scanf("%d", &age);
```

### Float

```c
float height;

scanf("%f", &height);
```

### Double

```c
double salary;

scanf("%lf", &salary);
```

### Character

```c
char grade;

scanf(" %c", &grade);
```

### String

```c
char name[50];

scanf("%s", name);
```

Strings and character arrays will be studied properly on Day 11.

---

## 15. Basic Input and Output Flow

```text
User
  ↓
Input
  ↓
scanf()
  ↓
Variable
  ↓
printf()
  ↓
Output
```

Example:

```c
#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Your age is %d", age);

    return 0;
}
```

---

## 16. Complete Example

```c
#include <stdio.h>

int main()
{
    int age;
    float height;
    char grade;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your height: ");
    scanf("%f", &height);

    printf("Enter your grade: ");
    scanf(" %c", &grade);

    printf("\n----- Student Details -----\n");
    printf("Age = %d\n", age);
    printf("Height = %f\n", height);
    printf("Grade = %c\n", grade);

    return 0;
}
```

---

## 17. Common Beginner Mistakes

### Mistake 1 — Wrong Header File

Incorrect:

```c
#include <studio.h>
```

Correct:

```c
#include <stdio.h>
```

Remember:

```text
stdio = standard input/output
```

### Mistake 2 — Forgetting Semicolon

Incorrect:

```c
printf("Hello")
```

Correct:

```c
printf("Hello");
```

### Mistake 3 — Wrong Format Specifier

For an integer:

```c
int age = 20;

printf("%d", age);
```

Use the format specifier that matches the data type.

### Mistake 4 — Forgetting `&` in `scanf()`

Correct:

```c
scanf("%d", &age);
```

### Mistake 5 — Using Double Quotes for a Character

Incorrect:

```c
char grade = "A";
```

Correct:

```c
char grade = 'A';
```

---

## 18. Quick Reference

### Basic Program

```c
#include <stdio.h>

int main()
{
    // code

    return 0;
}
```

### Output

```c
printf("Hello");
```

### Integer

```c
int age = 20;
printf("%d", age);
```

### Float

```c
float height = 5.5;
printf("%f", height);
```

### Double

```c
double pi = 3.141592;
printf("%lf", pi);
```

### Character

```c
char grade = 'A';
printf("%c", grade);
```

### Integer Input

```c
int age;
scanf("%d", &age);
```

### Float Input

```c
float height;
scanf("%f", &height);
```

### Character Input

```c
char grade;
scanf(" %c", &grade);
```

---

## 19. Day 01 Cheat Sheet

| Concept             | Syntax / Meaning     |
| ------------------- | -------------------- |
| Header file         | `#include <stdio.h>` |
| Starting point      | `main()`             |
| Output              | `printf()`           |
| Input               | `scanf()`            |
| Integer             | `int`                |
| Decimal             | `float`              |
| Precise decimal     | `double`             |
| Character           | `char`               |
| Integer format      | `%d`                 |
| Float format        | `%f`                 |
| Double format       | `%lf`                |
| Character format    | `%c`                 |
| String format       | `%s`                 |
| Address             | `&variable`          |
| New line            | `\n`                 |
| Tab                 | `\t`                 |
| Single-line comment | `//`                 |
| Multi-line comment  | `/* */`              |
| Statement ending    | `;`                  |

---

## 20. Day 01 Key Takeaways

1. C program execution starts from `main()`.
2. `stdio.h` provides basic input/output functions.
3. `printf()` is used for output.
4. `scanf()` is used for input.
5. Variables store data.
6. Every variable has a data type.
7. `int` stores whole numbers.
8. `float` and `double` store decimal values.
9. `char` stores a single character.
10. Format specifiers should match the data type.
11. `&variable` gives the address of a variable.
12. `\n` moves output to a new line.
13. C is case-sensitive.
14. Most C statements end with `;`.



---


