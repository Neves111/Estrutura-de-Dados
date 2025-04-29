#include <stdio.h>

// Função que garante a propriedade do heap a partir do índice i
void heapify(int vetor[], int tamanho, int i) {
    int maior = i; // Inicialmente assume que o maior é o próprio pai
    int esquerda = 2 * i + 1; // Índice do filho esquerdo
    int direita = 2 * i + 2;  // Índice do filho direito

    // Verifica se o filho esquerdo é maior que o pai
    if (esquerda < tamanho && vetor[esquerda] > vetor[maior])
        maior = esquerda;

    // Verifica se o filho direito é maior que o maior atual
    if (direita < tamanho && vetor[direita] > vetor[maior])
        maior = direita;

    // Se o maior não for o pai, troca e aplica heapify recursivamente
    if (maior != i) {
        int temp = vetor[i];
        vetor[i] = vetor[maior];
        vetor[maior] = temp;

        // Chama recursivamente para garantir que o subárvore seja um heap
        heapify(vetor, tamanho, maior);
    }
}

// Função principal do Heap Sort
void heapSort(int vetor[], int tamanho) {
    // Constrói o heap (reorganiza o vetor)
    for (int i = tamanho / 2 - 1; i >= 0; i--)
        heapify(vetor, tamanho, i);

    // Extrai os elementos do heap um por um
    for (int i = tamanho - 1; i > 0; i--) {
        // Move a raiz (maior valor) para o final do vetor
        int temp = vetor[0];
        vetor[0] = vetor[i];
        vetor[i] = temp;

        // Chama heapify na parte restante do vetor
        heapify(vetor, i, 0);
    }
}

int main() {
    int vetor[6] = {42, 15, 27, 8, 33, 6}; // Vetor com 6 números aleatórios e diferentes

    // Exibe o vetor antes da ordenação
    printf("Antes do Heap Sort:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d ", vetor[i]);
    }

    heapSort(vetor, 6); // Chama a função heapSort

    // Exibe o vetor após a ordenação
    printf("\nDepois do Heap Sort:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\n");
    return 0;
}
