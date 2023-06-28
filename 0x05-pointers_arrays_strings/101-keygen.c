#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 8

char generateRandomChar()
{
return 'A' + rand() % 26; 
}

void generateRandomPassword(char *password)
{
int i;

for (i = 0 ; i <= PASSWORD_LENGTH ; i++)
{
password[i] = generateRandomChar();
}
password[PASSWORD_LENGTH] = '\0';
}

int main()
{
srand (time(NULL));

char password[PASSWORD_LENGTH + 1];

generateRandomPassword(password);

printf("Generated Password: %s\n", password);

return (0);
}
