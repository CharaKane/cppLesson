#include <iostream>

using namespace std;

int main(){

int a, b;
char p;


cout << "Dose duo arithmous:\n" << endl;
cin >> a >> b ;

while (a<b){
	cout << "Dose allous arithmous:\n" << endl;
	cin >> a >> b;
}

cout << "Dose tin praji:\n" << endl;
cin >> p;

switch(p) {
   case '+' :
cout << "To athrisma einai: \n" << a+b << endl;
break;

   case '-' :
cout << "H diafora einai:\n" << a-b << endl;
break;

   case '*' :
cout << "To ginomeno einai:\n" << a*b << endl;
break;

   case '/' :
cout << "To apotelesma tis diairesis einai:\n" << a/b << endl;
break;


}

  return 0;
}
