#include <stdio.h>

int main()
{
	int a = 10;
	int *p = &a;

	printf("%p - %d\n",&a, a);
	printf("%p - %d\n",p, *p);

	return (0);
}
