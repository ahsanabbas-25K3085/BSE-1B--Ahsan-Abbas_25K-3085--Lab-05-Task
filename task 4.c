#include <stdio.h>
#include <string.h>

int main() 
{
    char correct_username[] = "admin";
    char correct_password[] = "1234";
    char username[20], password[20];

    printf("Enter username: ");
    scanf("%s", username);

    if (strcmp(username, correct_username) == 0)
	 {
        printf("Enter password: ");
        scanf("%s", password);

        if (strcmp(password, correct_password) == 0) 
		{
            printf("Login successful\n");
        }
		 else 
		 {
            printf("Incorrect password\n");
         }
    } 
	else
	    {
        printf("Username not found\n");
        }

    return 0;
}

