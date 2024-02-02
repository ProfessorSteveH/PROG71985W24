//* book.c -- one-book inventory */

// PROG71985 F23 - Professor SteveH - Oct 2023
//
// borrowed from textbook

#include <stdio.h>
#include <string.h>

#define MAXTITL  41      /* maximum length of title + 1         */
#define MAXAUTL  31      /* maximum length of author's name + 1 */

struct book {            /* structure template: tag is book     */
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};                       /* end of structure template           */

int main(void)
{
    struct book myBook; 

    printf("Please enter the book title.\n");
    scanf_s("%s", myBook.title, MAXTITL); 
    printf("Now enter the author.\n");
    scanf_s("%s", myBook.author, MAXAUTL);
    printf("Now enter the value.\n");
    scanf_s("%f", &myBook.value);

    printf("%s by %s: $%.2f\n", myBook.title, myBook.author, myBook.value);
    printf("%s: \"%s\" ($%.2f)\n", myBook.author, myBook.title, myBook.value);

    printf("Done.\n");

    return 0;
}