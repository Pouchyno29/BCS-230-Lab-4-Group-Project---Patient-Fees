#ifndef PHARMACY_H
#define PHARMACY_H

#include <iostream>
#include <string>

using namespace std;

class Pharmacy
{

    private:
        int medicationNumber;               // Member function get the medication's number from the menu
        double medicationPrice;             // Member function for the medication 's price


    public:
        void setMedicationNumber(int mNum);
    //Function to set the medication's number
    //Postcondition: This function will set the medication's number with the info pass in the parameter and save it to member variable medicalNumber

        void setMedicationPrice(double mPrice);
    //Function to set the person's first name.
    //Postcondition: This function will set the medication's price with the info pass in the parameter and save it to member variable medicationPrice

        int getMedicationNumber() const;
    //Function to set the person's first name.
   //Postcondition: This function will retrieve the medication's number

        double getMedicationPrice() const;
    //Function to set the person's first name.
    //Postcondition: This function will retrieve medication's price
    
        double medicationCharge(int mNum)const;
    //Function to set the person's first name.
    //Postcondition: This function will set the medication's charge

        void PharmacyBanner();

        Pharmacy();
        ~Pharmacy();



};

#endif // PHARMACY_H
