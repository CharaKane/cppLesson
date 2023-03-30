#include <iostream>

using namespace std;

int main() {
	
	int p;
	float t, telt;
	
	cout << "Dwse posothta kai timh:\n " << endl;
	cin >> p >> t;

    while (p<0){
        cout << "Dwse alli posothta :\n " << endl;
	    cin >> p ;
    }
     while (t<0){
        cout << "Dwse alli timh :\n " << endl;
	    cin >> t ;
    }
 
      telt=p*t;

	   if(p>100)
        telt=telt*0.75;
       else if(p>=80) 
         telt=telt*0.85;
	   else if(p>20)
        telt=telt*0.9;
	   else
        cout << telt << endl;
      cout << "To teliko kostos einai:\n " << telt  << "$\n\n" <<  endl;
	
	return 0;
}
