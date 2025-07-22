 Opertations

1) Arithmetic Operations in One

Write a C program to perform all arithmetic operations (+, -, *, /, %) on two integers.


#include <stdio.h>
int main() {
    int a, b, sum;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("Sum = %d", sum);
    return 0;
}

2) Assignment operators (+=, -=, *=, /=, %=).

Take two integer inputs from the user: a and b. Perform the following operations on a using b:
•	a += b
•	a -= b
•	a *= b
•	a /= b
•	a %= b
Print the result after each operation.
#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Addition Assignment
    int result = a;
    result += b;
    printf("After a += b: %d\n", result);

    // Subtraction Assignment
    result = a;
    result -= b;
    printf("After a -= b: %d\n", result);

    // Multiplication Assignment
    result = a;
    result *= b;
    printf("After a *= b: %d\n", result);

3) logical operations

logical operations (&&, ||, !) 
Take two integer inputs from the user: a and b
1.	Perform and display the result of:
•	Logical AND (a && b)
•	Logical OR (a || b)
•	Logical NOT (!a and !b)

#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two integers (non-zero for true, zero for false): ");
    scanf("%d %d", &a, &b);

    // Logical AND
    int and_result = (a && b);
    printf("a && b = %d\n", and_result);

    // Logical OR
    int or_result = (a || b);
    printf("a || b = %d\n", or_result);

    // Logical NOT
    int not_a = !a;
    int not_b = !b;
    printf("!a = %d\n", not_a);
    printf("!b = %d\n", not_b);

    return 0;
}


4) comparative (relational) operations

1.	Take two integers a and b as input.
2.	Perform and display the results of the following comparisons:
•	a == b
•	a != b
•	a > b
•	a < b
•	a >= b
•	a <= b
#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Equal to
    printf("a == b : %d\n", a == b);

    // Not equal to
    printf("a != b : %d\n", a != b);

    // Greater than
    printf("a > b  : %d\n", a > b);

    // Less than
    printf("a < b  : %d\n", a < b);

    // Greater than or equal to
    printf("a >= b : %d\n", a >= b);

    // Less than or equal to
    printf("a <= b : %d\n", a <= b);

    return 0;
}


5) Bitwise operations:

Where and Why Bitwise Operators Are Used:
Use Case	Explanation
Low-level programming	Used in embedded systems, drivers, and hardware control where direct bit manipulation is needed.
Performance optimization	Bitwise operations are faster than arithmetic operations — useful in game programming, graphics, or signal processing.
Flags and masks	Used to set, clear, or toggle individual bits — common in permission handling (like file access modes).
Encryption/Compression	XOR is often used in simple encryption and checksum algorithms.
Data packing	You can pack multiple values into a single integer using bitwise operations — saving memory and improving cache performance.



Operator	Description	Example (a = 5, b = 3)	Result
&	Bitwise AND	5 & 3 → 0101 & 0011	0001 = 1
`	`	Bitwise OR	`5
^	Bitwise XOR (exclusive OR)	5 ^ 3 → 0101 ^ 0011	0110 = 6
~	Bitwise NOT (1's complement)	~5 → inverts bits	Platform dependent (e.g., -6)
<<	Left Shift (multiply by 2ⁿ)	5 << 1 = 10	5 × 2 = 10
>>	Right Shift (divide by 2ⁿ)	5 >> 1 = 2	5 ÷ 2 = 2


Example Real-Life Use:
Suppose you’re writing a microcontroller program to control 8 LEDs connected to a port. Each bit in a byte represents one LED:
c
CopyEdit
unsigned char ledState = 0b00001111;  // Lower 4 LEDs ON
ledState |= 0b10000000;              // Turn ON the 8th LED using bitwise OR




#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Bitwise AND
    printf("a & b  = %d\n", a & b);

    // Bitwise OR
    printf("a | b  = %d\n", a | b);

    // Bitwise XOR
    printf("a ^ b  = %d\n", a ^ b);

    // Bitwise NOT (only one operand)
    printf("~a     = %d\n", ~a);
    printf("~b     = %d\n", ~b);

    // Left Shift
    printf("a << 1 = %d\n", a << 1);
    printf("b << 1 = %d\n", b << 1);

    // Right Shift
    printf("a >> 1 = %d\n", a >> 1);
    printf("b >> 1 = %d\n", b >> 1);

    return 0;
}




