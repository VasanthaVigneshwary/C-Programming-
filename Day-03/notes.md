# Day 03 — Operators

---

# 1. What is an Operator?

An operator is a symbol that tells the C compiler to perform an operation on one or more values.

Example:

```c
a + b
```

Here:

* `a` → Operand
* `+` → Operator
* `b` → Operand

If:

```c
int a = 10;
int b = 5;
```

Then:

```text
a + b = 15
```

---

# 2. Arithmetic Operators

Arithmetic operators are used for mathematical calculations.

| Operator | Meaning           | Example  |
| -------- | ----------------- | -------- |
| `+`      | Addition          | `10 + 5` |
| `-`      | Subtraction       | `10 - 5` |
| `*`      | Multiplication    | `10 * 5` |
| `/`      | Division          | `10 / 5` |
| `%`      | Modulus/Remainder | `10 % 3` |

### Example

```c
int a = 10;
int b = 5;

printf("%d\n", a + b);
printf("%d\n", a - b);
printf("%d\n", a * b);
printf("%d\n", a / b);
printf("%d\n", a % b);
```

Output:

```text
15
5
50
2
0
```

---

# 3. Division Operator `/`

The result of division depends on the data types.

### Integer Division

```c
int a = 5;
int b = 2;

printf("%d", a / b);
```

Output:

```text
2
```

Because both operands are integers.

### Decimal Division

```c
printf("%.2f", (float)a / b);
```

Output:

```text
2.50
```

Type casting can therefore be used when a decimal result is required.

---

# 4. Modulus Operator `%`

The modulus operator returns the remainder after division.

Examples:

```text
10 % 3 = 1
20 % 5 = 0
17 % 5 = 2
```

It is commonly used for checking whether a number is even or odd.

```c
number % 2 == 0
```

If the remainder is `0`, the number is even.

---

# 5. Relational Operators

Relational operators are used to compare two values.

| Operator | Meaning                  |
| -------- | ------------------------ |
| `>`      | Greater than             |
| `<`      | Less than                |
| `>=`     | Greater than or equal to |
| `<=`     | Less than or equal to    |
| `==`     | Equal to                 |
| `!=`     | Not equal to             |

The result of a comparison is normally:

```text
1 → True
0 → False
```

Example:

```c
printf("%d", 10 > 5);
```

Output:

```text
1
```

Example:

```c
printf("%d", 10 < 5);
```

Output:

```text
0
```

---

# 6. `=` vs `==`

These two operators are very different.

## Assignment Operator `=`

Used to assign a value to a variable.

```c
int x = 10;
```

Meaning:

```text
Put 10 into x.
```

## Equality Operator `==`

Used to compare two values.

```c
x == 10
```

Meaning:

```text
Is x equal to 10?
```

### Remember

```text
=   → Assignment
==  → Comparison
```

---

# 7. Logical Operators

Logical operators are used to combine or reverse conditions.

There are three main logical operators:

```text
&&
||
!
```

---

## 7.1 Logical AND `&&`

Both conditions must be true.

| Condition 1 | Condition 2 | Result |
| ----------- | ----------- | ------ |
| True        | True        | True   |
| True        | False       | False  |
| False       | True        | False  |
| False       | False       | False  |

Example:

```c
(10 > 5) && (20 > 10)
```

Both conditions are true, so the result is:

```text
1
```

---

## 7.2 Logical OR `||`

At least one condition must be true.

| Condition 1 | Condition 2 | Result |
| ----------- | ----------- | ------ |
| True        | True        | True   |
| True        | False       | True   |
| False       | True        | True   |
| False       | False       | False  |

Example:

```c
(10 > 5) || (20 < 10)
```

The first condition is true, so the result is:

```text
1
```

---

## 7.3 Logical NOT `!`

NOT reverses a truth value.

```text
!1 → 0
!0 → 1
```

Example:

```c
!(10 > 5)
```

Since `10 > 5` is true:

```text
!(1) → 0
```

---

# 8. Assignment Operators

Assignment operators provide shortcuts for modifying variables.

Suppose:

```c
int x = 10;
```

### `+=`

```c
x += 5;
```

Equivalent to:

```c
x = x + 5;
```

Result:

```text
15
```

### `-=`

```c
x -= 5;
```

Equivalent to:

```c
x = x - 5;
```

### `*=`

```c
x *= 5;
```

Equivalent to:

```c
x = x * 5;
```

### `/=`

```c
x /= 5;
```

Equivalent to:

```c
x = x / 5;
```

### `%=`

```c
x %= 5;
```

Equivalent to:

```c
x = x % 5;
```

### Summary

| Operator | Equivalent      |
| -------- | --------------- |
| `=`      | `x = value`     |
| `+=`     | `x = x + value` |
| `-=`     | `x = x - value` |
| `*=`     | `x = x * value` |
| `/=`     | `x = x / value` |
| `%=`     | `x = x % value` |

---

# 9. Increment Operator `++`

The increment operator increases a variable by `1`.

```c
int x = 5;

x++;
```

Now:

```text
x = 6
```

It is equivalent to:

```c
x = x + 1;
```

---

# 10. Decrement Operator `--`

The decrement operator decreases a variable by `1`.

```c
int x = 5;

x--;
```

Now:

```text
x = 4
```

It is equivalent to:

```c
x = x - 1;
```

---

# 11. Pre-Increment and Post-Increment

There are two ways to use `++`.

## Post-Increment

```c
x++;
```

The current value is used first, then `x` is increased.

Example:

```c
int x = 5;
int y = x++;
```

Result:

```text
y = 5
x = 6
```

Remember:

```text
x++ → Use first → Increase
```

---

## Pre-Increment

```c
++x;
```

The value is increased first, then the new value is used.

Example:

```c
int x = 5;
int y = ++x;
```

Result:

```text
x = 6
y = 6
```

Remember:

```text
++x → Increase first → Use
```

### Easy Memory Trick

```text
x++  → Use → Increase
++x  → Increase → Use
```

The same idea applies to `--`.

---

# 12. Conditional Operator `?:`

The conditional operator is a short way of writing a simple `if-else`.

### Syntax

```c
condition ? value_if_true : value_if_false;
```

Example:

```c
int age = 20;

char result = (age >= 18) ? 'Y' : 'N';
```

Since:

```text
20 >= 18
```

is true:

```text
result = 'Y'
```

### Example: Find Maximum

```c
int a = 10;
int b = 20;

int max = (a > b) ? a : b;
```

Result:

```text
max = 20
```

---

# 13. Operator Precedence

Operator precedence determines which operation is performed first.

Example:

```c
int result = 10 + 5 * 2;
```

Multiplication has higher precedence than addition.

Therefore:

```text
10 + (5 * 2)
= 10 + 10
= 20
```

Not:

```text
(10 + 5) * 2
= 30
```

### Basic Precedence Order

For the operators learned so far:

```text
()
↓
* / %
↓
+ -
↓
< > <= >=
↓
== !=
↓
&&
↓
||
↓
?:
↓
= += -= *= /= %=
```

When in doubt, use parentheses.

Example:

```c
result = (a + b) * c;
```

Parentheses make the intended order clear.

---

# 14. Associativity

When operators have the same precedence, associativity determines the order in which they are evaluated.

For many arithmetic operators such as:

```text
+
-
*
/
%
```

evaluation is generally **left to right**.

Example:

```c
int result = 20 - 5 - 3;
```

This is evaluated as:

```text
(20 - 5) - 3
= 15 - 3
= 12
```

Not:

```text
20 - (5 - 3)
= 18
```

Assignment operators generally associate from **right to left**.

Example:

```c
a = b = 10;
```

First:

```text
b = 10
```

Then:

```text
a = b
```

So both become `10`.

---

# 15. Important Operator Symbols

| Category            | Operators          |   |    |
| ------------------- | ------------------ | - | -- |
| Arithmetic          | `+ - * / %`        |   |    |
| Relational          | `> < >= <= == !=`  |   |    |
| Logical             | `&&                |   | !` |
| Assignment          | `= += -= *= /= %=` |   |    |
| Increment/Decrement | `++ --`            |   |    |
| Conditional         | `?:`               |   |    |

---

# 🧠 Important Things to Remember

### 1. Assignment vs comparison

```text
=   → Assign
==  → Compare
```

### 2. Integer division

```c
5 / 2
```

gives:

```text
2
```

when both operands are integers.

### 3. Type casting

```c
(float)5 / 2
```

gives:

```text
2.5
```

### 4. Modulus

```c
10 % 3
```

gives:

```text
1
```

### 5. Increment

```text
x++ → Use first, increase later
++x → Increase first, use later
```

### 6. Parentheses

Use parentheses when you want to clearly control the order of operations.

