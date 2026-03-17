#include <stdio.h>

// insercao usa recursao
#define ORDEM 4
// alocar o no, inserir na arvore, buscar e deletar a arvore inteira 
// importar no pontoH que so tem o cabeçalho das funcoes 
// buscar é procurar pelo no/chave na arvore, parametro arvore e no 
// malloc é priomeiro desalocar a folha e dps o pai, o free é de baixo pra cima 
// esse arqvuivo é onde vou colocar o struct e tem um .h que seja um header
// o header é como uma interface

typedef struct Arv {
    unsigned int qtdChaves; // quantidade de chaves 
    int chave [ORDEM - 1];
    struct Arv* filho[ORDEM];  // sempre um a mais do que a chave do de cima
    int posOrigem[ORDEM];  // posicao da chaves do arquivo final 
    unsigned int posicao;
    int folha;
}Arv;

struct criarArv(int folha){
   if (Arv == NULL){
       printf("Digite um valor real");
   } 
   
   struct Arv *novoNo = (strut novoNo *)malloc(sizeof(struct novoNo));

}

int main()
{
    printf("Hello World");

    return 0;
}
