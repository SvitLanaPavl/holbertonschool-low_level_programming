#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void generate_password(char password, int password_length)
{
int i;

char list[] = "1234567890qwertyuiopasdfghjklzxcvbnm!@#$%^&*()_+-=QWERTYUIOPASDFGHJKLZXCVBNM[]{};':\"<>,.?/\\|";

srand(time(NULL));

for (i = 0; i < password_length; i++)
{
	password[i] = list[rand() % (sizeof list - 1)];
}
}

int main()
{
	int password_length;

	printf("Enter length of the password\n");
	scanf("%d", &password_length);

	char password[password_length];

	generate_password(password, password_length);
	printf("The generated password is: %s\n", password);

	return (0);
}
