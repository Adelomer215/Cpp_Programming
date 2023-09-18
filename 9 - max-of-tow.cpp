#include <iostream>
using namespace std;
#include "function.h"
#include "function.cpp"

void ReadNumbers(int &num1, int &num2);
int MaxOf2Numbers(int n1, int n2);
void PrintResualts(int max);

int main()
{
  int x, y;
  ReadNumbers(x, y);
  PrintResualts(MaxOf2Numbers(x, y));
  return 0;
}

void ReadNumbers(int &num1, int &num2)
{
  num1 = get_int("Enter num1: ");
  num2 = get_int("Enter num2: ");
}

int MaxOf2Numbers(int n1, int n2)
{
  return n1 > n2 ? n1 : n2;
}

void PrintResualts(int max)
{
  cout << "The Maximum Number is: " << max << "\n";
}