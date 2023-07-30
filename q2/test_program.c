#include <stdio.h>

int main(int argc, char *argv[])
{
   // cast the char value to an int for processing
   int input = *argv[argc-1] - '0';

   printf("passed in: %d \n", input);

   for (int row = 1; row <= input; row++)
   {
      // put in appropriate spaces so "+" appears in the middle
      for (int space = 0; space <= (input-row); space++)
      {
	 printf(" "); 
      }
      for (int spot = 1; spot <= (2 * row-1); spot++)
      {
	 if (spot == row)
	 {
	    printf("+ ");
	 }
	 else
	 {
	    printf("* ");
	 }
      }
      printf("\n");
   }
   return 0;
}
