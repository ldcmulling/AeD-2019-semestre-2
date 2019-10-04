#include <stdio.h>
#include <stdlib.h>

 int poosh(int *v, int *c){
    for (int i=0;i<*c;i++){
       printf ("colocando valor %d\n", i);
       scanf ("%d",(v+i));
    }
    return *v;
 };

int main(){
    int *vetor=NULL;
    int *cont;
    cont = malloc (sizeof (int));
    printf ("diga o tamanho do vetor\n");
    scanf ("%d",cont);

    vetor = (int*) malloc ((*cont) *(sizeof(int)));


    *vetor = poosh(vetor,cont);

    for (int i=0;i<*cont;i++){
        printf ("O valor de %d\n e %d\n", i, *(vetor+i));
    }

    free (vetor);
    free (cont);
    return 0;
}