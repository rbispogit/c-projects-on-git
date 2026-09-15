#include <stdio.h>
#include <string.h>

int main()
{
    printf("Hello World!\n\n");

    int numero = 10;
    int *p, **ptrp;
    char nome[] = "Bob";
    char *ptrN;

    p = &numero;
    ptrp = &p;

    // Exibindo os endereços de variaveis.
    printf("Endereço da váriavel 'numero': %x\n", &numero);
    printf("Endereço da variável 'nome': %x\n", &nome);
    printf("Endereço da variável(ponteiro) '*p': %x\n", &p);
    printf("Endereço da variável(ponteiro) '**ptrp': %x\n", &ptrp);
    printf("Endereço da variável(ponteiro) *ptrN: %x\n", &ptrN);

    // Exibindo os conteudos das variaveis.
    printf("\nConteúdo da variável 'numero': %d\n", numero);
    printf("Conteúdo da variável '*p': %x\n", p);
    printf("Conteúdo da variável '**ptrp': %x\n", ptrp);
    printf("Conteúdo da variável '*ptrN': %x\n", ptrN);
    printf("Conteúdo da variável 'nome': %s\n", nome);

    // Alterando valor das variáveis através do segundo ponteiro.
    **ptrp = **ptrp + 20;

    // Exibindo novo valor da variável 'numero'.
    printf("\nNovo valor da variável 'numero': %d\n", numero);
    printf("Novo valor da variável 'nome': %s\n", nome);
    return 0;
}