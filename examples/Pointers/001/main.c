#include <stdio.h>

void myFunc(int *a, int b)
{
    *a = 6;
    printf("\n");
    printf("Value of position inside function: %p\n", a);
    printf("Value of position of function: %d\n", (*a));


    b = 2;
    printf("\n");
    printf("Value of position b inside function: %p\n", &b);
    printf("Value b inside function: %d\n", b);
}

int main(void)
{
    int a;
    int b;
    a = 3;
    b = 9;

    printf("Value a: %d\n", a);
    printf("Value b: %d\n", b);

    printf("Position memory a: %p\n", &a);
    printf("Position memory b: %p\n", &b);
    myFunc(&a, b);

    printf("\n");
    printf("New Value a: %d\n", a);
    printf("New Value b: %d\n", b);

    char c;
    c = 'v';

    char *d;
    d = &c;

    return 0;
}
