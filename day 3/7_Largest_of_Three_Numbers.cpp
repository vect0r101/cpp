#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
     cout <<"Choose a:";
     cin >> a;

     cout << "Choose b:";
     cin >> b;

     cout << "Choose c:";
     
     cin >> c;

     if (a > b && a > c)
    {
        cout << "a is the largest.";
    }
    else if (b > a && b > c)
    {
        cout << "b is the largest.";
    }
    else
    {
        cout << "c is the largest.";
    }

return 0;
}