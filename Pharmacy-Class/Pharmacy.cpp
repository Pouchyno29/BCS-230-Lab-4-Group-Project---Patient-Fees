#include "Pharmacy.h"
#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

//Function to set the medication's number
void Pharmacy::setMedicationNumber(int mNum){
    medicationNumber = mNum;
}
//Function to set the medication's price
void Pharmacy::setMedicationPrice(double mPrice){
    medicationPrice = mPrice;
}
//Function to retrieve the medication's number
int Pharmacy::getMedicationNumber()const{
    return medicationNumber;
}
//Function to retrieve the medication's price
double Pharmacy::getMedicationPrice()const{
    return medicationPrice;
}

//Function to determine the medication's price base on the medication's number
double Pharmacy::medicationCharge(int medicationNumber)const{

    switch(medicationNumber){        //Examine the medication's number
        case 10:                     //If the surgery's number is 10
            return 100;              //Then return the price for that medication
        case 20:                     //If the surgery's number is 20
            return 52.78;            //Then return the price for that medication
        case 30:                     //If the surgery's number is 30
            return 63.26;            //Then return the price for that medication
        case 40:                     //If the surgery's number is 40
            return 78.14;            //Then return the price for that medication
        case 50:                     //If the surgery's number is 50
            return 8;                //Then return the price for that medication
        case 60:                     //If the surgery's number is 60
             return 147.95;          //Then return the price for that medication
        case 70:                     //If the surgery's number is 70
             return 52.95;           //Then return the price for that medication
        case 80:                     //If the surgery's number is 80
             return 64.84;           //Then return the price for that medication
        case 90:                     //If the surgery's number is 90
            return 170;              //Then return the price for that medication
        case 100:                    //If the surgery's number is 100
            return 110.40;           //Then return the price for that medication
    }

}


void Pharmacy::PharmacyBanner(){
 if (system("CLS")) {system("clean");}; //Clean the screen before moving to the pharmacy section of the program
cout << endl;
cout << " #################################################################################################" << endl;
cout << " #####      ########  ##     ##    ###    ########  ##     ##    ###     ######  ##    ##     ####" << endl;
cout << " #####      ##     ## ##     ##   ## ##   ##     ## ###   ###   ## ##   ##    ##  ##  ##      ####" << endl;
cout << " #####      ##     ## ##     ##  ##   ##  ##     ## #### ####  ##   ##  ##         ####       ####" << endl;
cout << " #####      ########  ######### ##     ## ########  ## ### ## ##     ## ##          ##        ####" << endl;
cout << " #####      ##        ##     ## ######### ##   ##   ##     ## ######### ##          ##        ####" << endl;
cout << " #####      ##        ##     ## ##     ## ##    ##  ##     ## ##     ## ##    ##    ##        ####" << endl;
cout << " #####      ##        ##     ## ##     ## ##     ## ##     ## ##     ##  ######     ##        ####" << endl;
cout << " #################################################################################################" << endl;
cout << endl;
}

//Constructor for the pharmacy class
Pharmacy::Pharmacy()
{
    PharmacyBanner();

}
//Destructor for the pharmacy class
Pharmacy::~Pharmacy()
{
    //dtor
}
