#include <iostream>
using namespace std;

struct Student
{
  char FirstName[100];
  char LastName[100];
  float En;
  float Math;
  float Arabic;
};

Student getInput(int Snumber)
{
  Student s;
  cout << "Wecome stundent number " << Snumber + 1 << "\n";
  cout << "Please enter first name: ";
  cin >> s.FirstName;
  cout << "Please enter last name: ";
  cin >> s.LastName;
  cout << "Please enter math: ";
  cin >> s.Math;
  cout << "Please enter Arabic: ";
  cin >> s.Arabic;
  cout << "Please enter English: ";
  cin >> s.En;

  return s;
};

void PrintAll(int size, Student *s)
{
  for (int i = 0; i < size; i++)
  {
    cout << "#==========================================#" << endl;
    cout << "stundent number " << i + 1 << " Info"
         << "\n";
    cout << "First name: " << s[i].FirstName << endl;
    cout << "Last name: " << s[i].LastName << endl;
    cout << "Math: " << s[i].Math << endl;
    cout << "Arabic: " << s[i].Arabic << endl;
    cout << "English: " << s[i].En << endl;

    int avarage = (s[i].Arabic + s[i].En + s[i].Math) / 3.;
    int top = s[i].Math;
    int low = s[i].Math;
    if (s[i].Arabic > top)
      top = s[i].Arabic;
    if (s[i].En > top)
      top = s[i].En;

    if (s[i].Arabic < low)
      low = s[i].Arabic;
    if (s[i].En < low)
      low = s[i].En;

    cout << "Top subject: " << top << endl;
    cout << "Bottom subject: " << low << endl;

    cout << "Average: " << avarage << endl;
    cout << "#==========================================#" << endl;
  }
}

int main()
{
  int size;
  cout << "How many students? ";
  cin >> size;

  Student *students = new Student[size];

  for (int i = 0; i < size; i++)
  {
    students[i] = getInput(i);
  }

  PrintAll(size, students);
  delete[] students;

  return 0;
}