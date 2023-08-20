//Justin Fanesi InvestmentCalculator.h CS210 Project2
#ifndef INVESTMENTCALCULATOR_H
#define INVESTMENTCALCULATOR_H

class InvestmentCalculator {
private:
    double m_initialInvestment;
    double m_monthlyDeposit;
    double m_annualInterest;
    int m_numberOfYears;

public:
    InvestmentCalculator(double initialInvestment, double monthlyDeposit, double annualInterest, int numberOfYears);
    void calculateAndDisplayReport() const;
};

#endif // INVESTMENTCALCULATOR_H
