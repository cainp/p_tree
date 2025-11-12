#ifndef P_TREE_ORDENACAO_H
#define P_TREE_ORDENACAO_H
int ja_existe(int vetor[], int tamanho, int valor_novo);
int seleciona_algoritmo(int ultimo_digito, char **algoritmo, char **percurso);
void gerar_e_copiar_vetor(int vetor_original[], int vetor_copia[]);

void bubble_sort(int vetor[], int tamanho, long int *comparacoes);
void selection_sort(int vetor[], int tamanho, long int *comparacoes);
void insertion_sort(int vetor[], int tamanho, long int *comparacoes);
#endif //P_TREE_ORDENACAO_H