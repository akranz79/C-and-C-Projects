#include <stdio.h>
#include <stdlib.h>
#define TAM 6 //Define o tamanho do vetor

void comparaMaior(int vet[], int tam) { //procedimento que compara os elementos do vetor, par a par, e faz uma ordenação
	for (int cont = 1; cont < tam; cont ++){
		for (int i=0;i<tam-1;i++) {
			if (vet[i] > vet[i+1]){
				int aux = vet[i];
				vet[i] = vet[i+1];
				vet[i+1] = aux;
			}
		}
	}

	printf("\n\tMenor numero contido no vetor: %d",vet[0]); // exibe o menor numero do vetor
	printf("\n\tMaior numero contido no vetor: %d",vet[tam-1]); // exibe o maaior numero do vetor
}

void impromirVetor(int *v, int tam){ //após entrar com os dados da UR, este procedimento traz o numero da UR montada.
	printf("\nSeu RU: ");
	for(int i=0; i < tam; i++){
		printf("%d", *(v+i));
	}
	printf("\n");
}

void preencherVetor(int *v, int tam){ // procedimento para inserir os dados no array, onde o usuario vai digitar elemento por elemento;
	int i;
	for (i=0; i < tam; i++){
		printf("%d digito RU: ", i+1);
		scanf("%d", v+i);
		system("cls");
	}
	printf("\n");
}

int main() {
	int *vet; //declaração de vetor por ponteiro
	vet = (int *) malloc(sizeof (int)*TAM); // alocação de espaço para o tipo de dado na memória

	preencherVetor(vet, TAM); //chamada da funcao para preencher os dados da RU
	impromirVetor(vet, TAM); // chamada da funcao para imprimir na tela o RU montado
	comparaMaior(vet, TAM); //Chamada da funcao para comparar e ordenar os elementos do vetor.
}
