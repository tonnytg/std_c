#include <stdio.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

int main(void)
{
    char name[] = "Antonio";
    int length;

    length = ft_strlen(name);
    printf("Name: %s - %d letters.\n", name, length);
}