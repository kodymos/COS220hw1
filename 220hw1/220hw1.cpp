/*
COS220_Homework1
Programmer: Kody Moseley
Description: This program takes and defines user inputs,
as doubles, in order to help students create
an expense budget chart. Users input a monthly
goal. Users input monthly costs that are
summed along with a constant car payment, as
total expenses. Percentages are calculated.
Leftover amounts are calculated. Outputs are
displayed in organized columns.
*/

#include "stdafx.h"
#include <iostream>
#include <iomanip>      

using namespace std;

int main()
{

	
	const double CAR_PAYMENT = 325.75;		//constant CAR_PAYMENT
	
	//all user inputs initialized to 0
	double monthlyGoal = 0.00;				//userinput for student's goal
	double rent = 0.00;						//userinput for rent
	double utilities = 0.00;				//userinput for utilities
	double transporation = 0.00;			//userinput for transportation
	double foodCosts = 0.00;				//userinput for food costs

	double totalExpense = 0.00;				//total expenses from above
	double leftOver = 0.00;					//letfover = goal - expenses below
	
	//outputs used to get user input
	//inputs saved to above variables
	cout << (double)2.00 + 6.0 << endl;

	cout << "Kody Moseley COS220 HW1\n\nEnter monthly expense goal: ";
	cin >> monthlyGoal;
	cout << "Enter rent: ";
	cin >> rent;
	cout << "Enter utilities: ";
	cin >> utilities;
	cout << "Enter transportation: ";
	cin >> transporation;
	cout << "Enter food costs: ";
	cin >> foodCosts;
	
	//math used to calculate total expense and left over amount
	totalExpense = rent + utilities + transporation + foodCosts + CAR_PAYMENT;
	leftOver = monthlyGoal - totalExpense;

	//chart header and cout allignment, rounding for percentages
	cout << "\nBudget Chart for Student\n";
	cout << setprecision(2) << right << fixed;

	//outputs for charts, all centered nicely in columns 
	//percentage = (userInput / total expenses) * 100 to move decimal 2 places left
	cout << "Expense" << setw(15) << 
		"Amount" << setw(15) << 
		"Percent %" << endl;
	cout << "Car Payment" << setw(11) << 
		CAR_PAYMENT << setw(11) << 
		(CAR_PAYMENT / totalExpense) * 100 << endl;
	cout << "Rent" << setw(18) << 
		rent << setw(11) << 
		(rent / totalExpense) * 100 << endl;
	cout << "Utilities" << setw(13) << 
		utilities << setw(11) << 
		(utilities / totalExpense) * 100 << endl;
	cout << "Transportation" << setw(8) << 
		transporation << setw(10) << 
		(transporation / totalExpense) * 100 << endl;
	cout << "Food" << setw(18) << 
		foodCosts << setw(11) << 
		(foodCosts / totalExpense) * 100 << endl;

	cout << "\nExpense Goal " << setw(10) << monthlyGoal << endl;	//output user input goal
	cout << "Total Expenses " << setw(8) << totalExpense << endl;	//output total expenses
	cout << "Leftover Amount " << setw(6) << leftOver << endl;		//outout goal - expenses = leftover
	
	return 0;
	
}
