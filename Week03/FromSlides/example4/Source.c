//
// Week 3 - example4
//		up and down converting values (at your peril)
//
// PROG71985 - F23
// Professor SteveH - Sept 2023
//
// revision history
//		1.0		2020-May-28			initial
//      1.1      2021-May-27          reviewed and updated
//      1.2     2022-May-20         reviewed
//		1.3		  2023-Jul-19		reviewed

#include <stdio.h>
int main(void)
{
    char character;
    int integer;
    float floating;
    double doublePrecision;

    doublePrecision = floating = integer = character = 'C';                                  
    printf("character = %c, integer = %d, floating = %2.2f, doublePrecision = %2.2f \n", character, integer, floating, doublePrecision); 
    
    character = character + 1;                                        
    integer = floating + 2 * character;                                    
    floating = 2.0 * character + integer;                                  
    printf("character = %c, integer = %d, floating = %2.2f\n", character, integer, floating); 
    
    character = 1107;                                          
    printf("Now character = %c\n", character);                       
    
    character = 80.89;                                         
    printf("Now character = %c\n", character);                        

    return 0;
}