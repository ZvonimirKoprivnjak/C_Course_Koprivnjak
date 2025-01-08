#include <stdio.h>
#include <stdlib.h>

int main()
{
    char znak;
    printf("Unesi znak: ");
    scanf("%c",&znak);

    if (znak >= 'A' && znak <= 'Z')
        printf("Veliko slovo. \n");
    else if (znak >= 'a' && znak <= 'z')
        printf("Malo slovo. \n");
    else if (znak >= '0' && znak <= '9')
        printf("Broj. \n");
    else
        printf("Nesto drugo. \n");
    printf("%x \n", znak);      //ASCII Hexa
    printf("%d \n", znak);      //ASCI binarni
    printf("%c \n", znak);

    //---------------------------------------------------------------------------------------------------------
    char hexChar;
	printf("Enter a hexadecimal value (one digit): ");
	scanf("%c", &hexChar);
	switch (hexChar)
	{
	case '0':
		printf("0000");
		break;
	case '1':
		printf("0001");
		break;
	case '2':
		printf("0010");
		break;
	case '3':
		printf("0011");
		break;
	case '4':
		printf("0100");
		break;
	case '5':
		printf("0101");
		break;
	case '6':
		printf("0110");
		break;
	case '7':
		printf("0111");
		break;
	case '8':
		printf("1000");
		break;
	case '9':
		printf("1001");
		break;
	case 'A':
		printf("1010");
		break;
	case 'B':
		printf("1011");
		break;
	case 'C':
		printf("1100");
		break;
	case 'D':
		printf("1101");
		break;
	case 'E':
		printf("1110");
		break;
	case 'F':
		printf("1111");
		break;
	default:
		printf("Seems you inserted something not as expected... Please try again next time..\n");
	}

    return 0;
}
