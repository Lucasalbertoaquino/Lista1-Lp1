#include<stdio.h>
#include<ctype.h>//para converter em maisculo/minusculo
#include<stdlib.h>
#define DIM 3
typedef struct sexo{
    int masculino;
    int feminino;
}Tsexo;
typedef struct procedencia{
    int capital;
    int interior;
    int outro;
}Tproc;

struct registro{
    int ano;
    Tsexo s;
    Tproc p;
};

int main(void){
    int i,nt,w,s,t;
    int mp21=0,mc=0,mi60=0,m60=0;
    char c;
    struct registro v1[DIM];
    for(i=0;i<DIM;i++){
        v1[i].ano=0;
        v1[i].s.masculino=0;
        v1[i].s.feminino=0;
        v1[i].p.capital=0;
        v1[i].p.interior=0;
        v1[i].p.outro=0;
    }
    /*
    for(i=0;i<DIM;i++){
        printf("ano:%d SM:%d SF:%d PC:%d PI:%d PO:%d\n",v1[i].ano,v1[i].s.masculino,v1[i].s.feminino,v1[i].p.capital,v1[i].p.interior,v1[i].p.outro);
    }
    */
    for(i=0;i<DIM;i++){
        w=1;
            //printf("%d\n",i);
        while(w){
           printf("Digite sua idade: ");
           scanf("%d",&v1[i].ano);
           if((v1[i].ano<0)||(v1[i].ano>130)){
           printf("Algo Errado- Digite Novamente!\n");
           }
           else{
             w=0;
            }
        }
    //setbuf(stdin,NULL);
    //printf("%d\n",i);
        s=1;
        while(s){
            setbuf(stdin,NULL);
            printf("Digite seu sexo(M-Masculino/F-Feminino): ");
            scanf("%c",&c);
            c=toupper(c);//convete p/ maisculo tolower(arg) p/ minuscula
            //printf("%c\n",c);
            switch(c){
                case 'M':
                        v1[i].s.masculino+=1;
                        s=0;
                        break;
                case 'F':
                        v1[i].s.feminino+=1;
                        s=0;
                        break;
                default:
                        puts("Voce Digitou a letra errado - Digite Novamente!");
                }
        }
    //setbuf(stdin,NULL);
    //printf("%d\n",i);
        t=1;
        while(t){
            setbuf(stdin,NULL);
            printf("Digite sua procedencia:\n0-capital\n1-Interior\n2-outro\nResposta:");
            scanf("%d",&nt);
            switch(nt){
                    case 0:
                        v1[i].p.capital+=1;
                        t=0;
                        break;
                    case 1:
                        v1[i].p.interior+=1;
                        t=0;
                        break;
                    case 2:
                        v1[i].p.outro+=1;
                        t=0;
                        break;
                    default:
                        puts("Algo Errado - Digite Novamente!");
                }
            }
        }
    /*
    for(i=0;i<DIM;i++){
        printf("ano:%d SM:%d SF:%d PC:%d PI:%d PO:%d\n",v1[i].ano,v1[i].s.masculino,v1[i].s.feminino,v1[i].p.capital,v1[i].p.interior,v1[i].p.outro);
    }
    */
    for(i=0;i<DIM;i++){
        if(v1[i].ano<21){
            mp21+=1;
        }
        if((v1[i].s.feminino)&&(v1[i].p.capital)){
            mc+=1;
        }
        if((v1[i].ano>60)&&(v1[i].p.interior)){
           mi60+=1;
        }
        if((v1[i].ano>60)&&(v1[i].s.feminino)){
            m60+=1;
        }
    }
    //printf("%d %d %d %d\n",mp21,mc,mi60,m60);
    mp21=(100*mp21)/(DIM);
    puts("RELATORIO FINAL");
    printf("Motoristas com menos de 21 anos: %d%%\n",mp21);
    printf("A quantidade de mulheres que sao da capital: %d\n",mc);
    printf("A quantidade de motoristas do interior do estado que tem idade maior que 60 anos: %d\n",mi60);
    printf("Existem %d mulheres com idade maior que 60 anos.\n",m60);

return(0);
}
