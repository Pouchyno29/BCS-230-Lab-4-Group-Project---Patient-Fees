#ifndef PATIENTACCOUNT_H
#define PATIENTACCOUNT_H

#include <stdio.h>
#include <string>
using namespace std;

class PatientAccount
{
    private:
        string patientFirstName;
        string patientLastName;
        double patientTotalCharges;
        double dailyRate;
        string patientIDNumber;
        int numberOfdaysStay;


    public:
        PatientAccount();
        ~PatientAccount();

    void setPatientFirstName(string pFirstName);
    //Function to set the person's first name.
    //Postcondition: firstName will have the value of first.

    void setPatientLastName(string pLastName);
    //Function to set the person's last name.
    //Postcondition: lastName will have the value of last.

    //void setPatientCharge(double pCharge);
    //Function to set the patient charge.
    //Postcondition: patientCharges will equal to the value of pCharge.

    void setDailyRate(double dRate);
    //Function to set the patient daily rate.
    //Postcondition: dailyRate will equal to the value of dRate.

    void setPatientID(string pIDNumber);
    //Function to set the patient's ID number.
    //Postcondition: patientIDNumber will equal to the value of patientID.

    void setDays(int days);
    //Function to set the number of days the patient stays at the hospital.
    //Postcondition: numberOfDaysStay will equal to the value of day.

    string getPatientFirstName() const;
    //Function to return the first name.
    //Postcondition: The value of firstName is returned.

    string gePatienttLastName() const;
    //Function to return the last name.
    //Postcondition: The value of lastName is returned.

    double getDailyRate() const;
    //Function to return the patient daily rate while staying at the hospital.
    //Postcondition: The value of dailyRate is return.

    //double getPatientCharges() const;
    //Function to return the patient's charges for the number of days staying at the hospital.
    //Postcondition: The value of patientCharges is return.

    string getPatientID() const;
    //Function to return the patient's ID number.
    //Postcondition: The value of patientIDNumber is returned.

    int getDays()const;
    //Function to return the number of days the patient stay at the hospital.
    //Postcondition: The value of numberOfdaysStay is returned.

    void takePatientInfo();
    //Function to ask question about the patient, like first name, last name.....
    //Postcondition: This function did not return any value, but set the value for all the data members variables.

    void patientInformation()const;
    //Function to show the patient's information.
    //Postcondition: This function will show all the information about the patient.

    void setCharge(int charge);
    // Function will set the patient's charge
    // Postcondition: This function will take the calculatePatientChage as parameter

    double getCharge()const;
    // Function will return the patient's charge
    // Postcondition: The charge for the patient will return

    double calculatePatientCharge(double, int) const;
    // Function to calculate the charge of the patient for staying at the hospital.
    // Postcondition: This function will return the patient's Charges

    void updatePatientCharge(double newCharge);
    // Function to update the patient's account with the new price
    // Postcondition: This function will take the patient's new charge, and pass it as a parameter to update the patient's charge

    void medicalBanner();


};


#endif // PATIENTACCOUNT_H
