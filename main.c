/*
Prpgram Name: COP 2220 Project 1
Description: This program calculates a customer's bill in the form of a receipt
Author: Chris Clark (N01242244)
Date: 2/4/2020
*/

//preprocessors
#include <stdio.h>

// global declarations
#define TV_PRICE 232.40
#define LAPTOP_PRICE 620.39
#define XBOX_PRICE 230.21

int main()
{
    // integer variables
    int nbrTV = 0;
    int nbrLapCptr = 0;
    int nbrXbox = 0;
    int nbrMP3 = 0;
    int nbrHotSpots = 0;

    //floating point variables
    double Total_TV = 232.40;
    double Total_LapCptr = 620.39;
    double Total_Xbox = 230.21;
    double Total_MP3 = 30.00;
    double Total_HotSpot = 121.00;
    double Sub_Total = 0.00;
    double Total_Tax = 0.075;
    double bill_toatl = 0.00;


    // double constant
    const double MP3_PRICE = 30.00;
    const double HOTSPOT_PRICE = 121.00;
    // real constant
    const float TAX_PRICE = 0.075;

    // Prompts for user inputs
    printf("Enter in the number of HDTV's sold: %d", nbrTV);
    scanf("%d",&nbrTV);
    printf("Enter in the number of Laptop's sold: %d", nbrLapCptr);
    scanf("%d",&nbrLapCptr);
    printf("Enter in the number of Xbox's sold: %d", nbrXbox);
    scanf("%d",&nbrXbox);
    printf("Enter in the number of MP3 Player's sold: %d", nbrMP3);
    scanf("%d",&nbrMP3);
    printf("Enter in the number of hot spot's sold: %d", nbrHotSpots);
    scanf("%d",&nbrHotSpots);
    printf("---------------------------------------------------------------\n");


    // header for bill of the receipt

    printf("\t QTY\tDESCRIPTION \t UNIT PRICE \t    TOTAL PRICE ");
    printf("\n\t --- \t----------- \t ---------- \t     ----------");

    // first item which is TV
    printf("\n\t %03d" , nbrTV); // this is the qty for the item
    printf("\tHDTV");            // description for said item
    printf("   \t\t     %.2lf", Total_TV); // unit price for said item
    Total_TV = nbrTV * Total_TV; // assign value
    printf("\t%15.2lf", Total_TV ); // total price of said item

    // second item which is LapCptr
    printf("\n\t %03d" , nbrLapCptr); // qty for item
    printf("\tLap. Cptr.");         // description for said item
    printf("   \t     %.2lf", Total_LapCptr); // unit price for said item
    Total_LapCptr = nbrLapCptr * Total_LapCptr; // assign value
    printf("\t%15.2lf", Total_LapCptr ); // total price of said item

    // third item which is Xbox
    printf("\n\t %03d" , nbrXbox); // this is the qty for said item
    printf("\tXBox"); // description for said item
    printf("   \t\t     %.2lf", Total_Xbox); // unit price for said item
    Total_Xbox = nbrXbox * Total_Xbox; // assign value
    printf("\t%15.2lf", Total_Xbox ); // total price of said item

    // forth item which is mp3
    printf("\n\t %03d" , nbrMP3); // this is the qty for the item
    printf("\tMP3 Player");  // description for said item
    printf("   \t      %.2lf", Total_MP3); // unit price for said item
    Total_MP3 = nbrMP3 * Total_MP3; // assign value
    printf("\t%15.2lf", Total_MP3 ); // total price of said item

    // fifth item which is hotspot
    printf("\n\t %03d" , nbrHotSpots); // qty for item
    printf("\t4g Hot Spt");         // description for said item
    printf("   \t     %.2lf", Total_HotSpot); // total price of said item
    Total_HotSpot = nbrHotSpots * Total_HotSpot; // assign value
    printf("\t%15.2lf", Total_HotSpot ); // total price of said item
    printf("\n\t\t\t\t\t\t     ----------");


    // display results of subtotal, tax and overall total
    printf("\n\t\t\t\t          SUBTOTAL:"); // bill sub-total
    Sub_Total = Total_TV + Total_LapCptr + Total_Xbox + Total_MP3 + Total_HotSpot;
    printf("\t%5.2lf", Sub_Total ); // sub-total output
    printf("\n\t\t\t\t               TAX:");  // tax total
    Total_Tax = Sub_Total * TAX_PRICE;   // tax calculation
    printf("\t %.2lf", Total_Tax );   // tax  total output
    printf("\n\t\t\t\t             TOTAL:");  // bill total placement
    bill_toatl = Sub_Total + Total_Tax; // bill calculation
    printf("\t%5.2lf", bill_toatl);       // bill total output

    return 0;


}
