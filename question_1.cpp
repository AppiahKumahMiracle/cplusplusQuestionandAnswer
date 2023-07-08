/* 
One large chemical company pays its salespeople on a commission basis.
The salespeople each receive $200 per week plus 9 percent of their gross sales
for that week. For example, a salesperson who sells $5000 worth of chemicals 
in a week receives $200 plus 9 percent of $5000, or a total of $650.

Develop a C++ program inputs each salesperson's gross sales for last
week and calculates and displays that salesperson's earnings.
Process one salesperson's figures at a time.

/*Author: By Appiah Kumah Miracle
*/
#include <iostream>
using namespace std;
int main(){

      const double fixPay = 200.0;
      double totalPay, extraPay, grossSales;
      string salePersonName;

      cout << "Please, enter your name" << endl;
      cin >> salePersonName;

      cout << "Enter the gross sale of the week" << endl;
      cin >> grossSales;

      // calculate for the extra pay
      extraPay = grossSales * 0.09;
      // calculate for the total pay
      totalPay = fixPay + extraPay;
      // Display the total pay
      cout << "The total earning for " << salePersonName << " for the last week was: $"<< totalPay << endl;
    return 0;
}