#include <iostream>
using namespace std;
#include "function.h"
#include "function.cpp"

int ReadNumber();
float ClacNumber(int n);
void PrintResult(int n);

int main()
{
  PrintResult(ReadNumber());
  return 0;
}

int ReadNumber()
{
  int number = get_int("Enter Number: ");
  return number;
}

float ClacNumber(int n)
{
  return n / 2.;
}

void PrintResult(int n)
{
  string Resualt = "The Half of " + to_string(n) + " is: " + to_string(ClacNumber(n));
  cout << Resualt << "\n";
}