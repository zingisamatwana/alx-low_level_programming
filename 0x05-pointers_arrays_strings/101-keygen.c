#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 26

/**
 * generate_password - Generates a random password
 * @password: The buffer to store the generated password
 */
void generate_password(char *password)
{
	int i;

	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		/*Generate a random character between 'A' and -'Z'*/
		password[i] = 'A' + rand() % 26;
	}

	password[PASSWORD_LENGTH] = '\0';
}

/**
 * main -  faf fadofjodi fj aosdgj dogcode checks
 * Return: Always 0
 */
int main(void)
{
	char password[PASSWORD_LENGTH + 1];

	srand(time(NULL)); /*Seed the random number generator*/

	generate_password(password);
	printf("Generated password: %s\n", password);

	return (0);
}
