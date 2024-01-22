//
// Week 3 - example16
//		switch statements
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
#include <ctype.h>
int main(void)
{
    char ch;

    printf("Give me a letter of the alphabet, and I will give ");
    printf("an animal name\nbeginning with that letter.\n");
    printf("Please type in a letter; type # to end my act.\n");
    while ((ch = getchar()) != '#')
    {
        if ('\n' == ch)   // 
            continue;
        if (islower(ch))    
            switch (ch)
            {
            case 'a':
                printf("argali, a wild sheep of Asia\n");
                break;
            case 'b':
                printf("babirusa, a wild pig of Malay\n");
                break;
            case 'c':
                printf("coati, racoonlike mammal\n");
                break;
            case 'd':
                printf("desman, aquatic, molelike critter\n");
                break;
            case 'e':
                printf("echidna, the spiny anteater\n");
                break;
            case 'f':
                printf("fisher, brownish marten\n");
                break;
            default:
                printf("That's a stumper!\n");
            }                
        else
            printf("I recognize only lowercase letters.\n");
        while (getchar() != '\n')
            continue;                                                       //another use of continue
        printf("Please type another letter or a #.\n");
    }                        
    printf("Bye!\n");

    return 0;
}