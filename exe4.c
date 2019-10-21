#include<stdio.h>

int main(void){
    int n,i,fat=1;
    printf("Digite n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fat*=i;
    }
    printf("O fatorial de %d eh %d",n,fat);

return(0);
}
