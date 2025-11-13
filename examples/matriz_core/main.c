#include <stdio.h>

int main()
{
    // o---o
    // |   |
    // o---o

    int C; int I; // Declara as variaveis
    int L; int J;

    C = 5; // Total de Coluna
    L = 3; // Total de linhas
    I = 1; // Indice Linha inicia em 1 ( I == 1 )

    // while percorre linha por linha
    while ( I <= L )
    {
        J = 1;
        // while percorre coluna por coluna
        while ( J <= C)
        {
            // Valida os extremos em cada canto
            if ( ( I == 1 && J == 1 ) || ( I == 1 && J == C ) || // Valida toda a primeira linha
                 ( I == L && J == 1 ) || ( I == L && J == C )  ) // Valida toda a ultima linha
            {
                printf("o");
            } else if ( ( I != 1 || I != L ) && ( J == 1 || J == C ) ) // valida as colunas do meio das linhas da esquerda e da direita
            {
                printf("|");
            } else if ( I == 1 || I == L ) // imprime - somente nas linhas 1 e L sendo L o extremo
            {
                printf("-");
            }
            else // Qualquer outra coisa imprime vazio
            {
                printf(" ");
            }
            J++; // J = J + 1
        }
        printf("\n"); // Quebra a linha no final da ultima coluna
        I++; // I = I + 1
    }
} 