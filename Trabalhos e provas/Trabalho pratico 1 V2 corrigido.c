#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    void *Buffer;
    Buffer=NULL;
    int Ti=0 , Tf=0 , Td=0 , In=0 , Fl=0 , Do=0 ,cont ;
    int *I=NULL;
    float *F=NULL;
    double *D=NULL;
    char x='a';
    Buffer=malloc(Ti*sizeof(int));
    if (Buffer==NULL) printf("deu RUIM\n");

    for(; x!= 's'; ){
        printf (" para add int digite i\n para add float digite f\n para add double digite d\n para sair digite s\n");
        scanf ("%s", &x);
    //    x=getchar(); // nao pode usar por causa do /0
        if (x=='i'){    //Menu de inserir INT
			Buffer = realloc (Buffer,(((Ti+2)*sizeof(int))+(Tf*sizeof(float))+(Td*sizeof(double))));
			if ( Buffer == NULL ) {
                printf("deu RUIM\n");
			}
			I = Buffer+(Ti*sizeof(int))+(Tf*sizeof(float))+(Td*sizeof(double));
			I[0]=1; 	// o int 1 é a refereincia para Int
			printf ("\ndigite o valor de Int\n");
            scanf ("%d" , & I[1]);
            Ti= Ti+2;
        }
		else if (x=='f'){   //Menu de inserir FLOAT
			Buffer = realloc (Buffer,(((Ti+1)*sizeof(int))+((Tf+1)*sizeof(float))+(Td*sizeof(double))));
			if ( Buffer == NULL ) {
                printf("deu RUIM\n");
			}
            I = Buffer+(Ti*sizeof(int))+(Tf*sizeof(float))+(Td*sizeof(double));
            I[0] =2;	    // o int 2 é a refereincia para Float
			Ti++;
            F = Buffer+(Ti*sizeof(int))+(Tf*sizeof(float))+(Td*sizeof(double));
            printf ("\ndigite o valor de Float\n");
            scanf ("%f" , & F[0]);
            Tf++;
        }
		else if (x=='d'){    //Menu de inserir DOUBLE
			Buffer = realloc (Buffer,(((Ti+1)*sizeof(int))+(Tf*sizeof(float))+((Td+1)*sizeof(double))));
			if ( Buffer == NULL ) {
                printf("deu RUIM\n");
			}
            I = Buffer+(Ti*sizeof(int))+(Tf*sizeof(float))+(Td*sizeof(double));
            I[0]=3;	// o int 3 é a refereincia para Double
            Ti++;
            D = Buffer+(Ti*sizeof(int))+(Tf*sizeof(float))+(Td*sizeof(double));
			printf ("\ndigite o valor de Double\n");
            scanf ("%lf" , &D[0]);
            Td++;
        }
		else if (x=='s'){      //menu de saida e impressao
            printf ("\nToda a sequencia de incersao:\n");
            for( cont=0; cont < (Ti+Tf+Td);cont++){
                I=Buffer+(In*sizeof(int))+(Fl*sizeof(float))+(Do*sizeof(double));
			    if (I[0]==1){
					printf("int %d\n",I[1]);
                    In=2+In;				
                }
                else if (I[0]==2){
                    In++;
                    F = Buffer+(In*sizeof(int))+(Fl*sizeof(float))+(Do*sizeof(double));
					printf("float %f\n",F[0]);
                    Fl++;
				}
                else if (I[0]==3){
                    In++;
                    D = Buffer+(In*sizeof(int))+(Fl*sizeof(float))+(Do*sizeof(double));
					printf("double %lf\n",D[0]);
                    Do++;
				}
                cont++;
	    	}
            printf ("\nToda a sequencia de INT:\n");
            for (cont=0,In=0,Fl=0,Do=0 ; cont < (Ti+Tf+Td);cont=cont+2){
                I=Buffer+(In*sizeof(int))+(Fl*sizeof(float))+(Do*sizeof(double));
			    if (I[0]==1){
					printf("int %d\n",I[1]);
                    In=2+In;
                }
                else if ( I[0]==2){
                    In++;
                    Fl++;
                }
                else{
                    In++;
                    Do++;
                }
            }
            printf ("\nToda a sequencia de FLOAT:\n");
            for (cont=0,In=0,Fl=0,Do=0 ; cont < (Ti+Tf+Td);cont=cont+2){
                I=Buffer+(In*sizeof(int))+(Fl*sizeof(float))+(Do*sizeof(double));
			    if (I[0]==1) In=2+In;
                else if ( I[0]==2){
                    In++;
                    F = Buffer+(In*sizeof(int))+(Fl*sizeof(float))+(Do*sizeof(double));
					printf("float %f\n",F[0]);
                    Fl++;
                }
                else{
                    In++;
                    Do++;
                }
            }
            printf ("\nToda a sequencia de DOUBLE:\n");
            for (cont=0,In=0,Fl=0,Do=0 ; cont < (Ti+Tf+Td);cont=cont+2){
                I=Buffer+(In*sizeof(int))+(Fl*sizeof(float))+(Do*sizeof(double));
			    if (I[0]==1) In=2+In;
                else if ( I[0]==2){
                    In++;
                    Fl++;
                }
                else{
                    In++;
                    D = Buffer+(In*sizeof(int))+(Fl*sizeof(float))+(Do*sizeof(double));
					printf("double %lf\n",D[0]);
                    Do++;
                }
            }
        }		
		else printf ("Ta errado isso ai po\nTenta Denovo!\n");
    }
        free(Buffer);
    return 0;
}
