#include <stdio.h>

// Codifição para movimento das peças
// função para movimentar torre

void movimentoTorre (char *direcao[50], int torre) {

    if (torre < 5)
    {
        printf("%s\n", direcao);
        movimentoTorre (direcao, torre + 1);
    }    
}

// função para movimentar o bispo

void movimentoBispo (char *direcao[50], char *direcao2[50], int bispo) {

    while (bispo < 5)
    {
        if (bispo < 5)
        {
            printf("%s ", direcao);
        }
        
        printf("%s\n", direcao2);
        bispo++;
    }    
}

// função para movimentar a rainha

void movimentoRainha (char *direcao[50], char *direcao2[50], int rainha) {

    while (rainha < 8)
    {
        if (rainha < 8)
        {
            printf("%s ", direcao);
        }
        
        printf("%s\n", direcao2);
        rainha++;    
    }
}

// função para movimentar o cavalo

void movimentoCavalo (char *direcao[50], char *direcao2[50], int cavalo) {

    for (cavalo = 0; cavalo <= 2; cavalo++)
    {
        if (cavalo == 2) {
            
            printf("%s\n", direcao2);
            break;
        } 
        printf("%s\n", direcao);
    }  
}

int main () {

// Iniciei com um menu simples para o programa ficar mais robusto

    printf("*** GAME DE XADREZ ***\n\n");

    int torre, bispo, rainha, cavalo;
    char direcao[50], direcao2[50], escolha;

// Menu para o usuario escolher qual peça utilizar

    printf("Escolha uma peça:\n");
    printf("T. torre\n");
    printf("B. bispo\n");
    printf("R. rainha\n");
    printf("C. cavalo\n");
    scanf("%c", &escolha);

// Indiquei letras para ser lidas no menu

    switch (escolha)
    {
    case 'T':
    case 't':

// Usuario poderá escolher o caminho da peça

    printf("Escolha a direção da torre:\n");
    scanf("%s", direcao);
    printf("Torre movimenta 5 casas para:\n");

    torre = 0;
    movimentoTorre (&direcao, torre);

// o movimento da torre será de 5 casas para direção que o usuario escolher

        break;

    case 'B':
    case 'b':

// Escolher o movimento do bispo em duas etapas

    printf("Escolha a direção do bispo\n");
    printf("Caminho vertical será:\n");
    scanf("%s", direcao);
    printf("Caminho horizontal será:\n");
    scanf("%s", direcao2);
    printf("Bispo movimenta 5 casas para:\n");

    bispo = 0;
    movimentoBispo (&direcao, &direcao2, bispo);

// movimento do bispo será de 5 casas para direção que o usuario escolher

        break;
         
    case 'R':
    case 'r':

// o movimento da rainha também será de duas etapas

    printf("Escolha a direção da rainha \n");
    printf("Caminho vertical será:\n");
    scanf("%s", direcao);
    printf("Caminho horizontal será:\n");
    scanf("%s", direcao2);
    printf("Rainha movimenta 8 casas para:\n");

    rainha = 0;
    movimentoRainha (&direcao, &direcao2, rainha);

// movimento da rainha será de 8 casas para a direção que o usuario escolher

        break;

    case 'C':
    case 'c':

// o movimento do cavalo será de duas etapas

        printf("Escolha a direção do cavalo\n");
        printf("Caminho vertical será:\n");
        scanf("%s", direcao);
        printf("Caminho horizontal será:\n");
        scanf("%s", direcao2);
        printf("Cavalo movimenta para:\n");
        
        movimentoCavalo (&direcao, &direcao2, cavalo);
        
// o cavalo move 2 casas para a vertical e 1 para horizontal, para onde o usuario escolher

        break;

        default:
            printf("Escolha invalidade...");
    }

    return 0;
}