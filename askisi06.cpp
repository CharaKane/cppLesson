#include <iostream>

using namespace std;

int main() {
	
	int p;
	float t;
	
	cout << "Dwse posothta kai timh:\n " << endl;
	cin >> p >> t;
	cout << "Kostos:\n " <<  endl;
	   if(p>100)
         cout << p * t - p * t * 0.25 << endl;
       else if(p>=80) 
         cout << p * t - p * t * 0.15 << endl;
	   else if(p>20)
        cout << p * t - p * t * 0.1 << endl;
	   else
        cout << p * t << endl;
 
	   cout << "$\n\n" << endl; 
	return 0;
}
