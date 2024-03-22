#include "library.h"
#include <stdio.h>

extern int monthborn;  //duration: static, scope: file, linkage: external
                // called a global variable

void function2() {
    int monthborn = 6;
    static int counter = 0;  //duration: static, scope: block, linkage: none
    counter++;
    printf("monthborn is %d (page counter: %d)\n", monthborn, counter);
    //strncpy(name, "steve", 5);
}