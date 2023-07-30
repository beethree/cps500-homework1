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
   // set up to handle user input and capture for processing
   int a;
   int b;
   char op;
   char input[4]; //user input
		 
   printf("Please enter an integer, an operation, and another integer. Hit enter to quit. \n");

   fgets(input,4,stdin); // capture user input (use fgets vs. gets due to Ubuntu and gcc warnings)

   if (input[0] == 'n')
   {
      // user has entered blank line, exit
      printf("Exiting.");
   }
   else
   {
      // take char array inputs assign to variables, casting where necessary
      a  = (input[0] - '0');
      op = input[1];
      b  = (input[2] - '0');
      
      printf("You entered a, operation, b : %d and %c and %d \n", a, op, b);

      calculate(a, b, op);
   }

   return(0);
}
