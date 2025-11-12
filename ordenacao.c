#include "ordenacao.h"
#include <stdio.h>
#include <stdlib.h>
#include "config.h"


// verifica se tem numero repetido
int ja_existe(int vetor[], int tamanho, int valor_novo) {
    for (int k = 0; k < tamanho; k++) {
        if (vetor[k] == valor_novo) {
            return 1; // Número repetido
        }
    }
    return 0; // Número inédito
}
// geração de vetores
void gerar_e_copiar_vetor(int vetor_original[], int vetor_copia[]) {
    int i = 0;
    int num_sorteado;

    while (i < TAMVT) {
        num_sorteado = (rand() % VMAX) + 1;

        if (ja_existe(vetor_original, i, num_sorteado) == 0) {
            vetor_copia[i] = num_sorteado;
            vetor_original[i] = num_sorteado;
            i++;
        }

    }
}

int seleciona_algoritmo(int ultimo_digito, char **algoritmo, char **percurso) {

    int resultado_mod_3 = ultimo_digito % 3;

    switch (resultado_mod_3) {
        case 0:
            *algoritmo = "booble sort";
            *percurso = "pre-ordem";
            break;
        case 1:
            *algoritmo = "selection sort";
            *percurso = "em ordem";
            break;
        case 2:
            *algoritmo = "insertion sort";
            *percurso = "pos-ordem";
            break;
    }
    return resultado_mod_3;
}

void insertion_sort(int vetor[], int tamanho, long int *comparacoes) {
    *comparacoes = 0; // inicia contador

    for (int i = 1; i < tamanho; i++) {
        int chave = vetor[i];
        int j = i - 1;

        while (j >= 0) {
            (*comparacoes)++;

            if (vetor[j] > chave) {

                vetor[j + 1] = vetor[j];
                j = j- 1;
            } else {
                break;
            }
        }
        vetor[j + 1] = chave;
    }


}

void booble_sort(int vetor[], int tamanho, long int *comparacoes) {
    *comparacoes = 0;
    int i, j, temp;
    int trocou;

    for (i = 0; i < tamanho - 1; i++) {
        trocou = 0;
        for (j = 0; j < tamanho - i - 1; j++) {
            (*comparacoes)++;
            if (vetor[j] > vetor[j + 1]) {
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
                trocou = 1;
            }
        }
        if (trocou == 0) {
            break;
        }
    }
}