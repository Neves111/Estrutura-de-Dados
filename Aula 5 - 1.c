#include <stdio.h>

void merge(int vetor[], int inicio, int meio, int fim) {
    int i, j, k;
    int n1 = meio - inicio + 1;
    int n2 = fim - meio;

    int esquerda[n1], direita[n2];

    for (i = 0; i < n1; i++)
        esquerda[i] = vetor[inicio + i];
    for (j = 0; j < n2; j++)
        direita[j] = vetor[meio + 1 + j];

    i = 0;
    j = 0;
    k = inicio;

    while (i < n1 && j < n2) {
        if (esquerda[i] <= direita[j]) {
            vetor[k] = esquerda[i];
            i++;
        } else {
            vetor[k] = direita[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        vetor[k] = esquerda[i];
        i++;
        k++;
    }

    while (j < n2) {
        vetor[k] = direita[j];
        j++;
        k++;
    }
}

void mergeSort(int vetor[], int inicio, int fim) {
    if (inicio < fim) {
        int meio = inicio + (fim - inicio) / 2;

        mergeSort(vetor, inicio, meio);
        mergeSort(vetor, meio + 1, fim);
        merge(vetor, inicio, meio, fim);
    }
}

int main() {
    int vetor[6] = {34, 7, 19, 2, 46, 13};

    printf("Vetor antes da ordenação:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d ", vetor[i]);
    }

    mergeSort(vetor, 0, 5);

    printf("\nVetor depois da ordenação:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\n");

    return 0;
}
