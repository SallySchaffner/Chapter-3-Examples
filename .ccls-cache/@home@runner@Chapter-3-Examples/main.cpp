// Property Tax - Calculates the annual property tax based on the assess value of the property.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  const double assessmentRate = 0.6;
  const double taxRate = 0.75;
  const double appliedValue = 100.0;

  double actualValue, assessmentValue, propertyTax;

  cout << "Enter the actual value of the property: $";
  cin >> actualValue;

  assessmentValue = actualValue * assessmentRate;
  propertyTax = assessmentValue / appliedValue * taxRate;

  cout << fixed << setprecision(2) << showpoint;
  cout << "Assessed value of the property is $" << setw(7) << assessmentValue << endl;
  cout << "             Property tax owed is $" << setw(7) << propertyTax << endl;
}
