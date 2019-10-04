#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//typedef long TipoChave;

typedef struct Registro {
	int Chave;
	char nome[50];
} Registro;

typedef struct No * Apontador;

typedef struct No {
Registro Reg;
Apontador pEsq, pDir;
} No;

void reset(Apontador *p){
	*p = NULL;
}

void push(Registro x,Apontador *p) {
	if (*p == NULL){
	*p = (Apontador)malloc(sizeof(struct No));
	(*p)->Reg = x;
	(*p)->pEsq = NULL; 
	(*p)->pDir = NULL;
	return;
}
	if (x.Chave < (*p)->Reg.Chave){
	push(x, &(*p)->pEsq);
	return;
}
	if (x.Chave > (*p)->Reg.Chave)
	push(x, &(*p)->pDir);
	else {
	printf("Erro : Registro ja existe na arvore\n");
	}
}

int Pesquisa(Registro *x, Apontador p){
	if (p == NULL){
		printf("Erro : Registro nao esta presente na arvore\n");
	return 0;
}
	if (x->Chave < p->Reg.Chave) {
		Pesquisa(x, p->pEsq);
	return 1;
}
	if (x->Chave > p->Reg.Chave){
		Pesquisa(x, p->pDir);
	return 1;
	}
	*x = p->Reg;
	return 1;
}

int main(int argc, char **argv)
{
	int n=9;
	Registro x;
	Apontador arvore;
	//menu
	reset(&arvore);
	for(;n!=0;){
	printf(" 0 para sair \n 1 para insere \n 2 para pesquisa \n");
	scanf ("%d",&n);
		if (n==1){
			printf("Key: ");
			scanf("%d", &x.Chave);
			printf("Name: ");
			scanf("%s", x.nome);
			push(x, &arvore);
		}
		else if (n==2){
			printf("Key: ");
			scanf("%d", &x.Chave);
			if (Pesquisa(&x, arvore)){ 
				printf("Name: %s\n",x.nome);}
		}
}
	return 0;
}
