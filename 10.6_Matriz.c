#include <stdio.h>
#include <stdio.h>

int** AlocarMatriz(int linha, int coluna){
    int **matrix = (int**) malloc(linha*sizeof(int*));
    for(int i=0;i<linha;i++){
        matrix[i] = (int*) malloc(coluna*sizeof(int));
        for(int j=0;j<coluna;j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    return matrix;
}

void LiberarMatriz(int** matrix, int linha){
    for(int i=0;i<linha;i++){
        free(matrix[i]);
    }
    free(matrix);
}

void ImprimirMatriz(int** matrix, int linha, int coluna){
    for(int i=0;i<linha;i++){
        for(int j=0;j<coluna;j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int linha=0, coluna=0;

    scanf("%d %d", linha, coluna);
    int** matrix = AlocarMatriz(linha, coluna);
    ImprimirMatriz(matrix, linha, coluna);
    LiberarMatriz(matrix, linha);

    
    return 0;
}