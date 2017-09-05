#include <stdio.h>
#include <stdlib.h>

// 0 = false     1 = True

int eh_divisivel(int a, int b)
{
    if(b>0){
    return !(a%b);
    }else{
    printf("impossivel dividir por zero!\n");
    return 0;
    }
}

int eh_primo(int n)
{
    int i,p;

    for(i=2; i<n; i++){
      p  =  eh_divisivel(n,i);
        if(p==1){
            return 0;
        }
        }
    return 1;
}


int main()
{
    int v,d;

    printf("Digite o primeiro valor: ");
    scanf("%d",&v);
    printf("Digite o divisor: ");
    scanf("%d",&d);

    printf("%d\n",eh_divisivel(v,d));
    printf("%d\n",eh_primo(v));
    return 0;
}
