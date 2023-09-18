#include <iostream>
using namespace std;
#include "function.h"
#include "function.cpp"

void Read_Values(int &f, int &h);
void get_friends_tall(int arr[], int size);
int calc_resualt(int arr[], int size, int hight_of_fence);

int main()
{
  int friends, hight_of_fence, resualt = 0;
  Read_Values(friends, hight_of_fence);
  int *frendsTalls = new int[friends];

  get_friends_tall(frendsTalls, friends);
  resualt = calc_resualt(frendsTalls, friends, hight_of_fence);
  cout << "The resualt is: " << resualt << "\n";

  delete[] frendsTalls;
  return 0;
}

void Read_Values(int &f, int &h)
{
  f = get_int("Enter the numbers of friends: ");
  h = get_int("Enter the hight of fence: ");
}

void get_friends_tall(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << "Enter the tall of friend number " << i + 1;
    arr[i] = get_int(" : ");
  }
}

int calc_resualt(int arr[], int size, int hight_of_fence)
{
  int sum = 0;

  for (int i = 0; i < size; i++)
  {
    if (arr[i] > hight_of_fence)
    {
      sum += 2;
    }
    else
    {
      sum += 1;
    }
  }

  return sum;
}