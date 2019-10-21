#include<stdio.h>

int main(void){
    int n=0,flag=1;

    while(flag){
        if ((n%3==2)&&(n%5==3)&&(n%7==4)){
            flag=0;
        }
        n++;
    }
    printf("%d",n);

return(0);
}
