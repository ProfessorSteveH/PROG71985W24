#include <stdio.h>
#include <stdlib.h>
#include "library.h"

#define MAXSTRING       40000

// some stuff on scoping
// prog71985 - week11 - steveh - winter24

// duration (how long does a variable live)
// - static (it starts with the program and ends with the program)
// - automatic (created when necessary and destroyed when appropriate) *
// - allocated (when malloc, calloc, realloc are used (user in charge))

// scope (how visible is it)
// - file (across the whole file)
// - block (across only the block) *

// linkage (can it be seen across files)
// - none (automatic duration it is none) *
// - internal (inside a TU)
// - external (across translation units (TUs))

//--------------------------------------------------------
// register variable
// volatile variable
// restrict(ed) pointer

int monthborn = 3;  // static, file, external
                        // conversationally known as 'global variable'

static int yearborn = 1997;  //duration: static , scope: file, linkage: internal
                        // conversationally known as 'global variable'

//  a static function can only be accessed in the TU.
static int function() {
    printf("my yearborn is: %d and monthborn is %d\n", yearborn, monthborn);
    // strncpy(name, "steve", 5); not internal
}

void restricted_use(int* a, int* b, int* restrict c) {

    // LEA EBX, [address of c]
    // LEA EAX, [address of a]
    // ADD EAX, EBX
    // MOV [address of a], EAX
    *a += *c;

    // there could be some time

    // MOV [address of a], EAX   -> this line is duplicated, for safety, but if EBX
                                //  is 'restricted' then we don't need that line for safety
    // LEA EAX, [address of b]
    // ADD EAX, EBX
    // MOV [address of b], EAX
    *b += *c;
}

int main(void) {

    int age = 27; //duration: automatic, scope: block, linkage: none

//  char* password = (char*)malloc(number of bytes)  => returns unintialized storage
//     memset(password, 0, MAXSIZE);

//  char* password = (char*)calloc(unit, number of units) => it init's memory to 0
        // eg: char* allocation = (char*)calloc(char, MAXSTRING);

//  char* password = (char*)realloc(password, MAXSTRING*2);

    char* password = (char*)malloc(sizeof(char) * MAXSTRING);  //duration: allocated, scope: block, linkage: none
    if(password == NULL) {
        exit(1);
    }
    // steve\0superSecret!\0
    // bool isAuthenticated = authenticateUser(name, password);  //sensitive material in memory

    // volatile
    // if not there, the compiler *may* "optimize" this code out of the program
    // using volatile stops this.
    for(volatile int i=0; i<MAXSTRING; i++)
        password[i] = '\0';

    // the year is 1989...
    //        MOV EAX, memory location
    // loop:  
    //        name[EAX] = '\0';
    //        INC EAX
    //        cmp EAX, MAXSTRING
    //        je done
    //        jmp loop

    // a register variable 'pins' a variable to a specific hw (CPU) register
    // mostly not necessary since 2006;
    for(register int i = 0; i<MAXSTRING; i++)
        password[i] = '\0';
    
    printf("my age today is %d and birthyear is %d and birthmonth is %d\n", age, yearborn, monthborn);
    
    function2();
    function2();
    function2();
    function2();

    free(password);
    return 0;
}
