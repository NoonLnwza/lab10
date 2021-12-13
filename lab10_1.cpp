#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;
double loan;
double rate;
double pay;
int i=1;
double a;
double b;
double c;
double d;
double e;
int main(){	
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;

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
	a=loan;
	while(1){	
		
		b=a*(rate/100);
		c=a+b;
		d=pay;
		if(c<d){
			d=c;
		}
		e=c-d;
		cout << fixed << setprecision(2); 
		cout << setw(13) << left << i;
		i++;
		cout << setw(13) << left << a;
		cout << setw(13) << left << b;
		cout << setw(13) << left << c;
		cout << setw(13) << left << d;
		cout << setw(13) << left << e;
		cout << "\n";
		a=e;
		
		if(e<=0){
			break;
		}
	}
		
	return 0;
}
