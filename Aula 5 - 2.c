#include <stdio.h>

void quickSort(int vetor[], int inicio, int fim) {
    if (inicio < fim) {
        int pivo = vetor[fim];
        int i = inicio - 1;
        for (int j = inicio; j < fim; j++) {
            if (vetor[j] < pivo) {
                i++;
                int temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            }
        }
        int temp = vetor[i + 1];
        vetor[i + 1] = vetor[fim];
        vetor[fim] = temp;

        int indicePivo = i + 1;
        quickSort(vetor, inicio, indicePivo - 1);
        quickSort(vetor, indicePivo + 1, fim);
    }
}

int main() {
    int vetor[6] = {42, 17, 5, 23, 9, 31};

    printf("Antes do Quick Sort:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d ", vetor[i]);
    }

    quickSort(vetor, 0, 5);

    printf("\nDepois do Quick Sort:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\n");
    return 0;
}
