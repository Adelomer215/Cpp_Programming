#include <iostream>
using namespace std;

int main()
{
  int problems;
  cin >> problems;

  int resalt = 0;

  for (int i = 0; i < problems; i++)
  {
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b + c >= 2)
      resalt++;
  }
  cout << resalt;

  return 0;
}
