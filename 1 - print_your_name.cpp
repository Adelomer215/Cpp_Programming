#include <iostream>
using namespace std;
#include "function.h"
#include "function.cpp"

// version 1
// void PrintYourName(string name);

// int main()
// {
//   PrintYourName("Adel");
//   return 0;
// }
// void PrintYourName(string name)
// {
//   cout << "Hello, " << name << "\n";
// }

// verion 2
void PrintYourName(string name);

int main()
{
  string name = get_string("Enter your name: ");
  PrintYourName(name);
  return 0;
}
void PrintYourName(string name)
{
  cout << "Hello, " << name << "\n";
}
