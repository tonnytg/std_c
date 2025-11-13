#include <stdio.h>

// Declare struct Person with Name and Age
struct Person {
		char *Name;
		int Age;
};

void SetName(struct Person *p) {
	printf("Enter name: ");
	scanf("%s", p->Name);
}

void ReadName(struct Person *p) {
	printf("Name:%s\n", p->Name);
}

void ReadAge(struct Person *p) {
	printf("Age:%d\n", p->Age);
}

int main(int argc, char *argv[])
{
	// set name for person
	struct Person	p1;
	p1.Name = "John";
	p1.Age = 30;
	// print age and name of person with function ReadName
	ReadName(&p1);
	ReadAge(&p1);

	return (0);
}
