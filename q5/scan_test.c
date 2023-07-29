// test program
#include <stdio.h>

int main()
{
  printf("Please enter a integer, an operation, and another integer. Just hit enter to quit. \n");
  int a;
  char operation;
  int b;
  char input[4];
  //sscanf(input, "%d %c %d", a, operation, b);
  //printf("%d %c %d", a, operation, b);

  // used fgets() instead of gets() because of the warning from Ubuntu and gcc
  fgets(input,4,stdin);

  if (input[0] == '\n')
  {
     printf("screw up \n");
  }
  else
  {
     printf("You entered: %s \n", input);

  }
  //sscanf(input, "%*d %*s %*d", a, operation, b);

  return(0);
}


