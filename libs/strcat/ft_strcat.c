#include <stdio.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

char *ft_strcat(char *dest, char *src)
{
    int i, j;

    j = ft_strlen(dest);
    i = 0;
    while (src[i] != '\0')
        dest[j++] = src[i++];
    dest[j] = '\0';
    return (dest);
}

int main(void)
{
    char name[14] = "Antonio";
    char copy[14] = "gomes";

    printf("%s\n", ft_strcat(copy, name));
}
