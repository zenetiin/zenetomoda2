#include <stdio.h>
#include <stdlib.h>
#include "store.h"

int main() {
    int choice;
    while (1) {
        printf("\nBem-vindo ao sistema de loja!\n");
        printf("1. Registrar usuario\n");
        printf("2. Fazer login\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                registerUser();
                break;
            case 2:
                login();
                break;
            case 0:
                printf("Saindo do programa. Obrigado!\n");
                exit(0);
            default:
                printf("Opcao invalida. Tente novamente.\n");
                break;
        }
    }
    return 0;
}
