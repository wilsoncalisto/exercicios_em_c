/*Programacao de Computadores e Algoritmo / Laboratorio de Programacao de Computadores

Trabalho 2
Lista 2
Questao 1 
Equipe: Andressa Moreira
	Elizabeth Castro
	Juliany Raiol
	Luana Andrade
	Wilson Neto
*/

#include <stdio.h> 
#include "util.h"

int main(int argc, char const *argv[])
{
	float raio, volume1;
	printf("Insira o valor do raio: \n");
	scanf("%f",&raio);

	volume1 = volume(raio);

	printf("O volume da esfera eh %.2f: \n", volume1);

	return 0;
}
