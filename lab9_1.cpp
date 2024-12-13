#include<iostream>
#include<cmath>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

double A, B, C;
int main(){
	cout << "Enter initial loan: ";
	cin >> A;
	cout << "Enter interest rate per year (%): ";
	cin >> B;
	cout << "Enter amount you can pay per year: ";
	cin >> C;

    B /= 100.0;
    double balance = A;
    int year = 1;
	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	
	while(balance > 0){
	    double interest = balance*B;
	    double Total = balance + interest;
	    double payment = (Total < C) ? Total : C;
	    double newBalance = Total - payment;
	    
	    cout << fixed << setprecision(2);
	    cout << setw(13) << left << year;
	    cout << setw(13) << left << balance;
	    cout << setw(13) << left << interest;
	    cout << setw(13) << left << Total;
	    cout << setw(13) << left << payment;
	    cout << setw(13) << left << newBalance;
	    balance = newBalance;
	    year++;
	    cout << "\n";
	}
	
	return 0;
}