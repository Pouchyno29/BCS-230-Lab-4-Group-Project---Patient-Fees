/**
   Programmer's name    : Stanley
   Class                : BCS 230 Foundations of Computer Programming II
   Date                 : 10/02/2017
   Lab                  : Lab 4 Group Project Patient Fees
   Professor's name     : Moaath Alrajab
   Software uses        : Code:blocks
**/

/**


**/

#include <iostream>
#include <string>
#include <stdlib.h>
#include "PatientAccount.h"
#include "Surgery.h"
#include "Pharmacy.h"

using namespace std;

void typeOfSurgery();                                                                           //Function prototype that show all the type of surgery
void selectMedication(PatientAccount &newPatientAccount, Pharmacy &newMedication);              //Function prototype for the pharmacy
void checkOut(PatientAccount newPatientAccount, Surgery NewSurgery, Pharmacy newMedication);    //Function prototype to check the patient out of the hospital
void checkoutBanner();

int main()
{

    typeOfSurgery();



    return 0;
}


void typeOfSurgery(){

     PatientAccount newPatientAccount;                  // Create the patient object calls newPatientAccount

     cout << endl << endl;                              // Skip two lines

     Surgery NewSurgery;                                // Create the patient surgery object calls NewSurgery

     cout << endl << endl;                              // Skip two lines


    int choice = 0;                                     //Variable to get input from user
    int surgeryNumber = 0;                              //Variable to set the surgery's number


    do{
        //This is a menu to allow the user to select the type of surgery
        cout << "\t  Select a type of surgery" << endl;
        cout << "\t  1. Knee replacement surgery." << endl;
        cout << "\t  2. Cardiac surgery." << endl;
        cout << "\t  3. Trauma surgery." << endl;
        cout << "\t  4. Cataract surgery ." << endl;
        cout << "\t  5. Biopsy" << endl;

        cout << "\n\t  Please make a selection: ";                      //Take input from the user
        cin >> choice;                                                  //Take input from the user

        if( (choice <= 0) || (choice > 5) ){                            //Check if input is valid
            cout << "\t  Wrong entry ..Please try again!!!" << endl;    //Show message
            system("Pause");                                            //Stop to let the user know the input is wrong
            if (system("CLS")) {system("clean");};                      //Clear the screen before asking for new input
        }else{                                                          //If input is valid
            break;                                                      // Get out of the loop
        }
    }while(true);                                                       //Loop while the test condition is true


    switch(choice){                     //Examine the user's input to determine what surgery the user chose from the surgery's menu
        case 1:                         //If it is 1
            surgeryNumber = 10;         //Surgery number is 10
            break;                      //Stop
        case 2:                         //If it is 2
            surgeryNumber = 20;         //Surgery number is 20
            break;                      //Stop
        case 3:                         //If it is 3
            surgeryNumber = 30;         //Surgery number is 30
            break;                      //Stop
        case 4:                         //If it is 4
            surgeryNumber = 40;         //Surgery number is 20
            break;                      //Stop
        case 5:                         //If it is 5
            surgeryNumber = 50;         //Surgery number is 20
            break;
    }

    //Set the surgery number for the surgery class. Like a database each surgery has a number
    NewSurgery.setSurgeryNumber(surgeryNumber);

    //Set the surgery price base on the surgery number
    NewSurgery.setSurgeryPrice(NewSurgery.surgeryCharge(surgeryNumber));

    //Update the patient account with the price of the surgery
    newPatientAccount.updatePatientCharge(NewSurgery.surgeryCharge(surgeryNumber));

    //Create the pharmacy object calls newMedication
    Pharmacy newMedication;

    /**
        Show the pharmacy menu to allow the user to select a medication
        Then pass the pharmacy object to this function in order
        To set the price for the medication
        Pass the patient account object to this function to update the
        patient's account with the price of the medication.
    **/
    selectMedication(newPatientAccount, newMedication);

    //Then Pause and wait for the user to press any key before continue to check out
    system("Pause");

   /**
        Call the check out function
        pass the newPatientAccount object create from the patient account class to get the patient's information
        pass the NewSurgery object created from the surgery class to get the surgery's information
        pass the  newMedication object create from the pharmacy class.
        Then display to the screen the patient's final charge for staying at the hospital
    **/
    checkOut(newPatientAccount, NewSurgery, newMedication);

}


void selectMedication(PatientAccount &newPatientAccount, Pharmacy &newMedication){

    int choice = 0;                 //Variable to get input from user
    int medicationNumber = 0;       //Variable to set the medication's number



    do{
        //Show the user the menu for the medication
        cout << "\t  Select a name of medication" << endl;
        cout << "\t  1. Hydromorphone (Dilaudid) ." << endl;
        cout << "\t  2. Hydrocodone." << endl;
        cout << "\t  3. Oxycodone 10mg." << endl;
        cout << "\t  4. Meperidine (Demerol)." << endl;
        cout << "\t  5. Aspirin oral tablet 325 mg ." << endl;
        cout << "\t  6. Tranexamic acid  100 mg." << endl;
        cout << "\t  7. Norepinephrine ." << endl;
        cout << "\t  8. Tranexamic acid  100 mg ." << endl;
        cout << "\t  9. Moxeza." << endl;
        cout << "\t  10.Xalatan." << endl;

        cout << "\n\t  Please make a selection: ";
        cin >> choice;                                                  //Get input from the user

        if( (choice <= 0) || (choice > 10) ){                           //If user enter the wrong input
            cout << "\t  Wrong entry ..Please try again!!!" << endl;    //Show message
            system("Pause");                                            //Stop to let the user know the input is wrong
            if (system("CLS")) {system("clean");};                      //Clear the screen before asking for new input
        }else{                                                          //If input is valid
            break;                                                      //Get out of the loop
        }
    }while(true);                                                       //Loop while the test condition is true


    // Like a database each medication has a number,
    // Once a number is selected, that number is
    // passed to the medication class to generate
    // The price for that medication.
    switch(choice){                             //Examine the user's input to determine what surgery the user chose from the surgery's menu
        case 1:                                 //If it is 1
            medicationNumber = 10;              //The medication number is 10
            break;                              //Stop
        case 2:                                 //If it is 2
            medicationNumber = 20;              //The medication number is 20
            break;                              //Stop
        case 3:                                 //If it is 3
            medicationNumber = 30;              //The medication number is 30
            break;                              //Stop
        case 4:                                 //If it is 4
            medicationNumber = 40;              //The medication number is 40
            break;                              //Stop
        case 5:                                 //If it is 5
            medicationNumber = 50;              //The medication number is 50
            break;                              //Stop
        case 6:                                 //If it is 6
            medicationNumber = 60;              //The medication number is 60
            break;                              //Stop
        case 7:                                 //If it is 7
            medicationNumber = 70;              //The medication number is 70
            break;                              //Stop
        case 8:                                 //If it is 8
            medicationNumber = 80;              //The medication number is 80
            break;                              //Stop
        case 9:                                 //If it is 9
            medicationNumber = 90;              //The medication number is 90
            break;                              //Stop
        case 10:                                //If it is 10
            medicationNumber = 100;             //The medication number is 100
            break;                              //Stop
    }
    // Set the medication number
    newMedication.setMedicationNumber(medicationNumber);

    // Using the medication's number to set the medication's price
    newMedication.setMedicationPrice(newMedication.medicationCharge(medicationNumber));

    // Updated the patient's account with the medication's price
    newPatientAccount.updatePatientCharge(newMedication.medicationCharge(medicationNumber));


}

//This function check the patient out of the hospital and show on the screen all the patient information
void checkOut(PatientAccount newPatientAccount, Surgery NewSurgery, Pharmacy newMedication){

    checkoutBanner();

    cout << "\t  Patient's bill summary" << endl;

    cout << "\t  The patient's first name" << string(25, ' ') <<"\t\t: " << newPatientAccount.getPatientFirstName() << endl;

    cout << "\t  The patient's last name"<< string(25, ' ')<<"\t\t: " << newPatientAccount.gePatienttLastName()<< endl;

    cout << "\t  The patient's ID number"<< string(25, ' ')<<"\t\t: "  << newPatientAccount.getPatientID()<< endl;

    cout << "\t  The patient's number of day stay at the hospital   \t\t: " << newPatientAccount.getDays()<< endl;

    cout << "\t  The patient's daily rate"<< string(25, ' ')<<"\t\t: $" << newPatientAccount.getDailyRate() << endl;

    cout << "\t  The patient's current charge"<< string(25, ' ')<<"\t\t: $" << (newPatientAccount.getDays() * newPatientAccount.getDailyRate()) << endl;

    cout << "\t  The price of the surgery"<< string(25, ' ')<<"\t\t: $" << NewSurgery.surgeryCharge(NewSurgery.getSurgeryNumber()) << endl;

    cout << "\t  The price for the medication"<< string(25, ' ')<<"\t\t: $" << newMedication.medicationCharge(newMedication.getMedicationNumber()) << endl;

    cout << "\t  The patient's new charge"<< string(25, ' ')<<"\t\t: $" << newPatientAccount.getCharge() << endl;

}



void checkoutBanner(){
if (system("CLS")) {system("clean");};          //Clean the screen before do anything
cout << endl;
cout << " #########################################################################################" << endl;
cout << " #####   ######  ##     ## ########  ######  ##    ##     #######  ##     ## ######## ####" << endl;
cout << " #####  ##    ## ##     ## ##       ##    ## ##   ##     ##     ## ##     ##    ##    ####" << endl;
cout << " #####  ##       ##     ## ##       ##       ##  ##      ##     ## ##     ##    ##    ####" << endl;
cout << " #####  ##       ######### ######   ##       #####       ##     ## ##     ##    ##    ####" << endl;
cout << " #####  ##       ##     ## ##       ##       ##  ##      ##     ## ##     ##    ##    ####" << endl;
cout << " #####  ##    ## ##     ## ##       ##    ## ##   ##     ##     ## ##     ##    ##    ####" << endl;
cout << " #####   ######  ##     ## ########  ######  ##    ##     #######   #######     ##    ####" << endl;
cout << " #########################################################################################" << endl;
cout << endl;
}



/**
    This program can have one more feature, per example i can add
    a class for insurance, where before checking out a patient
    the program will ask the patient if he/she has insurance,
    and if the patient says yes, then a new menu open up where
    the patient select the name of the insurance.
    Then the program will calculate how much the insurance paid, and how
    much the patient will need to pay when checking out of the hospital.
    The menu could have at least 5 different names of insurance
    and each insurance will paid a different percentage of the
    patient's bill only one insurance can be selected. Some insurance
    may paid more some may paid less, depend on the insurance's name.
**/



