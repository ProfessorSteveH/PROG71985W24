#include <stdio.h>

int main(void) {

    printf("the sizeof(size_t) is %d\n", (int)sizeof(size_t));


    float f1 = 1.89f;
    int i1 = (int)f1;  // truncate   i1 = 1;

    return 0;
}