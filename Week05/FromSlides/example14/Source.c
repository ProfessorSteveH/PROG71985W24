#include <stdio.h>
#include "CarTypes.h"

// structs and unions
// PROG71985 F23 - Professor SteveH - Oct 2023
//
// revision history
//		1.0	   2020-June-10			initial
//      1.1     2021-June-1             reviewed and updated
//      1.2     2022-May-20         reviewed
//		1.3		  2023-Jul-19		reviewed

int main(void)
{
    CARDATA cars[2];

    OWNER me = { "0123456789", "steve", "he<redacted>e", "waterloo" };
    OWNERDATA myContactInfo;
    myContactInfo.ownCar = me;
    CARDATA myCar = { "honda", 0, myContactInfo };
    cars[0] = myCar;

    LEASECOMPANY company = { "Conestoga College", "BCS", "University Ave" };
    OWNERDATA myCompanyInfo;
    myCompanyInfo.leaseCar = company;
    CARDATA myCompanyCar = { "buick", 1, myCompanyInfo };
    cars[1] = myCompanyCar;

    printf("%d\n", sizeof(cars));
    int numElements = sizeof(cars) / sizeof(struct carData);
    printf("%d\n", numElements);
    for (int i = 0; i < numElements; i++)
    {
        printf("%d. ", i);
        if (cars[i].status == 0)
        {
            printf("%s -> %s %s\n", cars[i].make, cars[i].ownerInfo.ownCar.fname, cars[i].ownerInfo.ownCar.lname);
        }
        else
        {
            printf("%s -> %s\n", cars[i].make, cars[i].ownerInfo.leaseCar.name);
        }
    }
}
