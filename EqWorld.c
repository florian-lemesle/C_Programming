#include<stdio.h>
#include<stdlib.h>

void compare(int x, int y)
{
  if (x < y) {
    printf("x is less than y");
  }
  else if (x > y) {
    printf("x is more than y");
  }
  else {
    printf("x is equal to y");
  }
}

int main(void)
{
  int num1, num2;
  
  printf("Enter the first number: ");
  scanf("%d", &num1);
  
  printf("Enter the second number: ");
  scanf("%d", &num2);

  compare(num1, num2);

  return 0;
}