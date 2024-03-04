#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


// this should be a program for illustrating 'union and enum'
// week 07 - prog71985 - winter24 - steveh

typedef union data {
	int Int;				// sizeodf(int) = 4
	float Float;			// sizeof(float) = 4
	double Double;			// sizeof(double) = 8
} DATA;

typedef enum type { INT, FLOAT, DOUBLE } TYPE;

typedef struct number {
	TYPE	type;
	DATA	digits;
} NUMBER;

void printInt(NUMBER n) {
	printf("Int: %d\n", n.digits.Int);
}
void printFloat(NUMBER n) {
	printf("Float: %f\n", n.digits.Float);
}
void printDouble(NUMBER n) {
	printf("Double: %lf\n", n.digits.Double);
}

void printNumber(NUMBER n) {
	if (n.type == INT)
		printInt(n);
	else if (n.type == FLOAT)
		printFloat(n);
	else if (n.type == DOUBLE)
		printDouble(n);
	else
		fprintf(stderr, "unknown number type\n");
}
int main(void) {

	//printf("NUMBER is of size %d\n", sizeof(NUMBER));

	NUMBER d = { .type = DOUBLE, .digits.Double = 1 };

	printNumber(d);

	return 0;
}