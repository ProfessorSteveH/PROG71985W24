#include "library.h"
#include <stdio.h>

extern int yearborn;

void function2() {
    //int yearborn = 1998;

    static int counter = 0;
    counter++;   //duration static, scope: block, linkage: no
    printf("yearborn = %d (%d)\n", yearborn, counter);
    //strncpy(password, "steve", 5);
}