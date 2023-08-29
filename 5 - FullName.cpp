#include <iostream>
using namespace std;
#include "function.h"
#include "function.cpp"

struct setFullName
{
  string FirstName;
  string LastName;
};

setFullName ReadInfo();
string GetfullName(setFullName fullname, bool Reversed);
void PrintFullName(string fullname);

int main()
{
  PrintFullName(GetfullName(ReadInfo(), 0));
  return 0;
}

setFullName ReadInfo()
{
  setFullName Person;
  Person.FirstName = get_string("First Name: ");
  Person.LastName = get_string("Last Name: ");
  return Person;
};

string GetfullName(setFullName fullname, bool Reversed)
{
  return Reversed ? fullname.LastName + " " + fullname.FirstName : fullname.FirstName + " " + fullname.LastName;
}

void PrintFullName(string fullname)
{
  cout << fullname;
}