#include <stdio.h>
#include <stdlib.h>

void compare(int x, int y)
{
  if (x < y)
  {
    printf("%d is less than %d\n", x, y);
  }
  else if (x > y)
  {
    printf("%d is more than %d\n", x, y);
  }
  else
  {
    printf("%d is equal to %d\n", x, y);
  }
}

int main()
{
  int num1, num2;
  char c;

  while (1)
  {
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    compare(num1, num2);

    printf("Press q to quit or press c to continue\n");

    scanf(" %c", &c); // Use %c to read a character and add a space before %c to skip any leading whitespace

    if (c == 'q')
    {
      break; // Exit the loop if 'q' is entered
    }

  }

  return 0;
}
