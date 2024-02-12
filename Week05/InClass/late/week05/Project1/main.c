#include <stdio.h>
#include <stdbool.h>

// arrys and strings!
// prog71985 - winter24 - week05 - steveh

// Quote of the day:
//       "Good functions communicate what they do so that you don’t have to dig in and read them
//        to know what’s going on. Cognitive load is one of the biggest hurdles to programmer 
//        productivity. " 
//	         		https://medium.com/thinkster-io/code-smell-side-effects-caf799df2151
//

/*

type system

static typed			v.				dynamically typed
	int i = 5;								e = 5

	float f = (float)i;						e = "Steve"

strong					v.				weak

	once an int, always an int				float f = (float)i
											(char*)z = (void*)q;


	swap(&a,&b); // the address of

*/
// VLA - variable length array - we do not support these

#define SIZE	4	// the ultimate r-value
#define MAXSIZE	5

// In C, arrays reduce to pointers
bool searchArray(int* collection, int arraySize, int term) {

	for (int i = 0; i < arraySize; i++) {
		//printf("examining %d\n", collection[i]);
		if (collection[i] == term)
			return true;
	}

	return false;
}

int main(void) {

	int array[MAXSIZE] = { 1,2,3,4,5 };
	printf("size of collection(main): %zu\n", sizeof(array));
	if (searchArray(array, MAXSIZE, 12))
		printf("found\n");
	else
		printf("not found\n");

//-------

	//int array5[5] = { 1,2,3,4,5 };  // size must be an r-value

	//int n = 9;

	//printf("%d\n", array5[n]);   // this will crash in some cases (not all, depending memory 
											// pressure, and specific system/project config)

//-------
// 
	//int array2[] = { 1,2,3,4 };

	//int twoDarray[2][3] = {
	//						{1,2,3},
	//						{4,5,6}
	//};

	char arrayOfChars[] = { 'a', 'b', 'c', 'd' };

	char letter[] = "a";   // " <= string,  ' <= char
	//
	printf("%s\n", arrayOfChars);
	printf("%s\n", "abcd");

//---------

	return 0;
}