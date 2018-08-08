#include <stdio.h>

int main(void)
{
  // Question
  // Write a C program to check if two numbers in a pair is in ascending order or descending order.
  // init variables
  int a;
  int b;

  // Prompt user to entered  number
  printf("Enter a number \n");

  // capture the number
  scanf("%d", &a);

  // Prompt the user to entered another number
  printf("Entered another number \n");

  // capture the second number
  scanf("%d", &b);

  // debugging purposes
  printf("You entered %d and %d\n", a, b);

  if (a > b)
  {
    printf("The pair is descending!\n");
  }
  else if (a < b)
  {
    printf("The pair is ascending!\n");
  }
  else
  {
    printf("It doesn't do neither!\n");
  }

  // exit the program
  return 0;
}