#include <stdio.h>
#include <stdlib.h>

void compare(int x, int y)
{
  if (x < y)
  {
    printf("%i is less than %i\n", x, y);
  }
  else if (x > y)
  {
    printf("%i is more than %i\n", x, y);
  }
  else
  {
    printf("%i is equal to %i\n", x, y);
  }
}

int main()
{
  int num1, num2;

  char c;

  while (c != 'q')
  {

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    compare(num1, num2);

    printf("Press q to quit or press enter to start again!\n");

    scanf("%d", &c);

  }

  
}
