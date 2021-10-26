#include <iostream>
#include <string>
using namespace std;

int main()
{
  int num, right = rand() % 101, t;
  cout << "Try to find a number between 0 and 100" << endl;
  cout << "1st guess: ";
  cin >> num;
  for( int i = 2;num != right; i++) {
      if (num < right)
      cout << "Higher" << endl;
      else
      cout << "Lower" << endl;
      
      cout << "Try #" << i << ": ";
      cin >> num;
      t=i;
      
    }
    cout << "Correct! The number was " << right << "." << endl;
    cout << "It took you " << t << "tries.";
}
