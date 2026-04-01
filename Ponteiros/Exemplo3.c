// Correção dos erros do Exemplo2.c

#include <stdio.h>
#include <stdlib.h> // Necessário para usar malloc e free

int main()
{
    int *a, b;

    b = 10;
    a = (int*) malloc(sizeof(int));

    *a = 20;
    free (a); // CORREÇÃO - agora liberei a memoria dinâmica antes da variavel 'a' receber algum valor

    a = &b;

    return 0;
}