#include<stdio.h>
#include<string.h>

struct NAME
{
	char firstName[20];
	char lastName[20];
};

int main(void)
{
	struct NAME person[4] = {};
	strcpy_s(person[0].firstName, "Mary ");
	strcpy_s(person[0].lastName, "Smith");
	strcpy_s(person[1].firstName, "James ");
	strcpy_s(person[1].lastName, "Johnson");
	strcpy_s(person[2].firstName, "Patricia ");
	strcpy_s(person[2].lastName, "Williams");
	strcpy_s(person[3].firstName, "John ");
	strcpy_s(person[3].lastName, "Brown");

	printf("%s%s\n", person[0].firstName, person[0].lastName);
	printf("%s%s\n", person[1].firstName, person[1].lastName);
	printf("%s%s\n", person[2].firstName, person[2].lastName);
	printf("%s%s\n", person[3].firstName, person[3].lastName);


	return 0;
}