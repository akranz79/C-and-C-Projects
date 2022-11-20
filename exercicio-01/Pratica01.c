#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
#define TAM 8

int main()
{
	setlocale(LC_ALL, "");
	int numeros[TAM];
	int i, aux, cont;
		for(i=0;i<TAM;i++){
		printf("Sua RU %dº Digito: ", i+1);
		scanf("%d", &numeros[i]);
		system("cls");	
		}

	printf("\nSeu RU:");
		for(i=0;i<TAM;i++){
			printf("%d", numeros[i]);

		}	
	for (cont = 1; cont < TAM; cont ++){
		for (i=0;i<TAM-1;i++) {
			if (numeros[i] > numeros[i+1]){
				aux = numeros[i];
				numeros[i] = numeros[i+1];
				numeros[i+1] = aux;
			}
		}
	}
	printf("\n\nMaior e menor numeros:");
	printf("\n\tMenor numero: %d",numeros[0]);
	printf("\n\tMaior numero: %d",numeros[TAM-1]);
}
