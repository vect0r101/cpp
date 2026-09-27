#include <iostream>
using namespace std;


int main()
{
    int loanAmount,interestRate,totalAmount;

    cout << "Enter Your Loan Amount:";
    cin >> loanAmount;

    cout << "Entern Interest Amount:";
    cin >> interestRate;

    totalAmount = loanAmount + interestRate;

    cout << "Your Total Loan Amount is: " << totalAmount;
    return 0;

}