#include <stdio.h>
#include <stdbool.h>

#define CONVERSION_FACTOR   2.54

// just code to help us discuss some new ideas
// prog71985 - week03 - steveh - winter24

int main(void) {

    const float conversion_factor = 2.54f;
    
    int z = 31;

    typedef Age int;                 // an alias, or aka (also known as)

    Age myAge = 31;

    float answer = height * CONVERSION_FACTOR;

    // yes == (anything other than 0) 
    //  no == 0 == false 

    if(true) {

    }

    int x = 2;  //single = is for assignmnet

    if( 5 == x  ) {        // say "x is 5"? yes
        //do a thing.
    }


    if(x == 2) {        // expression - evaluate - yes or no
        // this is the stuff that is executed 
    } else if (x == 5) {
        // do the stuff when x == 5
    } else {
        // if it's not yes, do this  aka x != 2
    }

    //while
    while(x != 2) {                     // will run 0 times, because x = 2;
        // the lines to be repeated
    }

    while(x == 2) {                         // an infinite loop, make sure you have an exit condition
        //these lines will also be run

        x++;
    }
    // while is purpose built for problems with loops of 0 or more times

    int j =0;
    j = j+1;
    j += 1;
    j++;        //idiomatic C 

    int k =12;
    k = k - 1;
    k -= 1;
    k--;

   // l-value - a thing that can store a thing
   // r-value - anything that is not an l-value

    const int x = 3;  // non-modifiable l-value


    //for
    // count from 10 to 100 by ones (1)
    for(int i=10; i<100; i++ ) {
        //etwd

        // the stuff that is looped through

    }
    // while is purpose built for problems with loops havin a known range

    int i = 13;
    //do...while
    do {
        // these are looped instructions
    } while (i > 50);
    // do...while is purpose built for problems with loops that are 1 or more


    int size_of_int = sizeof(int);
    printf("sizeof int is %d\n", size_of_int);  // 4
    printf("sizeof int is %d\n", sizeof(size_t));  // 8
    
    //size_t   // 2 properties:  unsigned platform(cpu) agnostic



    return 0;
}