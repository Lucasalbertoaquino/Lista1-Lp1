#include<stdio.h>
#include<locale.h>

int lord(){
    int a[10]={7,9,1,4,0,15,3,2,20,5};
    int i,j,aux;
    for(i=0;i<9;i++){
        for(j=i+1;j<10;j++){
            if(a[i]<a[j]){
            aux=a[i];
            a[i]=a[j];
            a[j]=aux;
            }
        }
    }
    printf("O maior elemento eh : %d\n",a[0]);
    printf("O segundo maior elemento eh: %d\n",a[1]);
    printf("Execução bem sucedida!\n");
return(0);
}

int main(void){
    int b;
    setlocale(LC_ALL,"portuguese");
    b=lord();


return(0);
}
