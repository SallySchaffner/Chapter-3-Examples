// Senior Property Tax - Calculates the annual property tax based on the assess value of the property and senior
//                       citizen discounts and calculates the quarterly payment. 
//

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  const double assessmentRate = 0.6;
  const double taxRate = 2.64;
  const double appliedValue = 100.0;
  const double seniorDiscount = 5000;
  const int paymentPeriods = 4;

  double actualValue, assessmentValue, propertyTax, quarterlyPayment;

  cout << "Enter the actual value of the property: $";
  cin >> actualValue;

  assessmentValue = actualValue * assessmentRate;
  assessmentValue -= seniorDiscount;
  propertyTax = assessmentValue / appliedValue * taxRate;
  quarterlyPayment = propertyTax / paymentPeriods;

  cout << fixed << setprecision(2) << showpoint;
  cout << "  Annual tax bill is $" << setw(7) << propertyTax << endl;
  cout << "Quarterly payment is $" << setw(7) << quarterlyPayment << endl;
}
