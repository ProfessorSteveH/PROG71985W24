/* rain.c  -- finds yearly totals, yearly average, and monthly
                 average for several years of rainfall data */
// PROG71985 F22 - Professor SteveH - Oct 2023
//
// borrowed from textbook

#include <stdio.h>

#define MONTHS 12    // number of months in a year
#define YEARS   5    // number of years of data
#define DAYS 31 //  max days per month,  initialize days to -1 if day doesn't exist.

int main(void)
{
    // initializing rainfall data for 2010 - 2014  
    const float rain[YEARS][MONTHS] =   //name[1st dimension][2nd dimension]
    {                                                                   
        {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},   //the monthly values for 2010
        {8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},   //2011
        {9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},   //2012
        {7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},   //2013     rain[3][8]   ==> sept 2013
        {7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}   //2014
    };

    int year, month;
    float subtotal, total;

    printf(" YEAR    RAINFALL  (inches)\n");
    for (year = 0, total = 0; year < YEARS; year++)   // for each year, sum rainfall for each month
    {             
        for (month = 0, subtotal = 0; month < MONTHS; month++)
            subtotal += rain[year][month];
        printf("%5d %15.1f\n", 2010 + year, subtotal);
        total += subtotal; // total for all years
    }
    printf("\nThe yearly average is %.1f inches.\n\n", total / YEARS);
    printf("MONTHLY AVERAGES:\n\n");
    printf(" Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n");

    for (month = 0; month < MONTHS; month++)      // for each month, sum rainfall over years
    {             
        for (year = 0, subtotal = 0; year < YEARS; year++)
            subtotal += rain[year][month];
        printf("%4.1f ", subtotal / YEARS);
    }
    printf("\n");

    return 0;
}