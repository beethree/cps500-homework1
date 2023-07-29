//CPS 500
//Bill Russell
//Homework 1, Question 5

#include <stdio.h>

void calculate(int a, int b, char operation)
{
   int output = 0;

   // do the math
   switch(operation) 
   {
      case '+' : // addition
	 output = (a + b);
	 break;
      case '-' : // subtraction
	 output = (a - b);
	 break;
      case '*' : // multiplication
	 output = (a * b);
         break;
      case '/' : // division 
	 output = (a / b);
	 break;
      case '%' : // modulo
	 output = (a % b);
	 break;
      default  :
	 printf("invalid operator provided \n");
	 break;
   }

   printf("Your answer: %d \n", output);
}

int main()
{
   // set up and request user input
   int a;
   int b;
   char operation;

   printf("Please enter an integer, followed by an operation, and another integer: \n");
   scanf("%d%c%d", &a, &operation, &b);

   printf("You entered: %d and %c and %d \n", a, operation, b);

   calculate(a, b, operation);
}
