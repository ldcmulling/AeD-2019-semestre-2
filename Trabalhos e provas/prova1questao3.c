#include <stdio.h> 
#include <stdlib.h>

int menorQ(int *pN, unsigned int n){
    int *saida, *i,*j;
    saida = (int*)malloc(sizeof (int));
    i = (int*)malloc(sizeof (int));
    j = (int*)malloc(sizeof (int));
    *saida=0;
    *j=1;
    for(*i=0;*j<n;(*j)++){
        if (pN[*i]>pN[*j]){
            printf("achou o %d menor que o %d \n" , pN[*i], pN[*j]);
            (*saida)++;
            (*i)++;
            *j=*i;
           
        };
        if (*j==(n-1)){
            (*i)++;
            *j=*i;
        }
    }
    free(i);
    free(j);
    return *saida;
}

int main(){
    int vet[6];
    unsigned int n=6;
    int x;
    vet[0]=3;
    vet[1]=9;
    vet[2]=4;
    vet[3]=6;
    vet[4]=7;
    vet[5]=5;
    x=menorQ(vet,n);
    printf("saida e %d \n", x);


    return 0;
}