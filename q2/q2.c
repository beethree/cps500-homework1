#include <stdio.h>

int main(int argc, char *argv[])
{
   // cast the char value to an int for processing
   int input = *argv[argc-1] - '0';

   for (int row = 1; row <= input; row++)
   {
      int counter =0;

      // put in appropriate spaces so "+" appears in the middle
      for (int blank_space = 1; blank_space <= (input-row); blank_space++)
      {
	 // print a blank space to fill necessary slots
	 printf(" "); 
      }
      // now print '*' or '+' as appropriate
      for (int column = 1; column <= (2 * row-1); column ++)
      {
	 if (column == row)
	 {
	    printf("+");
	 }
	 else
	 {
	    printf("*");
	 }
      }
      printf("\n");
   }
   return 0;
}
