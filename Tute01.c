/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  
  int mark1, mark2, avg;

  printf("Enter Mark 1 subject : ");
  scanf("%d", &mark1);
  printf("Enter Mark 2 subject : ");
  scanf("%d", &mark2);
  
  avg=(mark1+mark2)/2;

  printf("average of two mark is %d\n", avg);

  return 0;
}

