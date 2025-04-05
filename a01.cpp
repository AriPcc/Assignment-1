/******************************************************************************
# Author:           Ari P.
# Assignment:       Assignment 1
# Date:             April 5, 2025
# Description:      This program calculates weekly pay and federal withheld tax
                    from an hourly wage, tax rate, and number of hours worked.
# Input:            employeeNum (int), hoursWorked (int), hourlyRate (int),
                    taxRate (int)
# Output:           employeeNum (int), wagesPreTax (int), amountTaxed (int),
                    wagesFinal (int)
# Sources:          Assignment 1 specifications, assignment 1 sample
#*****************************************************************************/

// This is a reference to remind me when to use \ for line continuation
/////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

int main() {
   // Declare and initialize variables for employee's ID, pay per hour, number
   // of hours worked, and percentage of pay withheld.
   int employeeNum = 0;
   int hoursWorked = 0;
   int hourlyRate = 0;
   int taxRate = 0;
   // Declare and initialize variables for employee's weekly pay pre-tax, after
   // tax, and amount withheld.
   int wagesPreTax = 0;
   int amountTaxed = 0;
   int wagesFinal = 0;

   // Display a welcome message
   cout << "This program will calculate your weekly pay before and after adjus\
ting for federal income taxes." << endl;

   // Prompt the user for their information
   cout << "Please answer all prompts with whole numbers only!" << endl;
   cout << "Enter employee ID number: ";
   cin >> employeeNum;
   cout << "Enter number of hours worked: ";
   cin >> hoursWorked;
   cout << "Enter hourly rate: ";
   cin >> hourlyRate;
   cout << "Enter federal withholding rate: ";
   cin >> taxRate;
   cout << endl << endl;

   // Calculate the values to be displayed
   wagesPreTax = hoursWorked * hourlyRate;
   amountTaxed = wagesPreTax / taxRate;
   wagesFinal = wagesPreTax - amountTaxed;

   // Display the user's payroll summary
   cout << "Payroll Summary for Employee " << employeeNum << endl;
   cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\
~~~~~~~~~~~~~~" << endl;
   cout << "Total Gross Pay: $" << wagesPreTax << endl;
   cout << "Federal Tax Withholding: $" << amountTaxed << endl;
   cout << "Net Pay: $" << wagesFinal << endl << endl;

   // Display a goodbye message
   cout << "Thanks for using this calculator, and don’t forget to do your taxe\
s.";
   return 0;
}
