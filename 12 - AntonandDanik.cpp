#include <iostream>
using namespace std;
#include "function.h"
#include "function.cpp"

void Get_chars(string &s, int size);
string Resualt(int a, int d);

int main()
{
  int anton = 0, danik = 0;
  int size = get_int("How many chars you will enter? ");

  // creaet s string to hold the cahrs and loop to get char from user
  string s;
  Get_chars(s, size);

  for (int i = 0; i < size; i++)
  {
    if (s[i] == 'a' || s[i] == 'A')
    {
      anton++;
    }
    else if (s[i] == 'd' || s[i] == 'D')
    {
      danik++;
    }
  };
  cout << Resualt(anton, danik) << "\n";

  return 0;
}

void Get_chars(string &s, int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << "Enter cahr number " << i + 1 << " : ";
    cin >> s[i];
  }
}
string Resualt(int a, int d)
{
  if (a > d)
  {
    return "Anton win with " + to_string(a) + " chars.";
  }
  else if (a < d)
  {
    return "Danik win with " + to_string(d) + " chars.";
  }
  else
  {
    return "Friendship";
  }
}