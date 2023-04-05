#include <iostream>
using namespace std;

int main(){
	
	int x;
	int*xPtr;
	x=5;
	xPtr=&x;
	
cout << "H timi tou x einai:\n" << x << endl;
cout << "H dieuthinsi tou x einai:\n" << &x << endl;
cout << "H timi tou xPtr einai:\n" << xPtr  << endl;
cout << "H dieuthinsi tou xPtr einai:\n" << &xPtr <<endl;
cout << "H timi tou *xPtr einai:\n" << *xPtr <<endl;
cout << "Showing that * and & are inverses of\n" << "each other .\n &*xPtr=" << &*xPtr<< "\n *&xPtr=" <<*&xPtr << endl;
cout << endl;
return 0;
}
