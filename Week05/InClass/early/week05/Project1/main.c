#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// arrays and strings!
// prog71985 - week05 - steveh - winter24


//		Quote of the day:
//       "Good functions communicate what they do so that you don’t have to dig in and read them
//        to know what’s going on. Cognitive load is one of the biggest hurdles to programmer 
//        productivity. " 
//	         		https://medium.com/thinkster-io/code-smell-side-effects-caf799df2151
//




/*

type system
	static				vs.					dynamic 

	int i = "steve";								i = 5
	float f = (float)i;												
													
	strong				vs.					weak
	
	i is an int forever						char c = 'c';

											int i = c;
											printf("%c", i);
*/

// VLA we do not support VLAs (your arrays must have r-value size)

#define SIZE		4
#define ARRAYSIZE	5

// in C, arrays reduce to pointers
bool ArraySearch(int* collection, int arraySize, int term) {

	for (int i = 0; i < arraySize; i++) {
		//printf("examining %d\n", collection[i]);
		if (collection[i] == term)
			return true;
	}

	return false;
}


int main(void) {

	int bucket[ARRAYSIZE] = { 1,2,3,4,5 };

	printf("sizeof collection in main: %d\n", sizeof(bucket));

	int searchTerm = 7;

	if (ArraySearch(bucket, ARRAYSIZE, searchTerm))
		printf("found\n");
	else
		printf("not found\n");






	int array[SIZE];		//size must be r-value

	int n = 6;
	int array2[4] = { 1,2,3,4 };
	array2[0] = 6;
	printf("%d\n",array2[3]);

	int twoDarray[2][2] = {
							{0,1}, {1,2} 
						  };

	printf("%d\n", twoDarray[1][1]);

	char letter[] = { 'a', 'b', 'c', 'd' };	// " <= imply string, ' <= char
								// strings are always more than 1 char
						// 
	printf("%s\n", letter);
	printf("%s\n", "abcd");
	// there is no type 'string' in C
	// instead, we use arrays of chars + special rules

	printf("length of letter: %d\n", strlen(letter));

	return 0;
}