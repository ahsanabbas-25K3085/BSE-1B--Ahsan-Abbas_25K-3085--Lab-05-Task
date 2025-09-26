#include <stdio.h>
int main() 
{
    int powerOn;
    char lightColor;

    printf("Enter power status (1 = On, 0 = Off): ");
    scanf("%d", &powerOn);

    if (powerOn == 1)
	 {
        printf("Enter light color (R/Y/G): ");
        scanf(" %c", &lightColor);

        if (lightColor == 'R' || lightColor == 'r')
		 {
            printf("Stop\n");
         } 
		else if (lightColor == 'Y' || lightColor == 'y')
		 {
            printf("Caution\n");
         } 
		else if (lightColor == 'G' || lightColor == 'g') 
		{
            printf("Go\n");
        }
		 else 
		 {
            printf("Invalid color\n");
         }
    } 
	else 
	{
        printf("Signal Off\n");
    }

    return 0;
}

