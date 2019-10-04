#include <stdio.h>
#include <stdlib.h>

void imprimeBuffer(void *pBuffer, unsigned int nTotal){
	int n=0;
	for(;n<nTotal;n++){
		printf("%d\n", *(int*)pBuffer);
		pBuffer= pBuffer+(sizeof (int));
		printf("%f\n", *(float*)pBuffer);
		pBuffer= pBuffer+(sizeof (float));
		printf("%lf\n", *(double*)pBuffer);
		pBuffer= pBuffer+(sizeof(double));
//		(int*)pBuffer++;
	}
};

int main(int argc, char **argv)
{
	void *pBuffer;
	void *buf;
	int nTotal=3,n=0;
	pBuffer = (void *) malloc (nTotal*((sizeof (int))+(sizeof (float))+(sizeof (double))));
	buf=pBuffer;
	for(;n<nTotal;n++){
		*(int*)buf = rand() %10;
		buf = buf+(sizeof (int));
		*(float*)buf = rand() %1000;
		buf = buf+(sizeof(float));
		*(double*)buf = rand() %100000;
		buf = buf+(sizeof(double));
	};
	imprimeBuffer( pBuffer, nTotal);
	free(pBuffer);
	
	return 0;
}
