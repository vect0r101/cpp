#include <iostream>
using namespace std;

int main()
{
  int Rice;
  int Oil;
  int Sugar;
  int totalBill;

  cout << "Enter Rice price:";
  cin >> Rice;

  cout << "Enter Oil Price:";
  cin >> Oil;

  cout <<"Enter Sugar Price:";
  cin >> Sugar;

 totalBill = Rice + Oil + Sugar; 

cout << "Your total bill is " << totalBill;

return 0;

}