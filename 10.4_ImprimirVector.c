#include <stdlib.h>
#include <stdio.h>

void imprime(int vetor[], int tamanho_vetor){
    for(int i=0;i<tamanho_vetor;i++){
        printf("%d\n", vetor[i]);
    }
}

int main(){
    int tamanho_vetor=0;
    int *Vector = (int*) malloc(tamanho_vetor*sizeof(int));
    for(int i=0; i<tamanho_vetor;i++){
    scanf("%d", &Vector[i]);
    }
    imprime(Vector, tamanho_vetor);
    free(Vector);

}