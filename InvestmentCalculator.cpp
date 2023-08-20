//Justin Fanesi InvestmentCalculator.cpp CS210 Project2
#include <iostream>
#include "InvestmentCalculator.h"

using namespace std;

InvestmentCalculator::InvestmentCalculator(double initialInvestment, double monthlyDeposit, double annualInterest, int numberOfYears)
    : m_initialInvestment(initialInvestment), m_monthlyDeposit(monthlyDeposit), m_annualInterest(annualInterest), m_numberOfYears(numberOfYears) {}

void InvestmentCalculator::calculateAndDisplayReport() const {
    cout << "Initial Investment Amount: $" << m_initialInvestment << endl;
    cout << "Monthly Deposit: $" << m_monthlyDeposit << endl;
    cout << "Annual Interest (Compounded): " << m_annualInterest << "%" << endl;
    cout << "Number of Years: " << m_numberOfYears << endl;

    // Year-End Balances and Earned Interest without additional monthly deposits
    cout << "\nYear-End Balances and Earned Interest (No Additional Monthly Deposits):\n";
    double openingAmount = m_initialInvestment;
    double interestRateDecimal = m_annualInterest / 100.0;
    for (int year = 1; year <= m_numberOfYears; ++year) {
        double interest = openingAmount * (interestRateDecimal / 12.0); // Calculate monthly interest
        double closingBalance = openingAmount + interest; // Calculate year-end balance
        cout << "Year " << year << ": $" << closingBalance << " (Earned Interest: $" << interest << ")\n";
        openingAmount = closingBalance; // Set the opening amount for the next year
    }

    // Year-End Balances and Earned Interest with additional monthly deposits
    cout << "\nYear-End Balances and Earned Interest (With Monthly Deposits):\n";
    openingAmount = m_initialInvestment;
    for (int year = 1; year <= m_numberOfYears; ++year) {
        double total = openingAmount + m_monthlyDeposit;
        double interest = total * (interestRateDecimal / 12.0); // Calculate monthly interest
        double closingBalance = total + interest; // Calculate year-end balance
        cout << "Year " << year << ": $" << closingBalance << " (Earned Interest: $" << interest << ")\n";
        openingAmount = closingBalance; // Set the opening amount for the next year
    }
}