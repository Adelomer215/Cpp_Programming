#include <iostream>
using namespace std;
#include "function.h"
#include "function.cpp"

int main()
{
  int Numbers = get_int("How many numbers do you have: ");
  int *NumbersArray = new int[Numbers];

  // for loop to get the numbers
  for (int i = 0; i < Numbers; i++)
  {
    cout << "Value of item number " << i + 1;
    NumbersArray[i] = get_int(" is: ");
  }

  int max = 0;
  for (int i = 0; i < Numbers; i++)
  {
    if (max < NumbersArray[i])
      max = NumbersArray[i];
  }

  cout << "The maximum number is: " << max << "\n";
  delete[] NumbersArray;
  return 0;
}