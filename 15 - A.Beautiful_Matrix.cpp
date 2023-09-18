#include <iostream>
using namespace std;

int main()
{
  int row = 5, col = 5;
  for (int r = 0; r < 5; r++)
  {
    for (int c = 0; c < 5; c++)
    {
      cout << r << c << ' ';
    }
    cout << "\n";
  }

  return 0;
}
