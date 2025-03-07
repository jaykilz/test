#include <stdio.h>
#include <string.h>
struct infoStudents{
	char name[1000], university[1000];
	int age;
};
	
void create(struct infoStudents user);

int main(void) {
	
	struct infoStudents user;
	
	printf("Enter name:");
	scanf("%s", user.name);
	printf("\nEnter age:");
	scanf("%d", &user.age);
	printf("\nEnter name of university:");
	scanf("%s", user.university);
	
	create(user);
	
	return 0;
}

void create(struct infoStudents user) {
	
	FILE *fptr;
	fptr = fopen("students.txt", "a");
	
	fprintf(fptr, "%s, %d, %s\n", user.name, user.age, user.university);
	
	fclose(fptr);
	
	printf("\nCreate successfully");
}



