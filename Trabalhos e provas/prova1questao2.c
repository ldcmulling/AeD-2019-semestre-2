#include <stdio.h> 
#include <stdlib.h>

void ImparPar(int *pN, int n){
    int *Pares, *Impar,*i,*p,*cont;
    Impar = (int*)malloc((n) *sizeof (int));
    Pares = (int*)malloc((n) *sizeof (int));
    i = (int*)malloc(sizeof (int));
    p = (int*)malloc(sizeof (int));
    cont = (int*)malloc(sizeof (int));
    *i=0;
    *p=0;

    for(*cont=0;(*cont)<n;(*cont)++){
        if (pN[*cont] % 2 ==0 ){
            Pares[*p]=pN[*cont];
            (*p)++;
        }
        else {
            Impar[*i]=pN[*cont];
            (*i)++;
        }
    }
    *p=0;
    for (*cont=0;(*cont)<n;(*cont)++){
        if(*i>0){
            pN[*cont]=Impar[*cont],
            (*i)--;
        }
        else {
            pN[*cont]=Pares[*p];
            (*p)++;
        }
        printf("Vetor %d = %d\n", *cont, pN[*cont]);
    }
    free(i);
    free(p);
    free(cont);
    free(Pares);
    free(Impar);
}

int main(){
    int vet[6];
    int n=6;
    vet[0]=1;
    vet[1]=1;
    vet[2]=2;
    vet[3]=4;
    vet[4]=3;
    vet[5]=6;
    ImparPar(vet,n);

    return 0;
}