#include <stdio.h>
#include <string.h>

typedef struct {
        char nome[30];
        char cor[10];
        int tropas;
} Territorio;

int main() {
    Territorio territorios[5];

    for (int i = 0; i < 5; i++) {
        printf("\n--- Cadastro do Territorio %d---", i + 1);

        printf("\nDigite o nome do seu territorio: ");
        scanf(" %s", territorios[i].nome);    // %s -> %[^\n]

        printf("Digite cor do seu exercito: ");
        scanf(" %s", territorios[i].cor);

        printf("Digite o numero de tropas: ");
        scanf("%d", &territorios[i].tropas);

        
    }
    for (int i = 0; i < 5; i++) {
        printf("\n--- Cadastro do Territorio %d\n", i + 1);

        printf("\nTerritorio %d\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do exercito: %s\n", territorios[i].cor);
        printf("Numero de tropas: %d\n", territorios[i].tropas);
    }

    return 0;
}