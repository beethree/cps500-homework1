//Russell, Bill
//

#include <stdio.h>

int main(int argc, char *argv[])
{
   // TODO: Debug Remove
   printf("number of command line arguments entered: %d \n", argc);
   // TODO: Debug Remove
   //printf("%s\n",argv[argc]);

   // cast the char value in the argv array to an int for processing
   int input = *argv[argc-1] - '0';
   
   // TODO: Debug Remove
   printf("The passed in argument is: %d \n", input); 

   // now print the christmas tree - start i with 1 to prevent the i=0 non-print situation
   for (int i = 1; i <= input; i++)
   {
	   if (i == 1)
	   {
		   printf("+\n");
	   }
	   else
	   {
		   for (int j = 1; j <= input; j++)
		   {
			   if (j % input == 0)
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

   }
}
