#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nb)
{
    // check negative number
    if (nb < 0)
    {
        // print negative simbol
        ft_putchar('-');
        // convert negative to positive
        nb = -nb;
    }
    if (nb > 9)
    {
        // print first digit
        ft_putnbr(nb / 10);
        // print last digit
        ft_putnbr(nb % 10);
    }
    else
    {
        ft_putchar(nb + 48);
    }
}

int main(void)
{
    ft_putnbr(11);
}