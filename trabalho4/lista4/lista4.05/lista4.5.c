#include <stdio.h>
#include"util.h"
#define Max 100

int main(int argc,const char *argv[])
	{
		int maior,n,i;
		int A[MAX][MAX];
		 int linha, coluna;

		printf("Digite a quantidade de linhas da matriz A:\n");
		scanf("%d",&n);
		
	preencher(A,n);

        for (i = 0; i < (n*n); i++) {
    		maior = devolveMaior(A, n, &linha, &coluna);
    		printf ("%d em (%d, %d)\n", maior, linha, coluna);
    		A[linha][coluna] = -1;
 	 }
        return 0;
}