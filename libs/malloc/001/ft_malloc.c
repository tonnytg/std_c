#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

char *ft_strcpy(char *dest, char *src)
{
    int i;

    i = 0;
    while (src[i] !=  '\0')
    {
        dest[i] = src[i];
        i++;
    }
    return (dest);
}

char *ft_malloc(char *str)
{
    int length;
    char *tmp;

    length = ft_strlen(str);
    tmp = (char *)malloc(length + 1);
    ft_strcpy(tmp, str);
    return (tmp);
}

int main()
{
    char name[15] = "Antonio";
    char *copy;

    copy = ft_malloc(name);
    printf("before free: %s\n", copy);
    free(copy);
    printf("after free: %s\n", copy);
}
