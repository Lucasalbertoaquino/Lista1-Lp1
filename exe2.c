#include<stdio.h>
#include<locale.h>

int main(void){
    setlocale(LC_ALL,"portuguese");
    int n,i,cont=0;
    printf("Digite n: ");
    scanf("%d",&n);
    for(i=1;i<n;i++){
        if((n%i==0)&&(n%n==0)){
            cont+=1;
            //printf("%d\n",cont);
        }
    }
    if (cont>=2){
        printf("O n�mero %d n�o � primo!\n",n);
        //printf("%d",cont);
    }
    else{
        printf("O n�mero %d � primo!\n",n);
        //printf("%d",cont);
    }
return(0);
}
