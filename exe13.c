#include<stdio.h>

void ord(int vec[]){
    int i,j,aux;
        for(i=0;i<29;i++){
            for(j=i+1;j<30;j++){
                if(vec[i]>vec[j]){
                    aux=vec[i];
                    vec[i]=vec[j];
                    vec[j]=aux;
                }
            }
        }
    }


int main(void){
    int i,j;
//v1[10]={7,6,5,10,0,40,4,6,9,1},v2[10]={10,7,4,6,30,1,8,45,2},v3[10]={6,4,7,98,3,80,10,43,100,1};
    int aux,k=0,ve[30]={0};
    int vt[3][10]={{7,6,5,10,0,40,4,6,9,1},{10,7,4,6,30,1,8,45,2,6},{6,4,7,98,3,80,10,43,100,1}};// essa e a ideia

    printf("\n");
    for(i=0;i<3;i++){
        for(j=0;j<10;j++){
            //printf("%d\n",vt[i][j]);
            ve[k++]=vt[i][j];
        }
    }
    printf("\n");
    /*
    for(i=0;i<30;i++){
        printf("*R:%d\n",ve[i]);
    }
    */
    ord(ve);
    printf("\n");
    for(i=0;i<30;i++){
        printf("R:%d\n",ve[i]);
    }

return(0);
}
