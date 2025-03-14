#include <stdio.h>

int main () {

// Iniciando a codificação dos movimentos das peças de xadrez
// Iniciei com um menu simples para o programa ficar mais robusto

    printf("*** GAME DE XADREZ ***\n\n");

    int torre, bispo, rainha;
    char direcao[50], escolha;

// Menu para o usuario escolher qual peça utilizar

    printf("Escolha uma peça:\n");
    printf("T. torre\n");
    printf("B. bispo\n");
    printf("R. rainha\n");
    scanf("%c", &escolha);

// Indiquei letras para ser lidas no menu

    switch (escolha)
    {
    case 'T':
    case 't':

// Usuario poderá escolher o caminho da peça

    printf("Escolha a direção da torre:\n");
    scanf("%s", &direcao);

// loop for para movimentar a torre

            for (torre = 2; torre <= 5; torre++)
    {
            printf("%s\n", direcao);
    }
    
// movimento da torre será de 5 casas

        break;

    case 'B':
    case 'b':

// Escolher o movimento do bispo poderá ser uma frase

    bispo = 2;
    printf("Escolha a direção do bispo\n");
    while(getchar() != '\n');
    fgets(direcao, sizeof(direcao), stdin);

// loop while para movimentar o bispo

        while (bispo <= 5)
        {
            printf("%s", direcao);
                bispo++;
        }

// movimento do bispo será de 5 casas

        break;
         
    case 'R':
    case 'r':

// o movimento da rainha tambem será uma frase

        rainha = 2;
        printf("Escolha a direção da rainha \n");
        while(getchar() != '\n');
        fgets(direcao, sizeof(direcao), stdin);

// loop do-while para movimentar a rainha

        do{
            printf("%s", direcao);
            rainha++;

        } while (rainha <= 8);

// movimento da rainha será de 8 casas

        break;
    }
   
    return 0;
}