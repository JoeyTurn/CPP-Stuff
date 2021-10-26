#include <iostream>
#include <string>
using namespace std;

	int main() {
    string in, user;
    cout << "Would you like Binary to Morse (btm) or Morse to Binary (mtb)?";
    cin >> in;
    cout << "\n";
    
    if (in == "btm") //BTM 
    {
	    cin >> user;
	    for (unsigned int i = 0; i < user.length(); i+=2){ //Starts checking characters loop
	        if (user.at(i) == '1' && user.at(i+1) == '1') { //Printing - if 1110 is inputed
	            cout << "-";
	            i += 2;
	        }
	   
	        else if (user.at(i) == '1' && user.at(i+1) == '0') //Printing . if 10 is inputed
	        cout << ".";
	   
	        else //Printing " " if 00 is inputed
	        cout << " ";
	    } //End loop
    } //End BTM
    
    else
        return 0;
}
