#include <iostream>
using namespace std;
#include "function.h"
#include "function.cpp"

enum enumDegree
{
  Pass = 1,
  Fial = 0
};

enumDegree CheckMark();
void PrintResults(enumDegree mark);

int main()
{
  PrintResults(CheckMark());
  return 0;
};

enumDegree CheckMark()
{
  // Read Marks
  float m;
  do
  {
    m = get_float("Enter Mark? ");
  } while (m > 100 || m < 0);

  if (m >= 50)
  {
    return enumDegree::Pass;
  }
  else
  {
    return enumDegree::Fial;
  }
}

void PrintResults(enumDegree mark)
{
  if (mark == 1)
  {
    cout << "You Passed\n";
  }
  else
  {
    cout << "You Faild\n";
  }
}