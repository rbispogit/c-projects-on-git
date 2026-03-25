// Definindo a estrutura e criação do nó
// Começamos com a definição do nó. Ele conterá uma string (com até 49 caracteres + \0) 
// dois ponteiros: um para o filho à esquerda e outro para o que está à direita.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
struct No {
    char valor[50];
    struct No* esquerda;
    struct No* direita;
};

// Neste exemplo, vamos definir, de modo manual, nossa árvore. Então, não faremos a função inserir.
// Desse modo, basta criamos uma função para alocar um novo nó na memória:

struct No* criarNo(char* valor) {
    struct No* novo = (struct No*) malloc(sizeof(struct No));
    strcpy(novo->valor, valor);
    novo->esquerda = NULL;
    novo->direita = NULL;
    return novo;
}

// Definindo percursos
// Depois que a árvore for construída, podemos percorrê-la. 
// Aqui estão todos os percursos para ficar mais clara a visualização do resultado de cada um deles:

void preOrdem(struct No* raiz) {
    if (raiz != NULL) {
        printf("%s ", raiz->valor);
        preOrdem(raiz->esquerda);
        preOrdem(raiz->direita);
    }
}

void emOrdem(struct No* raiz) {
    if (raiz != NULL) {
        emOrdem(raiz->esquerda);
        printf("%s ", raiz->valor);
        emOrdem(raiz->direita);
    }
}

void posOrdem(struct No* raiz) {
    if (raiz != NULL) {
        posOrdem(raiz->esquerda);
        posOrdem(raiz->direita);
        printf("%s ", raiz->valor);
    }
}

// Liberação e utilização no main
// É preciso liberar a memória ocupada pela árvore após o uso, evitando vazamentos:

void liberar(struct No* raiz) {
    if (raiz != NULL) {
        liberar(raiz->esquerda);
        liberar(raiz->direita);
        free(raiz);
    }
}

// Por fim, tudo isso se une em um programa completo. No main, vamos criar a árvore e inserir algumas strings:

int main() {
    struct No* raiz = criarNo("Hall de Entrada");
    raiz->esquerda = criarNo("Sala de Estar");
    raiz->direita = criarNo("Biblioteca");
    raiz->esquerda->esquerda = criarNo("Quarto");
 
    printf("Pré-ordem: ");
    preOrdem(raiz);
    printf("\n");
 
    printf("Em ordem: ");
    emOrdem(raiz);
    printf("\n");
 
    printf("Pós-ordem: ");
    posOrdem(raiz);
    printf("\n");
 
    liberar(raiz);
    return 0;
}