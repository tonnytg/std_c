#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_create_malloc(char *str)
{
	char *buffer;

	buffer = malloc(sizeof(str) + 1);
	buffer = memcpy(buffer, str, sizeof(str) + 1);
	return (buffer);
}

int main(int argc, char *argv[ ])
{
	char *str;

	printf("Start example of function return malloc\n");
	str = ft_create_malloc("Hello");
	printf("%s\n", str);
	free(str);
	return (0);
}
