#include <iostream>
using namespace std;

int main()
{
    int birthYear;
    int currentYear;
    int age;

    cout << "Enter your birth year: ";
    cin >> birthYear;

    cout << "Enter the current year: ";
    cin >> currentYear;

    age = currentYear - birthYear;

    cout << "You are " << age << " years old." << endl;
    return 0;
}