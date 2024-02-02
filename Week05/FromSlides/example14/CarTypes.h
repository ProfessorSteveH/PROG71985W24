#pragma once

typedef struct owner {
    char socsecurity[12];
    char fname[20];
    char lname[20];
    char address[50];
} OWNER;

typedef struct leaseCompany {
    char name[40];
    char department[20];
    char address[50];
} LEASECOMPANY;

typedef union ownerData {
    struct owner ownCar;
    struct leaseCompany leaseCar;
} OWNERDATA;

typedef struct carData {
    char make[15];
    int status; /* 0 = owned, 1 = leased */
    union ownerData ownerInfo;
} CARDATA;
