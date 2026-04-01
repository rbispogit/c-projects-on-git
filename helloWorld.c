#include <stdio.h>

int main()
{
    printf("Hello World!\n\n");

    int numero = 10;
    int* p = &numero;

    printf("Valor da variável 'numero': %d\n", numero);
    printf("Endereço da variável 'numero': %p\n", &numero);
    printf("Valor apontado pelo ponteiro 'p': %d\n", *p);
    printf("Conteúdo do Ponteiro: %p\n\n", p);
    
    *p = 20;

    printf("Novo valor de 'numero', usando o ponteiro: %d\n\n", numero);

    numero = 30;

    printf("Novo valor de numero: %d\n", numero);
    printf("Conteúdo apontado pelo ponteiro: %d\n\n", *p);

    return 0;
}