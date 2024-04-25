#include "AirgeadBankingApp.h"
#include <iostream>
#include <iomanip>

using namespace std;

airgeadBanking::airgeadBanking(double initialInv, double monthlyDep, double interestRate, int numYears) {		//method/function definition outside class
	this->initialInv = initialInv;			//pointers
	this->monthlyDep = monthlyDep;
	this->interestRate = interestRate;
	this->numYears = numYears;
}

void airgeadBanking::reportWithDep() const {		//method/function definition outside class for display
	cout << endl;
	cout << "Balances and Interest with Monthly Deposits" << endl;
	cout << endl;

	cout << setw(10) << "Year" << setw(27) << "Year-End Balance" << setw(35) << "Year-End Interest Earned" << endl;
	cout << endl;

	int currentYear = 1;
	double yearEndBal = this->initialInv;

	while (currentYear <= this->numYears) {
		int month = 1;
		double earnedInt = 0;
		double monthEndBal = yearEndBal;

		while (month <= 12) {
			monthEndBal += this->monthlyDep;
			double monthlyInt = monthEndBal * this->interestRate / (100 * 12);
			earnedInt += monthlyInt;
			monthEndBal += monthlyInt;
			month++;
		}

		yearEndBal = monthEndBal;

		cout << right << setw(10) << currentYear << fixed << setprecision(2);
		cout << setw(27) << yearEndBal << setw(35) << earnedInt << endl;
		currentYear++;
	}

	cout << endl;
}

void airgeadBanking::reportWithoutDep() const {			//method/function definition outside class for display
	cout << endl;
	cout << "Balances and Interest without Monthly Deposits" << endl;
	cout << endl;

	cout << setw(10) << "Year" << setw(27) << "Year-End Balance" << setw(35) << "Year-End Interest Earned" << endl;
	cout << endl;

	int currentYear = 1;
	double yearEndBal = this->initialInv;

	while (currentYear <= this->numYears) {
		double earnedInt = yearEndBal * this->interestRate / 100;
		yearEndBal += earnedInt;

		cout << right << setw(10) << currentYear << fixed << setprecision(2);
		cout << setw(27) << yearEndBal << setw(35) << earnedInt << endl;
		currentYear++;
	}

	cout << endl;
}