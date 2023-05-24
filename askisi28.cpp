#include <iostream>

using namespace std;

class printData{
	public:
		void print(int i){
			cout << "Printing int:" << i << endl;
		}
		void print(double f){
			cout << "Printing float:" << f << endl;
		}
		void print(char* c){
			cout << "Printing character:" << c << endl;
		}
};

int main(void){
	int x;
	float y;
	char a[10];
	cout <<"Dose akeraio, dekadiko kai xaraktira:" << endl;
	cin>> x >> y >> a;
 printData p1;	 
   p1.print(x);
   p1.print(a);
   p1.print(y);
}
