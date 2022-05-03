// This program calculates retroactive pay for employees that have
// won a 7.6% pay increase, effective 6 months retroactively.
// David Bates
// April 26, 2022

#include <iostream>
using namespace std;

int main() {
    string full_name;
    float oldSalary, newSalary, retroactivePay, newMonthly;
    const double INCREASE = .076;


    //Welcome message
    cout << "Hope you're having a fantastic day!" << endl
         << "And welcome to using the Salary Calculator." << endl
         << "Let's find out how much retroactive pay you qualify for!"
         << endl << endl;
    
    //User enters their first and last names using getline
    cout << "What's your first and last name? ";
    getline (cin, full_name);
    cout << endl << "Welcome " << full_name <<  "!"  << endl;


    //User enters old salary
    cout << "Please enter your current annual salary: ";
    cin >> oldSalary;
    cout << endl;


    //Calculates the new salary
    newSalary = oldSalary * ( 1 + INCREASE );

    //Calculates new monthly Salary
    newMonthly = newSalary / 12;

    //Calculates retroactive pay
    retroactivePay = (newSalary - oldSalary) / 2;


    //Displays new yearly Salary, new monthly salary, & retroactive pay.
    //Output displayed using fixed-point notation, 
    //rounded to two decimal places of precision.
    cout << "Congratulations! You can expect: " << endl
         << "New Annual Salary: $";
    printf("%.2f" , newSalary); 
    
    cout << endl << "New Monthly Salary: $";
    printf("%.2f" , newMonthly);
    
    cout << endl << "Retroactive Salary Payment: $";
    printf("%.2f" , retroactivePay);

    //8. say goodby to the user.
    cout << endl << "Have a wonderful rest of your day "
         << full_name << "!" << endl;

    return 0;
}

/* 
Hope you're having a fantastic day!
And welcome to using the Salary Calculator.
Let's find out how much retroactive pay you qualify for!

What's your first and last name? David Bates

Welcome David Bates!
Please enter your current annual salary: 3578

Congratulations! You can expect: 
New Annual Salary: $3849.93
New Monthly Salary: $320.83
Retroactive Salary Payment: $135.96
Have a wonderful rest of your day David Bates!
*/