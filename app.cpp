#include <iostream>
using namespace std;

int main()
{
 // User Rank Checker App

  int points;
  cin >> points;

  if (points > 0 && points <= 500)
  {
    cout << "Your Rank is Not Bad\n";
  }
  else if (points > 500 && points <= 1000)
  {
    cout << "Your Rank is Very Good\n";
  }
  else
  {
    cout << "VIP\n";
  }
    return 0;
}