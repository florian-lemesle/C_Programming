#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int age = 0;

  printf("Quel age avez-vous?");
  scanf("%d", &age);
  printf("Vous avez %d ans", age);
  
  return 0;
  
}