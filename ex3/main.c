#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("digite um numero\n");
    int n,i,j;
    scanf("%d",&n);


    for(j=1;j<=n;++j){


        for(i=1;i<=j;++i){

            printf("%d",i);
        }
        printf("\n");

    }


    return 0;
}
