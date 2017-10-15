#include "Surgery.h"

#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

//Function to set the surgery's number
void Surgery::setSurgeryNumber(int sNum){
    surgeryNumber = sNum;
}

//Function to set the surgery's price
void Surgery::setSurgeryPrice(double sPrice){
    surgeryPrice = sPrice;
}

//Function to retrieve the surgery's number
int Surgery::getSurgeryNumber()const{
    return surgeryNumber;
}

//Function to retrieve the surgery's price
double Surgery::getSurgeryPrice()const{
    return surgeryPrice;

}

void Surgery::surgeryBanner(){
 if (system("CLS")) {system("clean");};     //Clean the screen before proceed to the surgery section of the program
cout << endl;
cout << " #########################################################################################" << endl;
cout << " #####       ######  ##     ## ########   ######   ######## ########  ##    ##      ######" << endl;
cout << " #####      ##    ## ##     ## ##     ## ##    ##  ##       ##     ##  ##  ##       ######" << endl;
cout << " #####      ##       ##     ## ##     ## ##        ##       ##     ##   ####        ######" << endl;
cout << " #####       ######  ##     ## ########  ##   #### ######   ########     ##         ######" << endl;
cout << " #####            ## ##     ## ##   ##   ##    ##  ##       ##   ##      ##         ######" << endl;
cout << " #####      ##    ## ##     ## ##    ##  ##    ##  ##       ##    ##     ##         ######" << endl;
cout << " #####       ######   #######  ##     ##  ######   ######## ##     ##    ##         ######" << endl;
cout << " #########################################################################################" << endl;
cout << endl;
}

//Function to determine the surgery's price base on the surgery's number
double Surgery::surgeryCharge(int surgeryNumber){

    switch(surgeryNumber){      //Examine the surgery's number
        case 10:                //If the number is 10
            return 50000.00;    // return the price for that surgery
        case 20:                //If the number is 20
            return 60000.00;    //return the price for that surgery
        case 30:                //If the number is 30
            return 70000.00;    //return the price for that surgery
        case 40:                //If the number is 40
            return 30000.00;    //return the price for that surgery
        case 50:                //If the number is 50
            return 40000.00;    //return the price for that surgery
    }
}

//Constructor for the surgery's class
Surgery::Surgery()
{
    surgeryBanner();
    //ctor
}

//Destructor for the surgery's class
Surgery::~Surgery()
{
    //dtor
}
