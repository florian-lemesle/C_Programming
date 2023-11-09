#include <stdio.h>
#include <stdlib.h>

int main()

{
  int matrice[2][2];
  int i, j;
  
  printf("Saisie du coefficient:", matrice[i][j]);
  
  for(i = 0; i < 2; i++)
  {
    for(j = 0; j < 2; j++)
    {
      scanf("%d",&matrice[i][j]);
    }
  }
  printf("matrice = \n");
  for(i=0; i < 2; i++)
  {
    for(j = 0; j < 2; j++)
    {
      printf("%4d",matrice[i][j]);
    }
    printf("\n");
  }

printf("Resolution du systeme :\n");

}


