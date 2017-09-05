#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,l,n;
    i = 0;

        printf("Digite um numero inteiro: ");
        scanf("%d",&n);

    do{
    i++;
    l = i;

    while(l!=0){
        printf("%d",i);
        l--;
    }
        printf("\n");
    }while(i<n);

    return 0;
}
