#include <stdio.h>

char *ft_strstr(char *str, char *to_find)
{
    int i, j;

    i = 0;
    j = 0;
    while (str[i] != '\0')
    {
        while (str[i] == to_find[j])
        {
            i++;
            j++;
            if (to_find[j] == '\0')
                return (&str[i - j]);
            if (str[i] != to_find[j])
                j = 0;
        }
        i++;
    }
    return (0);
}

int main(void)
{
    char name[] = "Antonio Thomacelli Gomes";

    printf("%s\n", ft_strstr(name, "T"));
}