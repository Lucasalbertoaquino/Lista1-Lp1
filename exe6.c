#include<stdio.h>

int main(void){
    int tanque=50,gasolina=4,parada=4,flag=1;
    int precop,kmtot,precov,i;
    int contkm,contgas;
    float precot;
    float kmpl;
    //while(flag){
        printf("Digite a quantidade de paradas realizadas: ");
        scanf("%d",&parada);
        int km[parada];
        contkm=0;
        int gas[parada];
        contgas=0;
        float precoparada[parada];
        precot=0;
        for(i=1;i<=parada;i++){
            printf("Digite a quantidade de Km da parada %i de %i: ",i,parada);
            scanf("%d",&km[i]);
            contkm+=km[i];
            printf("Digite a quantidade de gasolina comprada(em litros) da parada %i de %i: ",i,parada);
            scanf("%d",&gas[i]);
            contgas+=gas[i];
            printf("Digite o preco de abastecimento da parada %i de %i: ",i,parada);
            scanf("%f",&precoparada[i]);
            precot+=precoparada[i];
        }
        printf("Digite a quantidade de litros do seu tanque: ");
        scanf("%d",&tanque);
        printf("%d %d %5.2f\n\n",contkm,contgas,precot);
        for(i=1;i<=parada;i++){
            printf("%d %d %5.2f\n",km[i],gas[i],precoparada[i]);
        }
        /*
        if((parada<=0)||(tanque<=0)||(km<=0)){
            printf("ERRO-Nenhum dado pode ser deixado com valor 0 ou menor - Digite Novamente!\n");
        }
        else{
            flag=0;
        }
        */
   // }
   /*
    kmpl=(float)tanque/contkm;
    precop=tanque*parada;
    kmtot=contkm*parada;
    precov=precop*parada;
    */

    printf("A kilometragem obtida por litro de cada parada eh: %5.2f\n",((float)tanque/(contkm/parada)));
    printf("A km obitida por litro em toda viagem eh: %5.2f\n",(contkm/tanque));
    printf("O custo total de combustivel em toda viagem eh: %5.2f\n",precot);

return(0);
}
