#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>



int main()
{
    int h,m,s;
    h=m=s=0;

    while(1){
        if(h<12){
            for(s=0; s<=60; s++)
            {
            sleep(1);
            printf("%d : %d : %d AM\n",h,m,s);
            printf("\033c");
            }
            m++;
            if(m == 60){
                h++;
                m = 0;
            }
        }

        if(h>=12){
            if(h==12){
                for(s=0; s<=60; s++)
            {
            sleep(1);
            printf("%d : %d : %d PM\n",h,m,s);
            printf("\033c");
            }
            }
            m++;
            if(m == 60){
                h++;
                m = 0;
                if(h==24){
                h=0;
            }
            }
            for(s=0; s<=60; s++)
            {
            sleep(1);
            printf("%d : %d : %d PM\n",h-12,m,s);
            printf("\033c");
            }
            m++;
            if(m == 60){
                h++;
                m = 0;
                if(h==24){
                h=0;
            }
            }
        }
    }

    return 0;
}
