#include <iostream>
#include <cmath>
#define p  3.14

using namespace std;

// dilosi synartiseon

double area (double radius);
double volume (double radius);

int main(){

double area_of_cycle, volume_of_sphere, radius;

cout << "Dose tin aktina tou kiklou:" << endl;
cin >> radius;

area_of_cycle= area(radius);
volume_of_sphere= volume(radius);

cout << "To emvadon tou kiklou einai: " <<  area_of_cycle << "\n kai o ogkos tou einai: "<< volume_of_sphere << endl;



}

// ejo apo tin main

 double area (double radius){

	return (p*pow(radius,2));
	
}

double volume (double radius){
   return   (4*p*radius*radius*radius/3);
}
