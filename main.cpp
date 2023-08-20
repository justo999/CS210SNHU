//Justin Fanesi main.cpp CS210 Project2
#include <iostream>
#include "InvestmentCalculator.h"
using namespace std;

int main() {
    double initialInvestment, monthlyDeposit, annualInterest;
    int numberOfYears;

    // Prompt the user to input initialInvestment
    cout << "Enter Initial Investment Amount: $";
    cin >> initialInvestment;

    // Prompt the user to input monthlyDeposit
    cout << "Enter Monthly Deposit: $";
    cin >> monthlyDeposit;

    // Prompt the user to input annualInterest
    cout << "Enter Annual Interest (Compounded): ";
    cin >> annualInterest;

    // Promt the user to enter the numberOfYears
    cout << "Enter Number of Years: ";
    cin >> numberOfYears;

    // Create an instance of InvestmentCalculator with user-provided input
    InvestmentCalculator calculator(initialInvestment, monthlyDeposit, annualInterest, numberOfYears);

    // Calculate and display the investment report
    calculator.calculateAndDisplayReport();

    // Prompt the user to press any key to continue before the program exits
    cout << "\nPress any key to continue...";
    cin.ignore();
    cin.get();

    return 0;
}
