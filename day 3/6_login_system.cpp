#include <iostream>
using namespace std;

int main()
{
    int securityLevel;
    bool isLoggedIn = true;
    bool isAdmin = false;
    cout << "Choose the security level:";
    cin >> securityLevel;

    if (isLoggedIn && (isAdmin ||  securityLevel <= 2))
    {
        cout << "Access granted.";
    }
    else
    {
        cout << "Access denied.";
    }
    
}