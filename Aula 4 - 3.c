#include <stdio.h>

void insertionSort(int vetor[], int tamanho) {
    for (int i = 1; i < tamanho; i++) {
        int chave = vetor[i];
        int j = i - 1;

        while (j >= 0 && vetor[j] > chave) {
            vetor[j + 1] = vetor[j];
            j--;
        }
        vetor[j + 1] = chave;
    }
}

int main() {
    int vetor[6] = {27, 3, 18, 45, 12, 9};

    printf("Vetor antes da ordenação:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d ", vetor[i]);
    }

    insertionSort(vetor, 6);

    printf("\nVetor depois da ordenação:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\n");

    return 0;
}
