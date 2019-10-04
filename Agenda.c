#include <stdio.h>
#include <stdlib.h>

struct agenda{
char nome [20];
int numero;
};

struct varriavel{
int tamanho;
int i;
}

int PUSH (struct agenda *c){
    if (c == NULL){
    c= malloc (sizeof(struct agenda));
        if (c == NULL) printf ("deu ruin na alocação");
    }
    else {
    c= (void*)realloc (c,((sizeof(struct agenda))*(tamanho+1)));
        if (c == NULL) printf ("deu ruin na alocação");
    }
    printf ("Nome?\n");
    scanf ("%s",(tamanho+c)->nome);
    printf ("NUMERO?\n");
    scanf ("%d",&(tamanho+c)->numero);
;
    tamanho=tamanho+1;
    return c;
};

int main(){
    int x=99;
    void *contatos=NULL;
    void *v = malloc (sizeof( struct variavel));
    *v->tamanho= 0;
    for(;x!=0;){
        printf ("digite 1 para inserir\n");
 //       printf ("digite 2 para Apagar\n");
 //       printf ("digite 3 para listar\n");
//        printf ("digite 3 para organizar\n");
        printf ("digite 0 para sair\n");
        scanf ("%d",&x);

        if (x==1) contatos = PUSH (contatos);
 //      else if (x=2)APAGA();
 //      else if (x=3)LISTA();
 //      else if (x=4)ORDENA();
        else {if (x!=0) printf("hahaha numero errado\n"); }
    }
    printf ("tchau\n");
    free (contatos);
    return 0;
}