#include <stdio.h>

int main()
 {
    char room, action;

    printf("Enter room (L = Living Room, K = Kitchen): ");
    scanf(" %c", &room);

    printf("Enter action (L = Lights, T = Thermostat): ");
    scanf(" %c", &action);

    switch(room) 
	{
        case 'L':
        case 'l':
            switch(action)
			 {
                case 'L':
                case 'l':
                    printf("Adjusting ambient lighting.\n");
                    break;
                case 'T':
                case 't':
                    printf("Setting living room temperature.\n");
                    break;
                default:
                    printf("Invalid action\n");
            }
            break;

        case 'K':
        case 'k':
            switch(action)
			 {
                case 'L':
                case 'l':
                    printf("Turning on bright task lighting.\n");
                    break;
                case 'T':
                case 't':
                    printf("Setting kitchen temperature.\n");
                    break;
                default:
                    printf("Invalid action\n");
            }
            break;

        default:
            printf("Invalid room\n");
    }

    return 0;
}

