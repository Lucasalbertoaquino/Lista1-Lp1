#include<stdio.h>
#include<stdlib.h>//contem a funcao rand e srand
#include<time.h>//vamos usar a time pra nulo pra alterar a semente
void game(void){
    int i,player1=0,player2=0,a1,a2,b1,b2,ct1,ct2,e1,e2;
    for(i=1;i<=11;i++){
        printf("Rodada %d\n",i);
        a1=(rand()%6)+1;
        a2=(rand()%6)+1;
        b1=(rand()%6)+1;
        b2=(rand()%6)+1;
        printf("\nJogador 1: (%d,%d)\n",a1,a2);
        printf("Jogador 2: (%d,%d)\n\n",b1,b2);
        ct1=a1+a2;//player 1
        ct2=b1+b2;//player 2
        if((a1==a2)&&(b1!=b2)){
            player1++;
        }
        else if((b1==b2)&&(a1!=a2)){
            player2++;
        }
        else if((a1==a2)&&(b1==b2)){
            e1=a1+a2;
            e2=b1+b2;
            if(e1>e2){
                player1++;
            }
            else if(e2>e1){
                player2++;
            }
        }
        else if(ct1>ct2){
            player1++;
        }
        else if(ct2>ct1){
            player2++;
        }
        //printf("%d %d\n",player1,player2);
    }
    if(player1>player2){
        printf("Jogador 1 : %d X %d : Jogador 2 \n",player1,player2);
        puts("O Jogador 1 ganhou!");
    }
    else if(player2>player1){
        printf("Jogador 1 : %d X %d : Jdogador 2 \n",player1,player2);
        puts("O Jogador 2 ganhou!");
    }
    else{
        puts("Empate!");
    }
}

int main(void){
    srand(time(NULL));
    //srand(1)//gera com a mesma semente
    game();

return(0);
}
