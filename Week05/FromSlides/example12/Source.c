#include <stdio.h>
#include <string.h>

// pointers to structures
// PROG71985 F23 - Professor SteveH - Oct 2023
//
// borrowed from textbook


#define MAXTITL  41      /* maximum length of title + 1         */
#define MAXAUTL  31      /* maximum length of author's name + 1 */
#define MAXBOOKS 10   // maximum number of books in library

struct book {            /* structure template: tag is book     */
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};                       /* end of structure template           */

typedef struct book BOOK;

int main(void)
{
    BOOK newbook = { .value = 25.99, .author = "James Broadfool", .title = "Rue for the Toad (3)" };

    BOOK* pointerToBook = &newbook;  

    printf(pointerToBook->author);      //option 1 - de facto standard (IMO)
    printf("\n");
    printf((*pointerToBook).title);         //option 2 - also legal

}
