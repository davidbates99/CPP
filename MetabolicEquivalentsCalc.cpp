// This program calculates calories burned during an activity,
// given a user's weight, activity intensity in METs, and time exercised.
// David Bates
// April 21, 2022

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string user_name;
    float weight_lbs , activity_mets , time_mins , metabolic_total;
    const double LBS_TO_KG_CONVERSION = 2.2;

    // Welcome Message
    cout << "Welcome to the Metabolic Equivalents Calculator!" << endl;
    cout << "What's your first name? ";
    cin  >> user_name;
    cout << endl << "Welcome " << user_name <<  "!"  << endl;

    // Inputs for weight(lbs), METs & mins spent exercising:
    cout << "Enter your weight in pounds: ";
    cin >> weight_lbs;

    cout << endl << "Enter the number of METs for the activity: ";
    cin >> activity_mets;

    cout << endl << "Enter the number of minutes spent exercising: ";
    cin >> time_mins;
    cout << endl;

    //Conversion from lbs to kg
    double weight_kg = weight_lbs / LBS_TO_KG_CONVERSION;

    //Calculation of Metabolic Equivalency Calc 0.45359237
    metabolic_total = 0.0175 * activity_mets * weight_kg * time_mins;

    // Output of calories burned during activity & only prints 2 decimals
    cout << fixed << showpoint << setprecision(2);
    cout << "You burned an estimated " << metabolic_total;
    cout << " calories." << endl;

    return 0;
}


/*
Welcome to the Metabolic Equivalents Calculator!
What's your first name? David

Welcome David!
Enter your weight in pounds: 140

Enter the number of METs for the activity: 6

Enter the number of minutes spent exercising: 50

You burned an estimated 334.09 calories.
*/