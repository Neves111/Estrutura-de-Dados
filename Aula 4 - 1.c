#include <stdio.h>

void bubbleSort(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                int temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}

int main() {
    int vetor[6] = {23, 5, 12, 8, 31, 17};

    printf("Vetor antes da ordenação:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d ", vetor[i]);
    }

    bubbleSort(vetor, 6);

    printf("\nVetor depois da ordenação:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\n");

    return 0;
}
