/*
 * main.cpp
 *
 *  Created on: Feb. 29, 2024
 *      Author: vdc
 */

#include <stdio.h>
#include "myCallendar.h"

// Define constants for the position of day, month, and year within the char variable
#define DAY_POS  0  // Bits 0-4 represent the day (0-31)
#define MONTH_POS 5  // Bits 5-8 represent the month (1-12)
#define YEAR_POS  9  // Bits 9-15 represent the year (0-127)

void myCallendar() {
    // Define a char variable to store the date
    char date = 0;
    int x;
    printf("sizeof int type %d bytes\n",sizeof(x));
    printf("sizeof char type %d byte \n",sizeof(date));
    // Set the date to February 29, 2024
    int day = 29;    // 29th
    int month = 2;   // February
    int year = 24;   // 2024

    // Manipulate bits to set the day, month, and year
    date |= (day << DAY_POS);  //  date = date | (day << DAY_POS);
    						   //  date = date or (day shifted by Day_Pos
    date |= (year << YEAR_POS);

    date |= (month << MONTH_POS);



    // Retrieve and print the date
    int retrieved_day = (date >> DAY_POS) & 0x1F;    // Mask with 0x1F to extract only 5 bits
    int retrieved_month = (date >> MONTH_POS) & 0xF; // Mask with 0xF to extract only 4 bits
    int retrieved_year = (date >> YEAR_POS) & 0x7F;  // Mask with 0x7F to extract only 7 bits
    printf("Date: %d/%d/%d\n", retrieved_day, retrieved_month, retrieved_year + 2000); // Adding 2000 to get the actual year

    //return 0;
}


