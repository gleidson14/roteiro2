#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,h,c,Dig;
    char Tel[10];
    char Parte1[4];
    char Parte2[4];
    Dig = 0;

    printf("Digite seu telefone: \n");
        gets(Tel);

    for(i=0; Tel[i] != '\0'; i++){
        Dig++;
        if(Tel[i] == '-'){
            Dig--;
        }
        }

        if(Dig==7){
           printf("numero com 7 digitos, o numero 3 sera acrescentado a frente.\n ");
           for(j=8; j>0 ; j--){

                Tel[j] = Tel[j-1];

           }

     Tel[0] = '3';
   }

   for(h=0; Tel[h] != '\0'; h++){
       if(Tel[h] == '-'){
              printf("%s",Tel);
              return 0;
       }
                                }
   for(c=0; c<4 ; c++){
     Parte1[c] = Tel[c];
	 Parte2[c] = Tel[c+4];
   }
    printf("%s - %s",Parte1,Parte2);
    return 0;

}
