#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// this should be a program for illustrating 'switch and case'
// week 07 - prog71985 - winter24 - steveh

#define BUFSIZE		5

char getAChar() {
	char buf[BUFSIZE];
	fgets(buf, BUFSIZE, stdin);
	return buf[0];
}


int main(void) {


	char input = '\0';

	do {
		printf("1. option 1\n");
		printf("2. option 2\n");
		printf("q. quit\n");
		input = getAChar();

		//if (input == '1')
		//	printf("option 1 selected\n");
		//else if (input == '2')
		//	printf("option 2 selected\n");
		//else if (input == 'q')
		//	printf("good bye\n");
		//else
		//	printf("invalid selection. try again\n");

		switch (input) {
			case '1': 
				printf("");
				break;
			case '2':
				printf("");
				break;
			case 'q':
				printf("good bye\n");
				break;
			default:
				printf("invalid selection. try again\n");
		}

	} while (input != 'q');

	return 0;
}