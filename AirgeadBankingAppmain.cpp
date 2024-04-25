#include "AirgeadBankingApp.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {			//driver for display operation
	while (1) {
		cout << "Data Input" << endl;
		cout << "Initial Investment Amount:" << endl;
		cout << "Monthly Deposit:" << endl;
		cout << "Interest Rate Percentage:" << endl;
		cout << "Number of Years:" << endl;

		system("pause");
		cout << endl;
		cout << endl;

		cout << "Data Input" << endl;
		cout << "Initial Investment Amount: $";

		double initialInv;			//initializations
		double monthlyDep;
		double interestRate;
		int numYears;

		cin >> initialInv;

		cout << "Monthly Deposit: $";
		cin >> monthlyDep;

		cout << "Interest Rate Percentage: %";
		cin >> interestRate;
		
		cout << "Number of Years: ";
		cin >> numYears;

		system("pause");

		airgeadBanking myCurrentInv = airgeadBanking(initialInv, monthlyDep, interestRate, numYears);		//object creation

		cout << endl;

		myCurrentInv.reportWithoutDep();		//method callling
		cout << endl;

		if (monthlyDep > 0) {
			myCurrentInv.reportWithDep();
		}

		cout << endl;
		cout << "Do you want to try another option? (y/n): ";

		string option;

		cin >> option;

		if (option != "y") {
			break;
		}

		cout << endl;
	}

	return 0;
}