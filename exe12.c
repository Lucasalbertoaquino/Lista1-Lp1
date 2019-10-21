#include<stdio.h>
void verifica(int *num){
    int m,c,d,u,cont=0;
    m=((*num)/1000);
    c=(((*num)%1000)/100);
    d=((((*num)%1000)%100)/10);
    u=((((*num)%1000)%100)%10);
    //printf("%d %d %d %d\n",m,c,d,u);
    if(m>=1){
        cont+=1;
    }
    if(c>=1){
        cont+=1;
    }
    if(d>=1){
        cont+=1;
    }
    if(u>=1){
        cont+=1;
    }
    //printf("%d\n",cont);

    switch(m){
        case 9:
            if((c==0)&&(d==0)&&(u==0)){
                printf("Nove Mil");
            }
            else{
                printf("Nove mil e");
            }
            break;
        case 8:
            if((c==0)&&(d==0)&&(u==0)){
                printf("Oito mil");
            }
            else{
                printf("Oito Mil e");
            }
            break;
        case 7:
            if((c==0)&&(d==0)&&(u==0)){
                printf("Sete mil");
            }
            else{
                printf("Sete Mil e");
            }
            break;
        case 6:
            if((c==0)&&(d==0)&&(u==0)){
                printf("Seis mil");
            }
            else{
                printf("Seis Mil e");
            }
            break;
        case 5:
            if((c==0)&&(d==0)&&(u==0)){
                printf("Cinco mil");
            }
            else{
                printf("Cinco mil e");
            }
            break;
        case 4:
            if((c==0)&&(d==0)&&(u==0)){
                printf("Quantro mil");
            }
            else{
                printf("Quatro mil e");
            }
            break;
        case 3:
            if((c==0)&&(d==0)&&(u==0)){
                printf("Tres mil");
            }
            else{
                printf("Tres mil e");
            }
            break;
        case 2:
            if((c==0)&&(d==0)&&(u==0)){
                printf("Dois mil");
            }
            else{
                printf("Dois mil e");
            }
            break;
        case 1:
            if((c==0)&&(d==0)&&(u==0)){
                printf("mil ");
            }
            else{
                printf("Mil e");
            }
            break;
        default:
            printf(" ");
    }
    switch(c){
        case 9:
            if((d==0)&&(u==0)){
                printf(" Novecentos");
            }
            else{
                printf(" Novecentos e");
            }
            break;
        case 8:
            if((d==0)&&(u==0)){
                printf(" Oitocentos");
            }
            else{
                printf(" Oitocentos e");
            }
            break;
        case 7:
            if((d==0)&&(u==0)){
                printf(" Setecentos");
            }
            else{
                printf(" Setecentos e");
            }
            break;
        case 6:
            if((d==0)&&(u==0)){
                printf(" Seiscentos");
            }
            else{
                printf("Seiscentos e");
            }
            break;
        case 5:
            if((d==0)&&(u==0)){
                printf(" Quinhentos");
            }
            else{
                printf("Quinhentos e");
            }
            break;
        case 4:
            if((d==0)&&(u==0)){
                printf(" Quatrocentos");
            }
            else{
                printf(" Quatrocentos e");
            }
            break;
        case 3:
            if((d==0)&&(u==0)){
                printf(" trezentos");
            }
            else{
                printf(" Trezentos e");
            }
            break;
        case 2:
            if((d==0)&&(u==0)){
                printf(" Duzentos");
            }
            else{
                printf(" Duzentos e");
            }
            break;
        case 1:
            if(u==0){
                printf(" Cem");
            }
            else{
                printf(" Cento e");
            }
            break;
        default:
            printf(" ");
    }
    switch(d){
        case 9:
            if(u==0){
                printf(" Noventa");
            }
            else{
                printf(" Noventa e");
            }
            break;
        case 8:
            if(u==0){
                printf(" Oitenta");
            }
            else{
                printf(" Oitenta e");
            }
            break;
        case 7:
            if(u==0){
                printf(" Setenta");
            }
            else{
                printf(" Setenta e");
            }
            break;
        case 6:
            if(u==0){
                printf(" Sessenta");
            }
            else{
                printf(" Sessenta e");
            }
            break;
        case 5:
            if(u==0){
                printf(" Cinquenta");
            }
            else{
                printf(" Cinquenta e");
            }
            break;
        case 4:
            if(u==0){
                printf(" Quarenta");
            }
            else{
                printf(" Quarenta e");
            }
            break;
        case 3:
            if(u==0){
                printf(" Trinta");
            }
            else{
                printf(" Trinta e");
            }
            break;
        case 2:
            if(u==0){
                printf(" vinte");
            }
            else{
                printf(" Vinte e");
            }
            break;
        case 1:
            if((cont==2)&&(u==0)){
                printf("dez");
            }
            if((cont==2)&&(u==9)){
               printf(" Dezenove");
               u=0;
            }
            if((cont==2)&&(u==8)){
               printf(" Dezoito");
               u=0;
            }
            if((cont==2)&&(u==7)){
               printf("Dezesete");
               u=0;
            }
            if((cont==2)&&(u==6)){
               printf("Dezeseis");
               u=0;
            }
            if((cont==2)&&(u==5)){
               printf("Quinze");
               u=0;
            }
            if((cont==2)&&(u==4)){
               printf("Quatoze");
               u=0;
            }
            if((cont==2)&&(u==3)){
               printf("Treze");
               u=0;
            }
            if((cont==2)&&(u==2)){
               printf("Doze");
               u=0;
            }
            if((cont==2)&&(u==1)){
               printf("Onze");
               u=0;
            }
            break;
        default:
            printf(" ");
    }
    switch(u){
        case 9:
            printf(" Nove");
            break;
        case 8:
            printf(" oito");
            break;
        case 7:
            printf(" Sete");
            break;
        case 6:
            printf(" seis");
            break;
        case 5:
            printf(" Cinco");
            break;
        case 4:
            printf(" quatro");
            break;
        case 3:
            printf(" Tres");
            break;
        case 2:
            printf(" Dois");
            break;
        case 1:
            printf(" Um");
            break;
        default:
            printf(" ");
    }
}
int main(void){
    int n;
    printf("Digite um numero: ");
    scanf("%d",&n);
    verifica(&n);
return(0);
}
