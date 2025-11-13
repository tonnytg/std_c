#include <unistd.h>

int rotone_main(int argc, char **argv)
{

    // minuscula
    char valor0[] = "abcdefghijklmnopqrstuvwxyz";

    // maiuscula
    char valor1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    int i;
    int j;
    int k;

    i = 0;
    k = 0;
    // percorre todas as letras enviadas
    while ( *argv[i] != '\0') // a
    {
        if ( *argv[i] == ' ')
        {
            write(1," ", 1);
        }
        else if ( *argv[i] == '.' )
        {
            write(1,".", 1);
        }
        else
        {
            //         printf("Valor a ser procurado: %c\n", argv[i]);
            j = 0;
            while ( valor0[j] != '\0' )
            {
                if ( *argv[i] == valor0[j] )
                {
                    write(1, &valor0[j+1], 1);
                }
                j++;
            }
            j = 0;
            while ( valor1[j] != '\0' )
            {
                if ( *argv[i] == valor1[j] )
                {
                    write(1, &valor1[j+1], 1);
                }
                j++;
            }
        }
        i++;
    }
}


//************************************************************************/
//* Escreva abaixo seu main com seus testes
//************************************************************************/
int rotone_main(int argc, char **argv);

int main()
{
    char *arg0[] = {"abc"};
    rotone_main(1, arg0);

    char *arg1[] = {"Les stagiaires du staff ne sentent pas toujours tres bon."};
    rotone_main(1, arg1);

    char *arg2[] = {"AkjhZ zLKIJz , 23y "};
    rotone_main(1, arg2);

    char *arg3[] = {"a", "b"};
    rotone_main(2, arg3);

    return (0);
}




ROTONE
        Prototipo esperado: int rotone_main(int argc, char **argv)
Função autorizada : write
        Escreva uma função que tenha como parâmetro uma cadeia de caracteres e que mostre essa cadeia substituindo cada caractere alfabético pelo caractere seguinte na ordem alfabética.

'z' vira 'a' e 'Z' vira 'A'. As maiúsculas são mantidas em maiúsculo, e as minúsculas são mantidas em minúsculo.

A exibição sempre termina com uma quebra de linha.

Se o número de parâmetros transmitidos for diferente de 1, o programa exibe '\n'.

A função irá receber como primeiro parâmetro (argc) a quantidade de elementos a serem enviados no segundo parâmetro (argv).

Exemplos:

int    main(void)
{
    char *arg0[] = {"abc"};
    rotone_main(1, arg0);
    char *arg1[] = {"Les stagiaires du staff ne sentent pas toujours tres bon."};
    rotone_main(1, arg1);
    char *arg2[] = {"AkjhZ zLKIJz , 23y "};
    rotone_main(1, arg2);
    char *arg3[] = {"a", "b"};
    rotone_main(2, arg3);
    return (0);
}
$>./a.out | cat -e
        bcd$
Mft tubhjbjsft ev tubgg of tfoufou qbt upvkpvst usft cpo.$
        BlkiA aMLJKa , 23z $
        $
$>




