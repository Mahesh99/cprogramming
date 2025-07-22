Datatype:

format specifier inside the printf() function to display it:

#include <stdio.h>

int main() {
  // Create variables
  int myNum = 5;               // Integer (whole number)
  float myFloatNum = 5.99;     // Floating point number
  char myLetter = 'D';         // Character
  
  // Print variables
  printf("%d\n", myNum);
  printf("%f\n", myFloatNum);
  printf("%c\n", myLetter);
  return 0;
}

#include <stdio.h>

int main() {
  char a = 65, b = 66, c = 67;
  printf("%c\n", a);
  printf("%c\n", b);
  printf("%c", c);
  return 0;
}
#include <stdio.h>

int main() {
  char myText = 'Hello';
  printf("%c", myText);
  return 0;
}
#include <stdio.h>

int main() {
  char myText[] = "Hello";
  printf("%s", myText);
  return 0;
}


n#include <stdio.h>

int main() {
  int myNum = 1000;
  printf("%d", myNum);
  return 0;
}

#include <stdio.h>

int main() {
  float myNum = 5.75;
  printf("%f", myNum);
  return 0;
}
#include <stdio.h>

int main() {
  double myNum = 19.99;
  printf("%lf", myNum);
  return 0;
}

#include <stdio.h>

int main() {
  float f1 = 35e3;
  double d1 = 12E4;
  
  printf("%f\n", f1);
  printf("%lf", d1);
  return 0;
}

#include <stdio.h>

int main() {
  char myGrade = 'A';
  printf("%c", myGrade);
  return 0;
}

#include <stdio.h>

int main() {
  double myNum = 19.99;
  printf("%lf", myNum);
  return 0;
}

Set Decimal Precision
You have probably already noticed that if you print a floating point number, the output will show many digits after the decimal point:
Example
float myFloatNum = 3.5;
double myDoubleNum = 19.99;

printf("%f\n", myFloatNum); // Outputs 3.500000
printf("%lf", myDoubleNum); // Outputs 19.990000
If you want to remove the extra zeros (set decimal precision), you can use a dot (.) followed by a number that specifies how many digits that should be shown after the decimal point:
#include <stdio.h>

int main() {
  float myFloatNum = 3.5;

  printf("%f\n", myFloatNum); // Default will show 6 digits after the decimal point
  printf("%.1f\n", myFloatNum); // Only show 1 digit
  printf("%.2f\n", myFloatNum); // Only show 2 digits
  printf("%.4f", myFloatNum);   // Only show 4 digits
  return 0;
}
#include <stdio.h>

int main() {
  int myInt;
  float myFloat;
  double myDouble;
  char myChar;
 
  printf("%zu\n", sizeof(myInt));
  printf("%zu\n", sizeof(myFloat));
  printf("%zu\n", sizeof(myDouble));
  printf("%zu\n", sizeof(myChar));
  
  return 0;
}


Note that we use the %zu format specifier to print the result, instead of %d. This is because the compiler expects the sizeof operator to return a value of type size_t, which is an unsigned integer type. On some computers it might work with %d, but it is safer and more portable to use %zu, which is specifically designed for printing size_t values.
Why Should I Know the Size of Data Types?
Knowing the size of different data types is important because it says something about memory usage and performance.
For example, the size of a char type is 1 byte. Which means if you have an array of 1000 char values, it will occupy 1000 bytes (1 KB) of memory.
Using the right data type for the right purpose will save memory and improve the performance of your program.

#include <stdio.h>

int main() {
  // Create variables of different data types
  int items = 50;
  float cost_per_item = 9.99;
  float total_cost = items * cost_per_item;
  char currency = '$';

  // Print variables
  printf("Number of items: %d\n", items);
  printf("Cost per item: %.2f %c\n", cost_per_item, currency);
  printf("Total cost = %.2f %c\n", total_cost, currency);

  return 0;
}
Type Conversion
Sometimes, you have to convert the value of one data type to another type. This is known as type conversion.
For example, if you try to divide two integers, 5 by 2, you would expect the result to be 2.5. But since we are working with integers (and not floating-point values), the following example will just output 2:

#include <stdio.h>

int main() {
  int x = 5;
  int y = 2;
  int sum = 5 / 2;

  printf("%d", sum);
  return 0;
}
To get the right result, you need to know how type conversion works.
There are two types of conversion in C:
•	Implicit Conversion (automatically)
•	Explicit Conversion (manually)
________________________________________
Implicit Conversion
Implicit conversion is done automatically by the compiler when you assign a value of one type to another.
For example, if you assign an int value to a float type:
Example
#include <stdio.h>

int main() {
  // Automatic conversion: int to float
  float myFloat = 9;

  printf("%f", myFloat);
  return 0;
}
As you can see, the compiler automatically converts the int value 9 to a float value of 9.000000.
This can be risky, as you might lose control over specific values in certain situations.
Especially if it was the other way around - the following example automatically converts the float value 9.99 to an int value of 9:
Example
#include <stdio.h>

int main() {
  float sum = 5 / 2;

  printf("%f", sum);  // 2.000000
  return 0;
}

Explicit Conversion
Explicit conversion is done manually by placing the type in parentheses () in front of the value.
#include <stdio.h>

int main() {
  // Manual conversion: int to float
  float sum = (float) 5 / 2;

  printf("%f", sum);
  return 0;
}

#include <stdio.h>

int main() {
  int num1 = 5;
  int num2 = 2;
  float sum = (float) num1 / num2;

  printf("%f", sum);
  return 0;
}

#include <stdio.h>

int main() {
  // Set the maximum possible score to 500
  int maxScore = 500;

  // The actual score of the user
  int userScore = 423;

  // Calculate the percantage of the user's score in relation to the maximum available score
  float percentage = (float) userScore / maxScore * 100.0;

  // Print the percentage
  printf("User's percentage is %.2f", percentage);

  return 0;
}











