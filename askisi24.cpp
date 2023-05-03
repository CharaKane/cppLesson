#include <iostream>
#include <string>

using namespace std;

class Car {      // class name
	public:
		float speed; // class variables
		float weight;
		int doors;
	public: 
	    float speedup(float x) // function
	    {
	    	return  speed=speed+x;
		}
	public:
		  float speeddown(float y) // function
	    {
	    	return  speed=speed-y;
		}
	car (float x, float y, int z) //constructor
	{
		speed=x;
		weight=y;
		doors=z;
	}
			
};

int main(){

float a,b,c,d;

	Car car1;
	car1.speed=45.5;
	cout<<"H taxitita tou car 1 einai:"<< car1.speed;
	car1.weight= 550.70;
		cout << "\n" << endl;
	cout<<"To varos tou car 1 einai:"<<car1.weight;
		cout << "\n" << endl;
	car1.doors= 4;
	cout<<"Oi portes tou car 1 einai:"<<car1.doors;
cout << "\n" << endl;

	Car car2;
	car2.speed=55.6;
	cout<<"H taxitita tou car 2 einai:"<< car2.speed;
	car2.weight=450.70;
		cout << "\n" << endl;
	cout<<"To varos tou car 2 einai:"<<car2.weight;
		cout << "\n" << endl;
	car2.doors= 2;
cout<<"Oi portes tou car 2 einai:"<<car2.doors;


car1.speedup(10);
	cout << "\n" << endl;
	cout<<"H nea taxitita tou car 1 einai:"<< car1.speed;
	cout << "\n" << endl;
car1.speeddown(10);
	cout<<"H nea taxitita tou car 1 einai:"<< car1.speed;

car2.speedup(10);
	cout << "\n" << endl;
	cout<<"H nea taxitita tou car 2 einai:"<< car2.speed;
	cout << "\n" << endl;
car2.speeddown(10);
	cout<<"H nea taxitita tou car 2 einai:"<< car2.speed;
	
}
