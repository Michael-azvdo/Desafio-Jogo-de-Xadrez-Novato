#include <stdio.h>

int main() {

    printf("Jogo de xadrez para Principiantes!\n");
    printf("Neste jogo, você pode escolher entre mover a Torre, o Bispo ou a Rainha.\n");
    printf("Cada peça pode se mover um número específico de casas.\n");
    printf("Vamos lá!\n");

    int option;//Declaração da variável option

    do {
        printf("\n");
        printf("Menu:\n");
        printf("1. Mova a Torre 5 casas\n");
        printf("2. Mova o Bispo 5 casas\n");
        printf("3. Mova a Rainha 8 casas\n");
        printf("4. Sair\n");
        printf("\n");
        printf("Escolha uma opção: \n");
        scanf("%d", &option);
        printf("\n");

        switch (option) {
            case 1:
                printf("Você escolheu a Torre\n");
                int i = 0; // Inicializa o contador
                while (i < 5) { // Loop while para imprimir "Direita" 5 vezes
                printf("Direita\n");
                i++; // Incrementa o contador
                }
                break;

            case 2:
                printf("Você escolheu o Bispo\n");
                for (int i = 0; i < 5; i++) {
                    printf("Diagonal Cima Direita\n");//Imprime a mensagem "Diagonal Cima Direita" 5 vezes
                }
                break;

            case 3:
                printf("Você escolheu a Rainha\n");
                int j = 0; // Inicializa o contador//usado j para não repetir a variável i
                do {
                printf("Esquerda\n"); // Imprime "Esquerda" 8 vezes
                j++;// Incrementa o contador
                } while (j < 8); // Condição para repetir o loop
                break;

            case 4:
                printf("Saindo do programa...\n");
                break;

            default:
                printf("Opção inválida! Tente novamente.\n");
        }

    } while (option != 4);

    return 0;
}