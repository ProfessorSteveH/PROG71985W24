#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define MAXSIZE 50

// abstract data types (ADT)
// stveeh - prog71985 - winter24 - week05

/*
stdin is stream for the keyboard
stdout is stream for display
stderr is stream for errors and is set to stdout (errors to log file)

	char input[MAXSIZE]

	scanf("%^$s", input);
		1. overflows
		2. spaces
		3. implied stdin


*/




int main(int argc, char* argv[]) {

	if(argc != 3) {
		printf("Usage: %s <first> <lastname>\n", argv[0]);
		return 1;
	}

	printf("hello %s %s\n", argv[1], argv[2]);

// 	char input[MAXSIZE];

// 	fgets(input, MAXSIZE, stdin);
// 	int age = atoi(input);

// 	bool isvalid = true;
// 	for(int i = 0; i< strlen(input); i++) {
// 		if(!isalpha(input[i])) {
// 			isvalid = false;
// 			break;
// 		}
// 	}

// if(isvalid)
// 	//use
// 	int input;

// 	if(scanf("%d", &input)) {
// 		//error check
// 		//deal (exit)
// 	}

// 	int answer = 32/input;

// 	if(answer > 0)
// 		printf("%d\n", answer);

	return 0;
}