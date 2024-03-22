#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "library.h"

#define MAXSTRING   40

// scoping stuff
// week11 - steveh - prog71985 - winter24

// duration: (how long - does it live)
// - static - from the beginning to the end
// - automatic - create it when necessary and destroy when done
// - allocated - manually done by dev (malloc, calloc, realloc)

// scope: (how far is it seen)
// - file - the whole file
// - block - between the braces

// linkage: (whether translation units (TUs) can see it)
// - none
// - internal - anywhere in this file (TU)
// - external - anywhere in any TU (in this project)

int yearborn = 1997; //duration: static, scope: file, linkage: half of external

static int actual_internal = 2000; //duration: static, scope:file, linkage:internal

//static infront of function means function can only be executed by functions in this TU
static void function(char* password) {
    strncpy(password, "steve", 5);
}

int main(void) {
    
    int age = 27;  //duration: automatic, scope: block, linkage: none
    char* password = (char*)malloc(sizeof(char) * MAXSTRING); 
                            // duration: allocated, scope: block, linkage: none
    if(password == NULL)
        exit(1);

    printf("my age today is %d\n", age);

    function2();
    function2();
    function2();
    function2();

    return 0;
}