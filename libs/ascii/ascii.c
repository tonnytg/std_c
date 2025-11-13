#include <stdio.h>
#include <unistd.h>
// descobre a tablea ASCII
//int main(void) {
//    char c;
//    int  i;
//
//    i = 32;
//    printf("Char:\tDEC\t  INT\n");
//    while ( i < 127 )
//    {
//        c = i;
//        printf("Char:\t%c\t  %d\n", c, i);
//        i++;
//    }
//}

// Imprime o caracter daquela posição da ASCII
// 48 -> 0
// 57 -> 9
int putchar(int c)
{
    write(1, &c, 1);
}

void itoc(int i)
{
    // '0' means 48
    // '0' means 48
    // 48 -> 57 0 a 9
    // 48 48 -> 0 0
    //                                         ( 0 a 9 ) -> Mais rápido
    //    char a[] = { 48 + ( i / 10) % 10, 48 + i % 10 };
    //                          \-> atua como freio, pega somente a primeira casa.
    //

    char a[] = { 48 + ( i / 10) % 10, 48 + i % 10 };
    putchar(a[0]);
    putchar(a[1]);

//    printf("%d\t", a[0]);
//    printf("%d\n", a[1]);
}

int main ()
{
    int i;
    i = 0;
    while ( i <= 25) {
        itoc(i);
        write(1, "\n", 1);
        i++;
    }
}