#include <iostream>
#include <string>
using namespace std;

string get_string(string propot)
{
  string answer;
  cout << propot;
  getline(cin, answer);

  return answer;
}
int get_int(string propot)
{
  int answer;
  cout << propot;
  cin >> answer;

  return answer;
}
float get_float(string propot)
{
  float answer;
  cout << propot;
  cin >> answer;

  return answer;
}
