#include "PatientAccount.h"
#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

//Function to set the patient first name
void PatientAccount::setPatientFirstName(string pFirstName){
    patientFirstName = pFirstName;
}

//Function to set the patient last name
void PatientAccount::setPatientLastName(string pLastName){
    patientLastName = pLastName;
}

//Function to set the daily rate of the hospital
void PatientAccount::setDailyRate(double dRate){
    dailyRate = dRate;
}

//Function to set the patient ID
void PatientAccount::setPatientID(string pIDNumber){
    patientIDNumber = pIDNumber;
}

//Function to set the number of day the patient stay at the hospital
void PatientAccount::setDays(int days){
    numberOfdaysStay = days;
}

//Function to set the charge of the patient
void PatientAccount::setCharge(int charge){
    patientTotalCharges = charge;
}

// Function to return the patient's charge
double PatientAccount::getCharge()const{
    return patientTotalCharges;
}
//Function to retrieve the patient's first name
 string PatientAccount::getPatientFirstName()const{
    return patientFirstName;
}
//Function to retrieve the patient's last name
 string PatientAccount::gePatienttLastName()const{
    return patientLastName;
}
//Function to retrieve the hospital daily rate
 double PatientAccount::getDailyRate()const{
    return dailyRate;
}

//Function to retrieve the patient's ID
string PatientAccount::getPatientID()const{
    return patientIDNumber;
}

//Function to retrieve the number of days the patient stay at the hospital
 int PatientAccount::getDays()const{
    return numberOfdaysStay;
}

//Function to calculate the patient's charge
double PatientAccount::calculatePatientCharge(double d, int dr)const{

   return d * dr;

}

//Function to update the patient's charge from the patient account
void PatientAccount::updatePatientCharge(double newCharge){
    patientTotalCharges += newCharge;
}

//Function to allow the user to enter info about the patient
void PatientAccount::takePatientInfo(){

    medicalBanner();

    string pFName;
    string pLName;
    double r;
    string id;
    int nStays;


    //Ask the user for the patient's first name
    cout << "\t  Please enter the patient's first name"     << string(30, ' ')<<"\t: ";
    cin >>  pFName;
    //Ask the user for the patient's last name
    cout << "\t  Please enter the patient's last name"      << string(30, ' ')<<"\t: ";
    cin >> pLName;
    //Ask the user for the daily rate of the hospital
    cout << "\t  Please enter the daily's rate"             << string(35, ' ')<<"\t: ";
    cin >> r;
    //Ask the user for the patient's ID
    cout << "\t  Please enter the patient's ID number"      << string(30, ' ')<<"\t: ";
    cin >> id;
    //Ask the user for the number of days the patient stays at the hospital
    cout << "\t  Please enter the number of days the patient stay at the hospital"<< string(3, ' ')<<"\t: ";
    cin >> nStays;

    //Set all the members variable for the patient's class
    setPatientFirstName(pFName);
    setPatientLastName(pLName);
    setDailyRate(r);
    setPatientID(id);
    setDays(nStays);
    setCharge(calculatePatientCharge(nStays, r));
    //Show the banner
    medicalBanner();
    //Show the patient's information
    patientInformation();

}

// Function to print out the patient's information to the screen
void PatientAccount::patientInformation()const{

    cout << "\t  Patient's Information"         << endl;
    cout << "\t  The patient's first name"      << string(25, ' ')  <<"\t\t: " << getPatientFirstName() << endl;
    cout << "\t  The patient's last name"       << string(25, ' ')  <<"\t\t: " << gePatienttLastName()<< endl;
    cout << "\t  The patient's ID number"       << string(25, ' ')  <<"\t\t: " << getPatientID()<< endl;
    cout << "\t  The patient's number of day stay at the hospital"<< string(3, ' ')<<"\t\t: " << getDays()<< endl;
    cout << "\t  The patient's daily rate"      << string(25, ' ')  <<"\t\t: $" << getDailyRate() << endl;
    cout << "\t  The patient's total charge"    << string(25, ' ')  <<"\t\t: $" << getCharge() << endl;
    system("Pause");
}


void PatientAccount::medicalBanner(){
 if (system("CLS")) {system("clean");}; //Clean the screen before doing anything
cout << endl;
cout << " ####################################################################################" << endl;
cout << " #####       ######  ########    ###    ##    ## ##       ######## ##    ##      ####" << endl;
cout << " #####      ##    ##    ##      ## ##   ###   ## ##       ##        ##  ##       ####" << endl;
cout << " #####      ##          ##     ##   ##  ####  ## ##       ##         ####        ####" << endl;
cout << " #####       ######     ##    ##     ## ## ## ## ##       ######      ##         ####" << endl;
cout << " #####            ##    ##    ######### ##  #### ##       ##          ##         ####" << endl;
cout << " #####      ##    ##    ##    ##     ## ##   ### ##       ##          ##         ####" << endl;
cout << " #####       ######     ##    ##     ## ##    ## ######## ########    ##         ####" << endl;
cout << " #####                                                                           ####" << endl;
cout << " #####      ##     ## ######## ########  ####  ######     ###    ##              ####" << endl;
cout << " #####      ###   ### ##       ##     ##  ##  ##    ##   ## ##   ##              ####" << endl;
cout << " #####      #### #### ##       ##     ##  ##  ##        ##   ##  ##              ####" << endl;
cout << " #####      ## ### ## ######   ##     ##  ##  ##       ##     ## ##              ####" << endl;
cout << " #####      ##     ## ##       ##     ##  ##  ##       ######### ##              ####" << endl;
cout << " #####      ##     ## ##       ##     ##  ##  ##    ## ##     ## ##              ####" << endl;
cout << " #####      ##     ## ######## ########  ####  ######  ##     ## ########        ####" << endl;
cout << " #####                                                                           ####" << endl;
cout << " #####       ######  ######## ##    ## ######## ######## ########                ####" << endl;
cout << " #####      ##    ## ##       ###   ##    ##    ##       ##     ##               ####" << endl;
cout << " #####      ##       ##       ####  ##    ##    ##       ##     ##               ####" << endl;
cout << " #####      ##       ######   ## ## ##    ##    ######   ########                ####" << endl;
cout << " #####      ##       ##       ##  ####    ##    ##       ##   ##                 ####" << endl;
cout << " #####      ##    ## ##       ##   ###    ##    ##       ##    ##                ####" << endl;
cout << " #####       ######  ######## ##    ##    ##    ######## ##     ##               ####" << endl;
cout << " ####################################################################################" << endl;
cout << endl;
//http://www.network-science.de/ascii/
//Font: banner3   Reflection: no   Adjustment: left   Stretch: no      Width: 80	 Text: Stanley
}

//Constructor of the patient's class
PatientAccount::PatientAccount(){

    takePatientInfo();

}

// Destruction of the patient's class
PatientAccount::~PatientAccount()
{
    //dtor
}
