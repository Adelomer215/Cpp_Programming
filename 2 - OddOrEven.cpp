#include <iostream>
#include <string.h>

using namespace std;
#include "function.h"
#include "function.cpp"

string CheckNum();
void PrintNumType(string type);

int main()
{
  PrintNumType(CheckNum());
  return 0;
}

string CheckNum()
{
  int num = get_int("Enter your number: ");
  // check the num is positiv
  if (num < 0)
    num = num * -1;

  if (num % 2 == 0)
  {
    return "Even";
  }
  else
  {
    return "Odd";
  }
};

void PrintNumType(string s)
{
  cout << "Your numbr is " << s << ".";
}