#ifndef SURGERY_H
#define SURGERY_H

#include <iostream>
#include <string>

using namespace std;

class Surgery
{

    private:

        int surgeryNumber;                  //Member variable to get the surgery number from the menu
        double surgeryPrice;                //Member function surgery's price

    public:


        void setSurgeryNumber(int sNum);
       //Function to set the surgery's number

        void setSurgeryPrice(double sPrice);
        //Function to set the surgery's price

        int getSurgeryNumber()const;
        //Function to retrieve the surgery's number

        double getSurgeryPrice()const;
        //Function to retrieve the surgery's price

        double surgeryCharge(int surgeryNumber);
        //Function to determine the charge of the surgery base on the surgery's number

        void surgeryBanner();

        Surgery();

        ~Surgery();


};

#endif // SURGERY_H
