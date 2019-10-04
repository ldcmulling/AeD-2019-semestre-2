/*Faça uma função que receba um valor n e crie dinamicamente um vetor de n
elementos e retorne um ponteiro. Crie uma função que receba um ponteiro para um
vetor e um valor n e imprima os n elementos desse vetor. Construa também uma
função que receba um ponteiro para um vetor e libere esta área de memória. Ao final,
crie uma função principal que leia um valor n e chame a função criada acima. Depois, a
função principal deve ler os n elementos desse vetor. Então, a função principal deve
chamar a função de impressão dos n elementos do vetor criado e, finalmente, liberar a
memória alocada através da função criada para liberação.
*/

#include <stdio.h>
#include <stdlib.h>

 void poosh(int **v, int **n){

    *n = malloc (sizeof (int*));
    if (n==NULL)printf("erro de alocação de memoria");
    printf ("diga o tamanho do vetor\n");
    scanf ("%d", *n);

    *v = malloc ((n[0][0])* sizeof (int));
    if (v==NULL)printf("erro de alocação de memoria");
    for (int i=0;i<(**n);i++){
        printf ("colocando valor %d\n", i);
        scanf ("%d", &v[0][i]);
    }
 };

  void imprime (int **v, int **n){
    printf ("\n\n\n");
    for (int i=0;i<(n[0][0]);i++){
        printf ("O valor de %d\n e %d\n", i,v[0][i]);       
    }

 };

int main(){
    int **n=NULL;
    int **v=NULL;
    n = malloc (sizeof (int*));
    v = malloc (sizeof (int*));
    poosh (v,n);
    imprime(v,n);
    free (v[0]);
    free (v);
    free (n[0]);
    free (n);

    return 0;
}
