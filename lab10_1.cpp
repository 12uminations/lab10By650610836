#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
    double iloan,irate,money;
	cout << "Enter initial loan: ";
	cin >> iloan;
	cout << "Enter interest rate per year (%): ";
	cin >> irate;
	cout << "Enter amount you can pay per year: ";
	cin >> money;

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
	double newB = 1;
	double prevB = iloan;
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	for(int i=1;newB != 0;i++){
	    double interest = (irate/100)*prevB;
	    double total = prevB+interest;
	    double newB = total - money;
	    if(total < money){
	        money = total;
	        newB=0;
	    cout << fixed << setprecision(2); 
	    cout << setw(13) << left << i; 
	    cout << setw(13) << left << prevB;
	    cout << setw(13) << left << interest;
	    cout << setw(13) << left << total;
	    cout << setw(13) << left << money;
	    cout << setw(13) << left << newB;
	    cout << "\n";
	    break;
	    }
	    cout << fixed << setprecision(2); 
	    cout << setw(13) << left << i; 
	    cout << setw(13) << left << prevB;
	    cout << setw(13) << left << interest;
	    cout << setw(13) << left << total;
	    cout << setw(13) << left << money;
	    cout << setw(13) << left << newB;
	    cout << "\n";
	    newB=newB;
	    prevB = newB;

	    
	}
	return 0;
}
