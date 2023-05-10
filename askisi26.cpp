#include <iostream>

using namespace std;

class MyClass{
	public:
		int x;
		int y;
};


int main(){
	
	
	MyClass myObj;
	myObj.x = 25;
	myObj.y = 50;
	
	cout << myObj.x << endl << myObj.y <<endl;
}
