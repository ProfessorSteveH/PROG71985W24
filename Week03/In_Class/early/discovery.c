#include <stdio.h>
#include <stdbool.h>

#define CONVERSION_FACTOR 2.54

// just a spot to do some discovery of new keywords and C idioms
// prog71985 - steveh - week03 - W24

/*  OLD STYLE COMMENT 
 *    multi-line comments
 * 
 */

int main(void) {

    int x = 5;


    if (x == 2) {
        // when x is 2
    } else if (x == 5) {
        // 
    } else {
        // when x is not 2
    }

    // LOOPING 

    float current_height_in_inches = 74.0f;

        // yes == (anything that is not 0) 
        //  no == 0

    if(true) {

    }

//"Define errors out of existence" (John Ousterhout, A Philosophy of Software Design)



    GameState thisGameState;
    InitGame(GameState);

    do {                         // 1 == yes, meaning loop will run forever

        Input(GameState);               // is everything represented within GameState known/valid

        Update(GameState);
        // the code that will be looped 

        Render(GameState);      //depends on whether there is state mutation 


    } while(!isCompletedLevel(GameState));
    

    JumpToNextLevel(GameState);



// explain while do while is the right thing to do.

    for(;;) {
        // infinite loop
    }
    // steves assertion is this is crappy.

    while(0) {                                  // 0 == no, meaning loop will run forever
        // the code that will be looped 
    }
    // while is useful for loops of 0 or more times
      

    int j = 0;

    j = j + 1;
    j += 1;
    j++;        // idiomatic use

    j = j - 1;
    j -= 1;
    j--;        // idiomatic use

    // L-VALUE - a thing that can hold a thing 
    // R-VALUE - anything that is not an l-value

    #define i 5   

    i = 6;

    const int k = 6;        // non-modifyable l-value


    // loop from 10 to 100  with a single(1) increment 
    for(int i = 10; i <= 100; i = i+1) {
        printf("%d\n", i);
        // loop this code for as long as the for loop runs
    }
    // for is useful when we have a known range

    int l = 1;
    do {
        l = l + 1;
        // the looped stuff
    } while ( l < 7);
    // do...while is useful when you have 1 or more iterations


    while(scanf("%f", &current_height_in_inches) != 1 || current_height_in_inches <= 0  ) {             // a condition is 'a yes/no question'
        printf("error, retry\n");
    }

    float current_height_in_cm = current_height_in_inches * CONVERSION_FACTOR;

    printf("current height in cm is: %0.2f\n", current_height_in_cm);

    return 0;
}