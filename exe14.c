#include<stdio.h>

struct dia{
    int hora;
    int minuto;
    int segundo;
};

int main(void){
    struct dia t1={0,0,0};
    int i,j,k;
    printf("%d:%d:%d\n",t1.hora,t1.minuto,t1.segundo);
    for(i=0;i<=24;i++){
        for(j=0;j<60;j++){
            for(k=0;k<60;k++){
                t1.segundo=k;
                printf("%d:%d:%d\n",t1.hora,t1.minuto,t1.segundo);
            }
            t1.minuto=j;
            printf("%d:%d:%d\n",t1.hora,t1.minuto,t1.segundo);
        }
        t1.hora=i;
        //printf("%d:%d:%d\n",t1.hora,t1.minuto,t1.segundo);
        if(i==24){
            t1.hora=0;
            t1.minuto=0;
            t1.segundo=0;
            printf("%d:%d:%d\n",t1.hora,t1.minuto,t1.segundo);
            break;
        }
    }
return(0);
}
