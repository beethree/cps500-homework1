//CPS 500
//Bill Russell
//Homework 1, Question 3

#include <stdio.h>

int fibonacci(int n) 
{
   // TODO: Debug delete
   //printf("The number passed to the function is: %d \n", n);

   //Fibonacci sequence is F(n) = F(n-1) + F(n-2)
   int output = ((n - 1) + (n - 2));

   return output;
}

int main(int argc, char *argv[])
{
   // cast the input 'char' value to an int for processing
   int input = *argv[argc-1] - '0';
   printf("The passed in argument is: %d \n", input); 

   // loop through the input processing as Fibonacci sequence
   for(int i = 0; i <= input; i++)
   {
      if (i == 0)
      {
	 printf("%d : 0 \n", i);
      }
      else if (i == 1)
      {
	 printf("%d : 1 \n", i);
      }
      else
      {
	 printf("%d : %d \n", i, fibonacci(i));
      }
   }
}
