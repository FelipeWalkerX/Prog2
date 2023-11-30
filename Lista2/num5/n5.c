#include <stdio.h>
#include <stdlib.h>

int* lerArquivo(const char* nomeArquivo, int* T) {
    FILE* arquivo = fopen(nomeArquivo, "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return NULL;
    }

    fscanf(arquivo, "%d", T);

    int* sequencia = (int*)malloc(*T * sizeof(int));

    if (sequencia == NULL) {
        printf("Erro na alocação de memória.\n");
        fclose(arquivo);
        return NULL;
    }

    for (int i = 0; i < *T; i++) {
        fscanf(arquivo, "%d", &sequencia[i]);
    }

    fclose(arquivo);
    return sequencia;
}

int main() {
    int tamanhoSequencia;
    int* vetorSequencia;
    const char* nomeArquivo = "sequencia.txt";

    vetorSequencia = lerArquivo(nomeArquivo, &tamanhoSequencia);

    if (vetorSequencia != NULL) {
        printf("Sequência lida do arquivo:\n");

        for (int i = 0; i < tamanhoSequencia; i++) {
            printf("%d ", vetorSequencia[i]);
        }

        printf("\n");

        free(vetorSequencia);  
    }

    return 0;
}
