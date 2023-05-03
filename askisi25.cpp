#include <iostream>
#include <string>

using namespace std;

class Proionta {      // class name
	public:
		string onoma; // class variables
		float timh;
		int posotita;
	public: 
	    float teltim(float timh, int posotita ) // function
	    {
	    	return  timh*posotita;
		}
			
};

int main(){

 Proionta p1;
	p1.onoma="patatakia";
	cout<<"To proion tha einai:"<< p1.onoma;
	p1.timh= 1.5;
		cout << "\n" << endl;
	cout<<"H timh tou proiontos einai:"<<p1.timh;
		cout << "\n" << endl;
	p1.posotita= 20;
	cout<<"H posotita tou einai:"<<p1.posotita;
cout << "\n" << endl;

 Proionta p2;
	p2.onoma="sokolates";
	cout<<"To proion tha einai:"<< p2.onoma;
	p2.timh= 2.5;
		cout << "\n" << endl;
	cout<<"H timh tou proiontos einai:"<<p2.timh;
		cout << "\n" << endl;
	p2.posotita= 10;
	cout<<"H posotita tou einai:"<<p2.posotita;
cout << "\n" << endl;

 Proionta p3;
	p3.onoma="zeledakia";
	cout<<"To proion tha einai:"<< p3.onoma;
	p1.timh= 1.25;
		cout << "\n" << endl;
	cout<<"H timh tou proiontos einai:"<<p3.timh;
		cout << "\n" << endl;
	p3.posotita= 45;
	cout<<"H posotita tou einai:"<<p3.posotita;
cout << "\n" << endl;



	cout << "\n" << endl;
	cout<<"H teliki timi tou proiontos einai :" << p1.teltim(1.5, 20)  << endl;
	cout << "\n" << endl;


	cout << "\n" << endl;
	cout<<"H teliki timi tou proiontos einai :"<< p2.teltim(2.5, 10);
	cout << "\n" << endl;
	

	cout << "\n" << endl;
cout<<"H teliki timi tou proiontos einai :"<< p3.teltim(1.25, 45);
	cout << "\n" << endl;
}
