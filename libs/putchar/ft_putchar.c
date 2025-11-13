#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(void)
{
    int i;
    char name[] = "Antonio\n";

    i = 0;
    while (name[i] != '\0')
    {
        ft_putchar(name[i]);
        i++;
    }
}
