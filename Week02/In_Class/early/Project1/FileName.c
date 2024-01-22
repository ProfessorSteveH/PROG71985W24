#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//#define CMS_IN_INCHES   2.54
#define PI              3.14159

// program to convert height in inches to height in cm
// steveh - prog71985 - winter24 - week02

int main(void) {
    const float CMS_TO_INCHES = 2.54f;

    // get input from the user
    printf("Please enter yourt height in inches: ");
    float value_in_inches;
    int symbols_converted = scanf("%f", &value_in_inches);  // numeric input needs &
    if (symbols_converted != 1) {
        printf("error - bad value value\n");
        exit(EXIT_FAILURE);          // < less than
    }                                // > greater than
                                    // <= LESSA THASN OR EQUAL
                                    // >=
                                    // ! means not  
                                    // !=  not equal    
                                    // ==   evaluation  x == 5 ??  yes or no
                                    // =    assignment   ( x = 5;  x is set to 5)


    if (value_in_inches < 0) {          // textual input no &
        printf("error: you entered a bad value.  exiting\n");
        exit(EXIT_FAILURE);
    }

    //   if( (scanf("%f", &variable) == 1) && (variable > 0))
    //         if you like this form, go for it - otherwise, if you can
    //          read it, thats good enough.
    // 

// transform - convert from inches
// into centimeters  (1 inch = 2.54cm)
    float value_in_cm = value_in_inches * CMS_TO_INCHES;

    // output - print the output to the user
    // output is float = we allow for fractions
    printf("your size in cm is: %0.2f\n", value_in_cm);

    return EXIT_SUCCESS;
}