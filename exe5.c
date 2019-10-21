#include<stdio.h>
int main(void){
    int m1r,m50,m25,m10,m5,m1,flag=1,conv;
    float valor;

    while(flag){
        printf("Digite o valor entre R$1.00 e R$0.01: ");
        scanf("%f",&valor);
        if ((valor<0.001)||(valor>1.00)){
            printf("\nERRO - Digite o valor entre R$1.00 e R$0.01!\n");
        }
        else{
            flag=0;
        }
    }
    //printf("%5.2f\n",valor);
    valor*=100;
    conv=(int)valor;//converte valor(float) em int (conv)
    printf("O valor em moedas e: ");
    m1r=conv/100;
    printf("\n%d moeda(s) de 1 real\n",m1r);
    m50=(conv%100)/50;
    printf("%d moeda(s) de 50 centavos\n",m50);
    m25=((conv%100)%50)/25;
    printf("%d moeda(s) de 25 centavos\n",m25);
    m10=(((conv%100)%50)%25)/10;
    printf("%d moeda(s) de 10 centavos\n",m10);
    m5=((((conv%100)%50)%25)%10)/5;
    printf("%d moeda(s) de 5 centavos\n",m5);
    m1=((((conv%100)%50)%25)%5);
    printf("%d moeda(s) de 1 centavo\n",m1);

return(0);
}
