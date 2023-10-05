#include <stdio.h>
#include <stdlib.h>

int main() {

    int a, i, n;
    
    printf("Veuillez saisir un nombre\n");
    scanf("%d", &n);

    for (a=1, i=0; i<n ; i++)
    {
        a = a*(i+1);

    }

     printf("la factorielle est %d\n", a);
    
    return 0;


}