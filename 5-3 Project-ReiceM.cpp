//Project 5-3
//Reice Morgan
//CS-210
//Due: 6/7/2025

#include <iostream>
#include <iomanip>
using namespace std;

// Class to handle investment calculations and reports
class InvestmentCalculator {
private:
    // Private data members to store user input
    double initialInvestment;
    double monthlyDeposit;
    double annualInterest;
    int numYears;

public:
    // Method to collect user input
    void collectUserInput() {
        // Display application header
        cout << "\n==========================================" << endl;
        cout << "=     Airgead Banking Investment App     =" << endl;
        cout << "==========================================\n" << endl;

        // Prompt user for investment information
        cout << "Enter Initial Investment Amount: $";
        cin >> initialInvestment;

        cout << "Enter Monthly Deposit: $";
        cin >> monthlyDeposit;

        cout << "Enter Annual Interest Rate (in %): ";
        cin >> annualInterest;

        cout << "Enter Number of Years: ";
        cin >> numYears;
    }

    // Method to display report without monthly deposits
    void displayReportWithoutMonthlyDeposits() {
        double totalAmount = initialInvestment;
        double interestEarned;

        // Display report header
        cout << "\n\n   Balance and Interest Without Additional Monthly Deposits" << endl;
        cout << "===========================================================" << endl;
        cout << "Year\tYear End Balance\tInterest Earned" << endl;
        cout << "-----------------------------------------------------------" << endl;

        // Loop through each year and calculate interest
        for (int year = 1; year <= numYears; ++year) {
            interestEarned = totalAmount * (annualInterest / 100);
            totalAmount += interestEarned;
            // Display yearly balance and interest
            cout << year << "\t$" << fixed << setprecision(2) << totalAmount
                 << "\t\t$" << interestEarned << endl;
        }
    }

    // Method to display report with monthly deposits
    void displayReportWithMonthlyDeposits() {
        double totalAmount = initialInvestment;
        double monthlyInterestRate = (annualInterest / 100) / 12;
        double interestEarned;

        // Display report header
        cout << "\n\n   Balance and Interest With Additional Monthly Deposits" << endl;
        cout << "========================================================" << endl;
        cout << "Year\tYear End Balance\tInterest Earned" << endl;
        cout << "--------------------------------------------------------" << endl;

        // Loop through each year
        for (int year = 1; year <= numYears; ++year) {
            interestEarned = 0.0;
            // Loop through each month
            for (int month = 1; month <= 12; ++month) {
                // Add monthly deposit and calculate interest
                totalAmount += monthlyDeposit;
                double interest = totalAmount * monthlyInterestRate;
                interestEarned += interest;
                totalAmount += interest;
            }
            // Display yearly balance and total interest
            cout << year << "\t$" << fixed << setprecision(2) << totalAmount
                 << "\t\t$" << interestEarned << endl;
        }
    }
};

// Main function to run the application
int main() {
    // Create an instance of the calculator
    InvestmentCalculator calc;
    // Gather user input
    calc.collectUserInput();
    // Display report without monthly deposits
    calc.displayReportWithoutMonthlyDeposits();
    // Display report with monthly deposits
    calc.displayReportWithMonthlyDeposits();
    return 0; // End program
}
