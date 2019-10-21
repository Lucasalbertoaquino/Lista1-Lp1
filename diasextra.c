#include<stdio.h>
typedef struct data{
  int dia;
  int mes;
  int ano;
}Td;

int anobis(int *a,int *b){
  /*função que retorna a qtd de anos bissextos*/
  int valor,tanobis=0;
  //printf("%d %d\n",(*a),(*b));
  for(valor=(*a);valor<=(*b);valor++){
    if((valor%400==0)||((valor%4==0)&&(valor%100!=0))){
      tanobis++;
    }
  }
  return(tanobis);
}

Td data1(int *v){
  Td Di;
  int s=1;
  //int di,df;
  while(s){
    int cont=0;
    printf("Data inicial\n");
    printf("Dia: ");
    scanf("%d",&Di.dia);
    if((Di.dia<1)||(Di.dia>31)){
      cont++;
    }
    printf("Mes: ");
    scanf("%d",&Di.mes);
    if((Di.mes<1)||(Di.mes>12)){
      cont++;
    }
    printf("Ano: ");
    scanf("%d",&Di.ano);
    if((Di.ano<1900)||(Di.ano>2019)){
      cont++;
    }
    if(cont>0){
      puts("Algo Errado-Digite Novamente!");
    }
    else{
      s=0;
    }
  }
  //printf("%d/%d/%d\n",Di.dia,Di.mes,Di.ano);
return(Di);
}
Td data2(int *v1){
  Td Df;
  int s2=1;
  while(s2){
    int cont=0;
    printf("\nData Final\n");
    printf("Dia: ");
    scanf("%d",&Df.dia);
    if((Df.dia<1)||(Df.dia>31)){
        cont++;
    }
    printf("Mes: ");
    scanf("%d",&Df.mes);
    if((Df.mes<1)||(Df.mes>12)){
      cont++;
    }
    printf("Ano: ");
    scanf("%d",&Df.ano);
    if((Df.ano<1900)||(Df.ano>2019)){
      cont++;
    }
    if(cont>0){
      puts("Algo Errado-Digite Novamente!");
    }
    else{
      s2=0;
    }
  }
  //printf("%d/%d/%d",Df.dia,Df.mes,Df.ano);
return(Df);
}
void calc(Td Di,Td Df){
  int i,danobi=0,tdanobi=0,dano=0,tdano=0,dtano=0;
  if(Df.ano>Di.ano){
    danobi=anobis(&Di.ano,&Df.ano);
  }
  else{
    danobi=anobis(&Df.ano,&Di.ano);
  }
  if(Df.ano>Di.ano){
    dano=(Df.ano-Di.ano)-danobi;
  }
  else{
    dano=(Di.ano-Df.ano)-danobi;
  }
  tdano=dano*365;
  tdanobi=danobi*366;
  //printf("%d %d %d %d\n",danobi,dano,tdano,tdanobi);
  dtano=tdano+tdanobi;//dias totais dos anos

  //printf("%d\n",dano);
  //printf("%d\n",dtano);

  int smes=0,d31=0,d30=0;
  if(Di.mes<Df.mes){
    for(i=Di.mes;i<Df.mes;i++){
      if((i==2)||(i==4)||(i==6)||(i==9)||(i==11)){
        d30++;
      }
      else{
        d31++;
      }
    }
  }
  else{
    for(i=Df.mes;i<Di.mes;i++){
      if((i==2)||(i==4)||(i==6)||(i==9)||(i==11)){
        d30++;
      }
      else{
        d31++;
      }
    }
  }
  //printf("%d %d\n",d30,d31);
  d30*=30,d31*=31;
  //printf("%d %d\n",d30,d31);
  smes=d30+d31;
  //printf("%d\n",smes);

  int diast=0;
  if(Di.dia>=Df.dia){
    diast=Di.dia-Df.dia;
  }
  else{
    diast=Df.dia-Di.dia;
  }
  //printf("%d\n",diast);

  int tot=0;

  if(((Di.dia>Df.dia)&&(Di.mes<Df.mes)&&(Di.ano<Df.ano))||((Di.dia<Df.dia)&&(Di.mes>Df.mes)&&(Di.ano>Df.ano))){
    tot=(dtano+smes-diast-2)+2;//ok
  }
  if(((Di.dia<Df.dia)&&(Di.mes<Df.mes)&&(Di.ano<Df.ano))||((Di.dia>Df.dia)&&(Di.mes>Df.mes)&&(Di.ano>Df.ano))){
    tot=(dtano+smes+diast-2);//ok
  }
  if(((Di.dia>Df.dia)&&(Di.mes>Df.mes)&&(Di.ano<Df.ano))||((Di.dia<Df.dia)&&(Di.mes<Df.mes)&&(Di.ano>Df.ano))){
    tot=(dtano-smes-diast-1)+1;//ok
  }
  if(((Di.dia>Df.dia)&&(Di.mes<Df.mes)&&(Di.ano>Df.ano))||((Di.dia<Df.dia)&&(Di.mes>Df.mes)&&(Di.ano<Df.ano))){
    tot=(dtano-smes+diast+2)-1;//ok
  }
  printf("\n");
  puts("Resultado!");
  printf("A Diferenca de dias de %d/%d/%d para %d/%d/%d eh:%d dias.\n",Di.dia,Di.mes,Di.ano,Df.dia,Df.mes,Df.ano,tot);

  //printf("%d/%d/%d\n",Di.dia,Di.mes,Di.ano);
  //printf("%d/%d/%d",Df.dia,Df.mes,Df.ano);
}

int main(void){
  /*programa que calcula o numero de dias entre duas datas*/
  int teste;
  Td d1,d2;
  d1=data1(&teste);
  d2=data2(&teste);
  calc(d1,d2);
return(0);
}
