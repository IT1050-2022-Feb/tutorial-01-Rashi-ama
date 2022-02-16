/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main(void) 
{
  int a, b;
  float avg;

  printf("Enter subject 1 marks: ");
  scanf("%d", &a);
  
  printf("Enter subject 2 marks: ");
  scanf("%d", &b);

  avg=(a+b)/2.0;

  printf("Average is %.2f", avg);
  
  return 0;
}

