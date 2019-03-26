#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main(){
    double pay; 
	double grossInc; 
	double netInc;
	double schoolAmount; 
	double bondsAmount;
    double clothesAmount, parentsBondsAmount, hours;
    
    const double TaxRate = 0.14;
    const double ClothesPercentageOfInc = 0.10;
    const double SchoolPercentageOfInc = 0.01;
    const double SavingBonds = 0.25;
    const double ParentsContribution = 0.50;
    
    cout << "Hours worked:"<<endl;
    cin >> hours;
    
    cout << "Hourly rate:"<<endl;
    cin >> pay;
    
    grossInc = hours * pay;
    netInc = grossInc *= TaxRate;
    clothesAmount = netInc * ClothesPercentageOfInc;
    schoolAmount = netInc * SchoolPercentageOfInc;
    netInc -= (clothesAmount + schoolAmount);
    bondsAmount = netInc * SavingBonds;
    parentsBondsAmount = bondsAmount* ParentsContribution;
    
    cout << fixed << showpoint << setprecision(2);
    cout<< "------------------------------------------- \n"; 
    cout << "Gross Income: $" << grossInc << endl;
      
    cout << "Net Income: $" << netInc << endl;
	       
    cout << "Clothes & Accessories: $" << clothesAmount << endl;
	
    cout << "School Supplies: $" << schoolAmount << endl;
	       
    cout << "Savings Bonds: $" << bondsAmount << endl;
      
    cout << "Parents Bonds Co-Contribution: $" <<parentsBondsAmount << endl;
    cout<< "------------------------------------------- \n";  
    
    _getch();
    return 0;
}
