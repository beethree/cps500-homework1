//CPS 500
//Bill Russell
//Homework 1, Question 4

#include <stdio.h>
#include <stdlib.h>

void arrayAddition(int A[], int B[], int N, int O[])
{
   //print O - calcuated value of element wise addition of A[] & B[]
   for(int i = 0; i < N; i++)
   {
      O[i] = A[i] + B[i];
      printf("%d ", O[i]);
   }
}

int main(int argc, char *argv[])
{
   int input_count = argc;
   int input_counter;

   //dynamically allocate size of arrays using malloc
   int* A;
   int* B;

   A = (int*)malloc(((input_count/2) -1) * sizeof(int));
   B = (int*)malloc(((input_count/2) -1) * sizeof(int));

   // store the "size" of the arrays
   int N = 0; // size of array A
   int Z = 0; // size of array B

   // fill array A from the command line 
   for (int i = 0; i < ((input_count/2)); i++)
   {
      input_counter = 0;

      if (*argv[i+1] == '+')
      {
	 input_counter += i;
	 N = input_counter;
	 break;
      }
      else
      {
	 A[i] = atoi(argv[i+1]);
	 input_counter += i;
      }
   }

   // fill array B from the command line
   // note that outer for loop does not increment until inside inner for loop
   for (int j = input_counter + 2; j < input_count;)
   {
      for (int k = 0; k < ((input_count/2)-1); k++)
      {
         B[k] = atoi(argv[j]);
         j++; // advance j after reading in to array B
	 Z = k +1;
      }
   }

   printf("\n\n");

   if (N == Z)
   {
      // set size of array O
      int O[N];

      // pass inputs to function for addition
      arrayAddition(A, B, N, O);
   }
   else
   {
      printf("Please try again with array sizes that equal. \n");
   }

   printf("\n\n");
}
