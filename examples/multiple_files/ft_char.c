#include <unistd.h>

void ft_char(char c)
{
    write(1, &c, 1);
}