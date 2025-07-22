#include <stdio.h>

int main() {
  printf("Hello World!");
  return 0;
)
_______________________________________________________________________

#include <stdio.h>

int main() {
  printf("Hello World!");
  printf("Have a good day!");
  return 0;
}


Escape character: \n

#include <stdio.h>

int main() {
  printf("Hello World!\nI am learning C.\nAnd it is awesome!");
  return 0;
}


Tab space:

#include <stdio.h>

int main() {
  printf("Hello World!\t");
  printf("I am learning C.");
  return 0;
}

Inserts a backslash character (\\)	Try it

	
#include <stdio.h>

int main() {
  printf("Hello World!\\");
  printf("I am learning C.");
  return 0;
}
Inserts a double quote character	Try it

(\”)
#include <stdio.h>

int main() {
  printf("They call him \"Johnny\".");
  return 0;
}

Variable use:
Rules of variable:

The general rules for naming variables are:
•	Names can contain letters, digits and underscores
•	Names must begin with a letter or an underscore (_)
•	Names are case-sensitive (myVar and myvar are different variables)
•	Names cannot contain whitespaces or special characters like !, #, %, etc.
•	Reserved words (such as int) cannot be used as names
•	Don’t use the C language keywords

#include <stdio.h>

int main() {
  int myNum = 15;
  printf("%d", myNum);
  return 0;
}
#include <stdio.h>

int main() {
  // Create variables
  int myNum = 15;              // Integer (whole number)
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
  int myNum = 15;
  char myLetter = 'D';
  printf("My number is %d and my letter is %c", myNum, myLetter);
  return 0;
}______________________________

Change the variable:

#include <stdio.h>

int main() {
  int myNum = 15; // myNum is 15
  myNum = 10; // Now myNum is 10
  
  printf("%d", myNum);
  return 0;
}

#include <stdio.h>

int main() {
  int myNum = 15;
  
  int myOtherNum = 23;

  // Assign the value of myOtherNum (23) to myNum
  myNum = myOtherNum;

  // myNum is now 23, instead of 15
  printf("%d", myNum);
  
  return 0;
}

#include <stdio.h>

int main() {
  // Create a myNum variable and assign the value 15 to it
  int myNum = 15;
  
  // Declare a myOtherNum variable without assigning it a value
  int myOtherNum;

  // Assign value of myNum to myOtherNum
  myOtherNum = myNum;

  // myOtherNum now has 15 as a value
  printf("%d", myOtherNum);
  
  return 0;
}

#include <stdio.h>

int main() {
  int x = 5;
  int y = 6;
  int sum = x + y;
  printf("%d", sum);
  return 0;
}

Declare Multiple Variables:

#include <stdio.h>

int main() {
  int x = 5, y = 6, z = 50;
  printf("%d", x + y + z);
  return 0;
}

#include <stdio.h>

int main() {
  int x, y, z;
  x = y = z = 50;
  printf("%d", x + y + z);
  return 0;
}
#include <stdio.h>

int main() {
  // Student data
  int studentID = 15;
  int studentAge = 23;
  float studentFee = 75.25;
  char studentGrade = 'B';

  // Print variables
  printf("Student id: %d\n", studentID);
  printf("Student age: %d\n", studentAge);
  printf("Student fee: %f\n", studentFee);
  printf("Student grade: %c", studentGrade);

  return 0;
}
#include <stdio.h>

int main() {
  // Create integer variables
  int length = 4;
  int width = 6;
  int area;

  // Calculate the area of a rectangle
  area = length * width;

  // Print the variables
  printf("Length is: %d\n", length);
  printf("Width is: %d\n", width);
  printf("Area of the rectangle is: %d", area);

  return 0;
}

 
 

