#include <stdio.h>
#include <stdlib.h>

int main() {

int i;

printf("Table ASCII des caracteres imprimables :\n");

for(i=32;i<=126;i++){
    printf("%3d %c |", i,i);

    if ((i+1) % 8 == 0)
       printf("\n");

} 

    return 0;
}