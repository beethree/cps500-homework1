//CPS 500
//Bill Russell
//Homework 1, Question 4

#include <stdio.h>

void arrayAddition(int A[], int B[], int N, int O[])
{
   
   //print O - calcuated value of element wise addition of A[] & B[]
   for(int i = 0; i < N; i++)
   {
      O[i] = A[i] + B[i];
      printf("%d ", O[i]);
   }

   printf("\n \n");
}

int main(int argc, char *argv[])
{

   // TODO: set up method to obtain array contents via command line
   int A[] = {2,4,6,8,10};
   int B[] = {1,1,1,1,1};
   int N = sizeof(A) / sizeof(A[0]);
   int Z = sizeof(B) / sizeof(B[0]);

   printf("The size of Array A = %d \n", N);
   printf("The size of Array B = %d \n", Z);

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

}
