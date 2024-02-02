#include <stdio.h>
#include "CarTypes2.h"

// more structs and unions
// PROG71985 F23 - Professor SteveH - Oct 2023
//
// revision history
//		1.0	   2020-June-10			initial
//      1.1     2021-June-1             reviewed and updated
//      1.2     2022-May-20         reviewed
//		1.3		  2023-Jul-19		reviewed

void displayCar(CARDATA car);

int main(void)
{
    OWNER me = { "0123456789", "steve", "hendrikse", "waterloo" };
    OWNERDATA myContactInfo;
    myContactInfo.ownCar = me;
    CARDATA myCar = {"honda", .color=black, .status=owned, myContactInfo };
    
    displayCar(myCar);
}

void displayCar(CARDATA myCar)
{
    switch (myCar.status)
    {
    case owned:
        printf("%s ", myCar.make);
        switch (myCar.color)
        {
        case black:
            printf("(black) ");
            break;
        default:
            printf("not black :( ");
            break;
        }
        printf("-> %s %s\n", myCar.ownerInfo.ownCar.fname, myCar.ownerInfo.ownCar.lname);
        break;
    case leased:
        break;
    default:
        printf("unknown ownership type\n");
        break;
    }
}