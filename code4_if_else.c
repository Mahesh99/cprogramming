
IF:
#include <stdio.h>

int main() {
  int x = 20;
  int y = 18;
  if (x > y) {
    printf("x is greater than y");
  }  
  return 0;
}

IF , ELSE
// Division Assignment (check for division by zero)
    if (b != 0) {
        result = a;
        result /= b;
        printf("After a /= b: %d\n", result);
    } else {
        printf("Division by zero is not allowed.\n");
    }

    // Modulus Assignment (check for modulus by zero)
    if (b != 0) {
        result = a;
        result %= b;
        printf("After a %%= b: %d\n", result);
    } else {
        printf("Modulus by zero is not allowed.\n");
    }

    return 0;
}

IF , ELSE IF, ELSE
#include <stdio.h>

int main() {
  int time = 22;
  if (time < 10) {
    printf("Good morning.");
  } else if (time < 20) {
    printf("Good day.");
  } else {
    printf("Good evening.");
  }
  return 0;
}

NESTED IF
#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                printf("%d is a leap year.\n", year);
            } else {
                printf("%d is not a leap year.\n", year);
            }
        } else {
            printf("%d is a leap year.\n", year);
        }
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}


TERNARY OPERATOR : 
variable = (condition) ? expressionTrue : expressionFalse;
#include <stdio.h>

int main() {
  int time = 20;
  if (time < 18) {
    printf("Good day.");
  } else {
    printf("Good evening.");
  }
  return 0;
}


#include <stdio.h>

int main() {
  int time = 20;
  (time < 18) ? printf("Good day.") : printf("Good evening.");
  return 0;
}


SWITCH CASE

#include <stdio.h>

int main() {
  int day = 4;
  
  switch (day) {
    case 1:
      printf("Monday");
      break;
    case 2:
      printf("Tuesday");
      break;
    case 3:
      printf("Wednesday");
      break;
    case 4:
      printf("Thursday");
      break;
    case 5:
      printf("Friday");
      break;
    case 6:
      printf("Saturday");
      break;
    case 7:
      printf("Sunday");
      break;
  }
    
  return 0;
}


simple calculation:
#include <stdio.h>

int main() {
char op;
int a = 10, b = 5;

printf("Enter operator (+ - * /): ");
scanf(" %c", &op);  // Note: space before %c to catch any leftover newline

switch(op) {
    case '+': printf("%d + %d = %d\n", a, b, a + b); break;
    case '-': printf("%d - %d = %d\n", a, b, a - b); break;
    case '*': printf("%d * %d = %d\n", a, b, a * b); break;
    case '/': printf("%d / %d = %d\n", a, b, a / b); break;
    default: printf("Invalid operator\n");
}
}

Grade Evaluation System

#include <stdio.h>

int main() {

char grade;

switch(grade) {
    case 'A': printf("Excellent!\n"); break;
    case 'B': printf("Well done\n"); break;
    case 'C': printf("Good\n"); break;
    case 'D': printf("You passed\n"); break;
    case 'F': printf("Better try again\n"); break;
    default: printf("Invalid grade\n");
}
}

