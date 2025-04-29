#include <stdio.h>

void selectionSort(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        int menor = i;
        for (int j = i + 1; j < tamanho; j++) {
            if (vetor[j] < vetor[menor]) {
                menor = j;
            }
        }
        if (menor != i) {
            int temp = vetor[i];
            vetor[i] = vetor[menor];
            vetor[menor] = temp;
        }
    }
}

int main() {
    int vetor[6] = {15, 42, 8, 23, 4, 19};

    printf("Vetor antes da ordenação:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d ", vetor[i]);
    }

    selectionSort(vetor, 6);

    printf("\nVetor depois da ordenação:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\n");

    return 0;
}
