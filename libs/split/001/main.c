#include <stdio.h>

void ft_split(char delimiter, char *str)
{
	int i;

	printf("received:%s\n", str);
	i = 0;
	while (str)
	{
		if (*str == delimiter)
		{
			str++;
			break;
		}
		str++;
	}
	printf("splited:%s\n", str);
}

int main(int argc, char *argv[])
{
	printf("Delimiter: %s\n", argv[1]);
	printf("Content:%s\n", argv[2]);
	ft_split(argv[1][0], argv[2]);
	return 0;
}
