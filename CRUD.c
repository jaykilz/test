#include <stdio.h>
#include <string.h>

void create(char name[1000], int age, char university[1000]);

struct infoStudents{
	char name[1000], university[1000];
	int age;
};

int main(void) {
	
	struct infoStudents user;
	
	printf("Enter name:");
	scanf("%s", user.name);
	printf("\nEnter age:");
	scanf("%d", &user.age);
	printf("\nEnter name of university:");
	scanf("%s", user.university);
	
	create(user.name, user.age, user.university);
	
	return 0;
}

void create(char name[1000], int age, char university[1000]) {
	FILE *fptr;
	fptr = fopen("students.txt", "a");
	
	fprintf(fptr, "%s, %d, %s\n", name, age, university);
	
	fclose(fptr);
	
	printf("\nCreate successfully");
}



