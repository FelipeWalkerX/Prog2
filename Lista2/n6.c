#include <stdio.h>
#include <stdlib.h>
#define MAX_TAMANHO 300

int* lerArquivo(const char* nomeArquivo, int* T) {
    FILE* arquivo;

    arquivo = fopen(nomeArquivo, "r");
    if (arquivo == NULL) {
        printf("Arquivo inexistente.\n");
        exit(1);
    }

    fscanf(arquivo, "%d", T);

    int* vetor = (int*)malloc(*T * sizeof(int));
    if (vetor == NULL) {
        printf("\nMemória insuficiente.\n");
        fclose(arquivo);
        exit(1);
    }

    for (int i = 0; i < *T; i++) {
        fscanf(arquivo, "%d", &vetor[i]);
    }

    fclose(arquivo);
    return vetor;
}

int calcularSoma(int* vetor, int T) {
    if (T == 0)
        return 0;
    else
        return vetor[T - 1] + calcularSoma(vetor, T - 1);
}

void escreverResultado(const char* nomeArquivo, int soma) {
    FILE* arquivo;

    arquivo = fopen(nomeArquivo, "a");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        exit(1);
    }

    fprintf(arquivo, "\nA soma dos valores é %d", soma);
    fclose(arquivo);
}

int main() {
    int tamanhoVetor;
    const char* nomeArquivo = "dados.txt";

    int* vetor = lerArquivo(nomeArquivo, &tamanhoVetor);
    int soma = calcularSoma(vetor, tamanhoVetor);

    printf("Dados presentes no arquivo:\n");
    for (int i = 0; i < tamanhoVetor; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n\nSoma: %d\n", soma);

    escreverResultado(nomeArquivo, soma);
    free(vetor);

    return 0;
}
