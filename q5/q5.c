//CPS 500
//Bill Russell
//Homework 1, Question 5

#include <stdio.h>
#include <stdbool.h>

int calculate(int a, int b, char operation)
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
   return output;
}

int main()
{
   // set up to handle user input and capture for processing
   int a;
   int b;
   char op;
   char input[5]; //user input
   bool test = true;
		 
   while (test)
   {
      printf("Please enter an integer, an operation, and another integer. Hit enter to quit. \n");

      // capture user input (use fgets() vs. gets() due to Ubuntu and gcc warnings)
      fgets(input,5,stdin); 

      // user has entered a blank line
      if (input[0] == '\n')
      {
	 // set condition to false
	 test = 0;

	 // user has entered blank line, exit
	 printf("Exiting. \n");
      }
      else // proceed with processing
      {
	 // take char array inputs assign to variables, casting where necessary
	 a  = (input[0] - '0');
	 op = input[1];
	 b  = (input[2] - '0');
      
	 // return calculation to user
	 printf("%d \n", calculate(a,b,op));
      }
   }
}


			    
