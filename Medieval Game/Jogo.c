#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Limpa o buffer do teclado
void limpa_buffer()
{
    int ch;
    while ((ch = fgetc(stdin)) != EOF && ch != '\n')
    {
    }
}

int main()
{
    printf("**********************\n");
    printf("*** MEDIEVAL CREEP ***\n");
    printf("**********************\n\n");
    printf("   - START GAME - \n");
    getchar(); // Espera o usuário pressionar Enter para iniciar o jogo

    printf("--------------------------------------------\n\n\n");

    printf("- CHARACTER SELECTION -\n");
    printf("1. Knight\n");
    printf("2. Archer\n");
    printf("3. Mage\n");

    int lock = 1;
    while (lock)
    {
        int character_choice;
        printf("Choose your character (1-3): ");
        scanf("%d", &character_choice);
        limpa_buffer(); // Limpa o buffer após a leitura do número
        switch (character_choice)
        {
        case 1:
            printf("You have chosen the Knight!\n\n");
            printf("---------------------------\n\n");
            lock = 0;
            break;
        case 2:
            printf("You have chosen the Archer!\n\n");
            printf("---------------------------\n\n");
            lock = 0;
            break;
        case 3:
            printf("You have chosen the Mage!\n\n");
            printf("-------------------------\n\n");
            lock = 0;
            break;
        default:
            printf("Invalid choice. Please restart the game and select a valid character.\n\n");
            printf("---------------------------------------------------------------------\n\n");
            break;
        }
    }

    printf("Character name: ");
    char character_name[50];
    fgets(character_name, sizeof(character_name), stdin);
    
    // Remove a quebra de linha adicionada por fgets
    character_name[strcspn(character_name, "\n")] = '\0';
    
    printf("Welcome, %s! Your adventure begins now...\n", character_name);
    printf("Good luck on your journey!\n");
    printf("--------------------------------------------------\n\n");

    return 0;
}