#include <stdio.h>

int main()
{
    printf("Hello World!\n");

    int numero = 10;
    int* p = &numero;

    printf("Valor da variável 'numero': %d\n", numero);
    printf("Endereço da variável 'numero': %p\n", &numero);
    printf("Valor apontado pelo ponteiro 'p': %d\n", *p);
    printf("Conteúdo do Ponteiro: %p\n", p);
    
    *p = 20;

    printf("Novo valor de 'numero', usando o ponteiro: %d\n", numero);
}