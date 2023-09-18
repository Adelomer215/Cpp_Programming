#include <iostream>
using namespace std;

int main()
{
  string str;
  cout << "Enter your string: ";
  cin >> str;
  int strLength = 0;
  while (str[strLength] != '\0')
  {
    strLength++;
  }
  string reversString = "";
  for (int i = strLength - 1; i >= 0; i--)
  {
    reversString += str[i];
  }
  cout << reversString << "\n";
  return 0;
}