
#include <stdio.h>
int main(int argc, char *argv[])
{
   printf("number of command line arguments entered: %d \n", argc);
   int input = *argv[argc-1] - '0';
   printf("The passed in argument is: %d \n", input); 
}
