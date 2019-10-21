#include<stdio.h>
#include<string.h>

struct aluno{
  char nome[50];
  float nota;
};

void preenche(struct aluno*p){
  printf("Digite o nome do aluno: ");
  setbuf(stdin,NULL);
  fgets(p->nome,10,stdin);
  strtok(p->nome,"\n");
  printf("Digite a nota do aluno: ");
  scanf("%f",&(p->nota));
}


int main(void){
  int i,j,n=10;
  struct aluno turma[n];
  float soma=0,media=0,aux;
  char auxname[50];



  for(i=0;i<n;i++){
    preenche(&turma[i]);
  }
  puts("nome \t nota");
  for(j=0;j<n;j++){
    printf(" %s \t\t %5.2f\n",turma[j].nome,turma[j].nota);
    soma+=turma[j].nota;
    media=soma/n;
  }
  printf("A media da turma: %5.2f\n",media);
  for(i=0;i<n-1;i++){
    for(j=i+1;j<n;j++){
      if(turma[i].nota<turma[j].nota){
        aux = turma[i].nota;
        turma[i].nota = turma[j].nota;
        turma[j].nota = aux;

        strcpy(auxname,turma[i].nome);
        strcpy(turma[i].nome, turma[j].nome);
        strcpy(turma[j].nome, auxname);
      }
    }
  }
  //puts("vetor ordenado!");
  puts("Os alunos acima da media ");
  for(i=0;i<5;i++){
    //printf("%s \t %5.2f\n",turma[i].nome,turma[i].nota);
    if(turma[i].nota>media){
      printf("%s \t %5.2f\n",turma[i].nome,turma[i].nota);
    }

  }

return(0);
}
