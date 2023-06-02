#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int password(int password_length)
{
int i;

char list[] = "1234567890qwertyuiopasdfghjklzxcvbnm!@#$%^&*()_+-=QWERTYUIOPASDFGHJKLZXCVBNM[]{};':\"<>,.?/\|";

srand(time(NULL));

for (i = 0; i < password_length; i++)
{
	printf("%c", list[rand() % (sizeof list - 1)]);
}
}

int main()
{
	int password_length;

	printf("Enter length of the password\n");
	scanf("%d", &password_length);
	password(password_length);
	return (0);
}
