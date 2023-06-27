#include <stdlib.h>
#include <stdio.h>

void imprime(int vetor[], int tamanho_vetor){
    for(int i=0;i<tamanho_vetor;i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

void multiplica(int vetor[], int tamanho_vetor, double v){
    for(int i=0;i<tamanho_vetor;i++){
        vetor[i] = vetor[i]*v;
    }
}
void multiplica2(int vetor[], int tamanho_vetor, double v){
    for(int i=0;i<tamanho_vetor;i++){
        vetor[i] = vetor[i]*(1/v);
    }
}

int main(){
    int tamanho_vetor=0, valor_multiplicar=0;
    scanf("%d", &tamanho_vetor);
    int *Vector = (int*) malloc(tamanho_vetor*sizeof(int));

    for(int i=0;i<tamanho_vetor;i++){
        scanf("%d", &Vector[i]);
    }

    scanf("%d", &valor_multiplicar);
    imprime(Vector, tamanho_vetor);
    multiplica(Vector, tamanho_vetor, valor_multiplicar);
    imprime(Vector, tamanho_vetor);
    multiplica2(Vector, tamanho_vetor, valor_multiplicar);
    imprime(Vector, tamanho_vetor);
    free(Vector);
    return 0;
}