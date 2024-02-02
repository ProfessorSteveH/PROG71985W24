#include <stdio.h>
#include <string.h>

// more structures
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

typedef struct book BOOK;   //now we have a type called BOOK for things of type "struct book". see line 23

int main(void)
{
    struct book library[MAXBOOKS] = {
        {.value = 25.99, .author = "James Broadfool", .title = "Rue for the Toad"},
        {.value = 25.99, .author = "James Broadfool", .title = "Rue for the Toad (2)"},
    };

    BOOK newbook = { .value = 25.99, .author = "James Broadfool", .title = "Rue for the Toad (3)" };
    library[2] = newbook;

    for (int i = 0; i < MAXBOOKS; i++)
    {
        if (library[i].title[0] == '\0')
            break;
        printf("%d. %s\n", i, library[i].title);
    }
}
