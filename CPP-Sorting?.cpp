#include <iostream>
#include <string>
using namespace std;

int main()
{
  int len=1, a, b, len2;
  cout << "How many elements would you like in the list: ";
  cin >> len;
  cout << "" << endl;
  //Sets number of elements in array
  
  int list[len], l2[len]; //Defines array length
  len2 = len^3 + 1; //For later calculation
  
  for (int x = 0; x < len; x++) {
      cout << "Number " << x+1 << ": ";
      cin >> a;
      list[x] = a;
      cout << "" << endl;
      l2[x] = list[x];
  }
  //Number inputs
  
  cout << "Sorting..." << endl;
  
  for (int y = 0; y < len2; y++) {
  for (int x = 0; x < len; x++) {
    b = x-1;
    for (;list[x] < list[b] && x!=0;) {
        l2[b]=list[x];
        l2[x]= list[b];
        list[b]=l2[b];
        list[x]=l2[x];
    }
  }
  //Sorting
  
  }
  for (int y = 0; y < len; y++) {
      cout << list[y] << " ";
  }
  //Outputs ordered list
}
