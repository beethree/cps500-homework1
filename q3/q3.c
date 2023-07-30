//CPS 500
//Bill Russell
//Homework 1, Question 3

#include <stdio.h>

int fibonacci(int n) 
{
   if (n == 0 || n == 1)
   {
      return 1;
   }
   else
   {
      //Fibonacci sequence is F(n) = F(n-1) + F(n-2)
      return fibonacci(n - 1) + fibonacci(n - 2);
   }
}

int main(int argc, char *argv[])
{
   // cast the input 'char' value to an int for processing
   int input = *argv[argc-1] - '0';
   printf("The passed in argument is: %d \n", input); 

   // loop through the input processing as Fibonacci sequence
   for(int i = 0; i <= input; i++)
   {
      printf("%d : %d \n", i, fibonacci(i));
   }
}
