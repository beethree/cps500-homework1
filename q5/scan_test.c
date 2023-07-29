// test program
#include <stdio.h>

int main()
{
  printf("Please enter a integer, an operation, and another integer. Hit enter to quit. \n");
  char input[4];
  int a;
  char operation;
  int b;

  // used fgets() instead of gets() because of the warnings from both Ubuntu and gcc
  fgets(input,4,stdin);

  // determine if user input a blank line to quit
  if (input[0] == '\n')
  {
     printf("Exiting! \n");
  }
  else // no blank line, so proceed
  {
     printf("You entered: %s \n", input);

     // peel values from array while casting char(s) to int(s)
     a = (input[0] - '0');
     operation = input[1];
     b = (input [2] - '0');

     printf("a, operation, and b: %d, %c, %d \n", a, operation, b);

  }

  return(0);
}


