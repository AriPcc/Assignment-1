/******************************************************************************
# Author:           Ari P.
# Assignment:       Assignment 1
# Date:             April 5, 2025
# Description:      This program calculates weekly pay and federal withheld tax
                    from an hourly wage, tax rate, and number of hours worked.
# Input:            employeeNum (int), hoursWorked (int), hourlyRate (int),
                    taxRate (double)
# Output:           employeeNum (int), wagesPreTax (double), amountTaxed (double),
                    wagesFinal (double)
# Sources:          Assignment 1 specifications, assignment 1 sample
#*****************************************************************************/

// This is a reference to remind me when to use \ for line continuation
/////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   // Declare and initialize variables for employee's ID, pay per hour, number
   // of hours worked, and percentage of pay withheld.
   int employeeNum = 0;
   int hoursWorked = 0;
   int hourlyRate = 0;
   double taxRate = 0.0;
   // Declare and initialize variables for employee's weekly pay pre-tax, after
   // tax, and amount withheld.
   double wagesPreTax = 0;
   double amountTaxed = 0;
   double wagesFinal = 0;

   // Set decimal precision for output
   cout << fixed << setprecision(2);

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
   amountTaxed = (taxRate / 100) * wagesPreTax;
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
