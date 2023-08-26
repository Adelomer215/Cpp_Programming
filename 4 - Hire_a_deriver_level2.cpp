

#include <iostream>

using namespace std;
#include "function.h"
#include "function.cpp"

struct employee
{
  int Age;
  bool HasDerivingLicense;
  bool HasRecommientaion;
};

employee RedInfo();
bool Hair_Driver(employee an_employee);
void Print_Reusalt(bool an_employee);

int main()
{
  Print_Reusalt(Hair_Driver(RedInfo()));
  return 0;
}

employee RedInfo()
{
  employee info;
  info.Age = get_int("Evter your age? ");
  cout << "Do you have Deriving License?\n1 for yes 0 for no: ";
  cin >> info.HasDerivingLicense;
  cout << "Do you have Recommendation?\n1 for yes 0 for no: ";
  cin >> info.HasRecommientaion;
  return info;
}

bool Hair_Driver(employee an_employee)
{
  if (an_employee.HasRecommientaion)
    return true;

  if (an_employee.Age > 21 && an_employee.HasDerivingLicense == true)
  {
    return true;
  }
  else
  {
    return false;
  }
}

void Print_Reusalt(bool an_employee)
{
  an_employee ? cout << "Hired\n" : cout << "Rejected\n";
}