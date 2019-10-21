#include<stdio.h>
#include<string.h>

int main(void){
    char vec[80],aux;
    int i,j,cont=0;
    strcpy(vec,"aaaaabbccccdb");
    for(i=0;i<strlen(vec)-1;i++){
        for(j=i+1;j<strlen(vec);j++){
            if(vec[i]<vec[j]){
            aux=vec[i];
            vec[i]=vec[j];
            vec[j]=aux;
            }
        }
    }
    for(i=0;i<strlen(vec);i++){
        if(vec[i]!=vec[i+1]){
            cont++;
        }
    }
    printf("O numero de caracteres presentes distintos no vetor eh: %d",cont);

return(0);
}
