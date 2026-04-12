#include <stdio.h>
#include <stdlib.h>

//Limpa o buffer do teclado
void limpa_buffer(){ 
    int ch;
    while( (ch = fgetc(stdin)) != EOF && ch != '\n' ){} 
}

int main() {
    printf("**********************\n");
    printf("*** MEDIEVAL CREEP ***\n");
    printf("**********************\n\n");
    printf("   - START GAME - \n");
    getchar(); // Espera o usuário pressionar Enter para iniciar o jogo

    printf("--------------------------------------------\n\n\n");

    printf("|CHARACTER SELECTION|\n");
    printf("1. Knight\n");
    printf("2. Archer\n");
    printf("3. Mage\n");
    int character_choice;
    scanf("%d", &character_choice);
    limpa_buffer(); // Limpa o buffer após a leitura do número

    switch (character_choice)
    {
    case 1:
        printf("You have chosen the Knight!\n\n");
        printf("---------------------------\n\n");
        break;
    case 2:
        printf("You have chosen the Archer!\n\n");
        printf("---------------------------\n\n");
        break;
    case 3:
        printf("You have chosen the Mage!\n\n");
        printf("-------------------------\n\n");
        break;
    default:
        printf("Invalid choice. Please restart the game and select a valid character.\n\n");
        printf("---------------------------------------------------------------------\n\n");
        break;
    }

    return 0;
}