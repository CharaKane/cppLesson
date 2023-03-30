#include <iostream>

using namespace std;

int main(){

char v;

cout << "Dose ton vathmo sou:\n" << endl;
cin >> v;

switch(v) {
   case 'A' :
cout << "EXCELLENT" << endl;
break;

   case 'a' :
cout << "EXCELLENT" << endl;
break;

   case 'B' :
cout << "VERY GOOD" << endl;
break;

   case 'b' :
cout << "VERY GOOD" << endl;
break;

   case 'C' :
cout << "GOOD" << endl;
break;

   case 'c' :
cout << "GOOD" << endl;
break;

   case 'D' :
cout << "PASS" << endl;
break;

  case 'd' :
cout << "PASS" << endl;
break;

   case 'E' :
cout << "FAIL" << endl;
break;

   case 'e' :
cout << "FAIL" << endl;
break;
}

  return 0;
}
