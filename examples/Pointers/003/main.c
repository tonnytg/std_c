
#include <stdio.h>

void ageReview(int *age)
{
	printf("Inside Function:\n");
	printf("Age: %d -\t Pointer: %p\n", *age, age);
}

int main(int argc, char *argv[])
{
	int age;


	age = 30;
	printf("Age: %d -\t Pointer: %p\n", age, &age);
	ageReview(&age);
	return 0;
}
