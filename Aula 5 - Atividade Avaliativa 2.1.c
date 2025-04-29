#include <stdio.h>

// Função que implementa o Shell Sort
void shellSort(int vetor[], int tamanho) {
    // Começa com gap (intervalo) igual à metade do tamanho
    for (int gap = tamanho / 2; gap > 0; gap /= 2) {
        // Percorre o vetor a partir do índice 'gap'
        for (int i = gap; i < tamanho; i++) {
            int temp = vetor[i]; // Armazena o valor atual
            int j;

            // Move os elementos que estão fora de ordem considerando o gap
            for (j = i; j >= gap && vetor[j - gap] > temp; j -= gap) {
                vetor[j] = vetor[j - gap]; // Desloca o elemento maior
            }

            vetor[j] = temp; // Coloca o elemento no lugar certo
        }
    }
}

int main() {
    int vetor[6] = {35, 12, 7, 28, 19, 3}; // Vetor com 6 valores aleatórios e diferentes

    // Exibe o vetor antes da ordenação
    printf("Antes do Shell Sort:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d ", vetor[i]);
    }

    shellSort(vetor, 6); // Chama a função para ordenar

    // Exibe o vetor após a ordenação
    printf("\nDepois do Shell Sort:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\n");
    return 0;
}
