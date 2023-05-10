#include <iostream>

using namespace std;

class Employee{
	private:
		int salary;
		int bonus;
	public:		
		void setSalary(int s){
			salary=s;
		}
		
		void setBonus(int m){
			 bonus=m;
		}
		
		int getSalary(){
			return salary;
		}
		
		int getBonus(){
			return bonus;
		}
};


int main(){
	
  int getSalary(1500);
	cout <<"O misthos einai:" << getSalary << "€" <<  endl;
	
 int getMponous(400);
	cout << "Kai to bonus einai:" << getMponous << "€"  << endl;

}
