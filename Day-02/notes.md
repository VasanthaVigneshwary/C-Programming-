
# C Programming — Day 02

## Data Types, Constants & Type Conversion

---

## 1. Data Types

A data type tells the compiler what type of value a variable can store.

### int

Used to store whole numbers.

```c
int age = 19;

Format specifier:

%d


---

float

Used to store decimal numbers.

float height = 5.2;

Format specifier:

%f

Example:

printf("%.2f", height);

Output:

5.20


---

double

Used to store decimal numbers with higher precision than float.

double pi = 3.1415926535;

Format specifiers:

printf() → %f
scanf()  → %lf


---

char

Used to store a single character.

char grade = 'O';

Format specifier:

%c

Characters use single quotes.

char grade = 'A';


---

2. Data Type Summary

Data Type	Purpose	Example	Format Specifier

int	Whole numbers	int age = 19;	%d
float	Decimal numbers	float h = 5.2;	%f
double	High-precision decimal	double p = 3.14;	%f / %lf
char	Single character	char g = 'A';	%c



---

3. sizeof()

sizeof() is used to find the amount of memory occupied by a data type or variable.

The result is given in bytes.

Syntax

sizeof(data_type)

Example

printf("%zu", sizeof(int));

Common sizes on our system:

int     → 4 bytes
float   → 4 bytes
double  → 8 bytes
char    → 1 byte

The exact size can depend on the system and compiler.


---

4. Constants

A constant is a value that should not be changed during program execution.

We use the const keyword.

Syntax

const data_type NAME = value;

Example

const float PI = 3.14159;

A constant should not be reassigned.

const float PI = 3.14159;

// Not allowed
PI = 5.0;


---

5. Type Conversion

Type conversion means converting a value from one data type to another.

Examples:

int → float
float → int
char → int

There are two main types:

Type Conversion
      |
      ├── Implicit Conversion
      |
      └── Explicit Conversion


---

6. Implicit Type Conversion

Implicit conversion happens automatically by the compiler.

Example

int number = 10;
float value;

value = number;

Here, C automatically converts:

10 (int)
   ↓
10.0 (float)

No casting is required.


---

7. Explicit Type Conversion

Explicit conversion means that we manually tell C to convert a value to another data type.

This is also called type casting.

Syntax

(data_type)value

Example

int number = 10;

float value = (float)number;

Here:

(float)number

converts number from int to float.


---

8. Type Casting

Type casting is useful when we need a particular data type during a calculation.

Example:

int a = 10;
int b = 3;

float result;

result = (float)a / b;

printf("%f", result);

Output:

3.333333


---

9. Integer Division

When two integers are divided, C performs integer division.

Example:

int a = 10;
int b = 3;

printf("%d", a / b);

Output:

3

The decimal portion is discarded.

10 / 3
   ↓
3


---

10. Decimal Division Using Type Casting

To get the decimal result, convert one of the integers to float.

int a = 10;
int b = 3;

float result;

result = (float)a / b;

printf("%f", result);

Output:

3.333333

Remember

10 / 3

gives:

3

But:

(float)10 / 3

gives:

3.333333


---

11. Float to Integer Conversion

A float can be explicitly converted to an int.

Example:

float price = 99.99;

int value = (int)price;

Result:

99.99
  ↓
99

The decimal portion is discarded.


---

12. ASCII

ASCII stands for:

American Standard Code for Information Interchange

Characters are represented internally using numeric values.

Some common values:

'A' → 65
'B' → 66
'C' → 67

'a' → 97
'b' → 98
'c' → 99

'0' → 48
'1' → 49


---

13. Printing ASCII Value

A character can be printed using %c.

char ch = 'A';

printf("%c", ch);

Output:

A

The same character can be printed as its ASCII value using %d.

printf("%d", ch);

Output:

65

Example:

char ch = 'A';

printf("Character = %c\n", ch);
printf("ASCII Value = %d\n", ch);

Output:

Character = A
ASCII Value = 65


---

14. Character Arithmetic

Characters have ASCII values, so arithmetic can be performed on them.

Example:

char ch = 'A';

printf("%c", ch + 1);

Output:

B

Because:

'A' = 65
65 + 1 = 66
66 = 'B'

Similarly:

ch - 1

gives the previous character.

Example:

char ch = 'D';

printf("Next = %c\n", ch + 1);
printf("Previous = %c\n", ch - 1);

Output:

Next = E
Previous = C


---

15. Character Input

A character can be taken from the user using %c.

Example:

char ch;

printf("Enter a character: ");
scanf(" %c", &ch);

printf("Character = %c", ch);

Notice the space before %c:

scanf(" %c", &ch);

The space helps scanf() skip leftover whitespace such as a newline.


---

Day 02 — Key Points

int      → Whole numbers
float    → Decimal numbers
double   → High-precision decimal numbers
char     → Single character

sizeof() → Finds memory size in bytes

const    → Creates a constant

Implicit conversion
→ Automatic conversion

Explicit conversion
→ Manual conversion

Type casting
→ (data_type)value

10 / 3
→ 3

(float)10 / 3
→ 3.333333

ASCII
→ Characters have numeric values

'A'
→ 65

'A' + 1
→ 'B'


