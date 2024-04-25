/*	Author:		Michelle Blackman
	Project 2:	Airgead Banking App
	Date:		April 6, 2024
*/

#pragma once
#ifndef AIRGEADBANKINGAPP_H_
#define AIRGEADBANKINGAPP_H_
#include <string>

using namespace std;

class airgeadBanking {		//class
	airgeadBanking();		//empty constructor
private:					//access specifiers
	double initialInv;
	double monthlyDep;
	double interestRate;
	int numYears;

public:
	airgeadBanking(double initialInv, double monthlyDep, double interestRate, int numYears);		//parametered constructor
	void reportWithDep() const ;		//method/function declarations
	void reportWithoutDep() const;
};

#endif // AIRGEADBANKINGAPP_H_