#include <iostream>
#include <string>

using namespace std;

class student {
	public:
		string onoma;
		int am;
		string ilikia;
};

int main(){
	student stud1;
	stud1.onoma="Paola \n";
	cout<<stud1.onoma; 
	stud1.ilikia="10/04/1999 \n";
	cout<<stud1.ilikia;
	stud1.am= 100499;
	cout<<stud1.am;
		student stud2;
	stud2.onoma="\n panagiotis \n";
	cout<<stud2.onoma; 
	stud2.ilikia="10/04/2005 \n";
	cout<<stud2.ilikia;
	stud2.am= 10349;
	cout<<stud2.am;
	
}
