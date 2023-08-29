#include <iostream>
using namespace std;
#include "function.h"
#include "function.cpp"

void ReadNumbers(int &n1, int &n2, int &n3);
int SumOf3Numbers(int n1, int n2, int n3);
float AvargeOf3Numbers(int sum);
void PrintAvarage(float avarge);

int main()
{
  int n1, n2, n3;
  ReadNumbers(n1, n2, n3);
  PrintAvarage(AvargeOf3Numbers(SumOf3Numbers(n1, n2, n3)));

  return 0;
};

void ReadNumbers(int &n1, int &n2, int &n3)
{
  n1 = get_int("Number 1: ");
  n2 = get_int("Number 2: ");
  n3 = get_int("Number 3: ");
}

int SumOf3Numbers(int n1, int n2, int n3)
{
  return n1 + n2 + n3;
}
float AvargeOf3Numbers(int sum)
{
  return sum / 3.;
}

void PrintAvarage(float avarge)
{
  cout << "The Avarge is: " << avarge << "\n";
}