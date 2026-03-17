#include <stdio.h>

#define ORDEM 4

typedef struct _Arv {
    int qtdChaves; // quantidade de chaves 
    int chave [ORDEM - 1];
    struct Arv* filho[ORDEM];  // sempre um a mais do que a chave do de cima
    int posOrigem[ORDEM];  // posicao da chaves do arquivo final 
    unsigned int folha;
}Arv;
