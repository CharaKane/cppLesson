#include <iostream>
using namespace std;

int main(){
	
	int A[5], i, max, min, k, m;
	
	cout << "Dose 5 arithmous:\n" << endl;
	
	for(i=0; i<5; i++){
		cin >> A[i];
	}
	
	cout << "O pinakas einai o:\n" << endl;
	max=A[0];
	min=A[0];
	for(i=0; i<5; i++){
		cout << A[i];
			if(max<A[i]){
	     max=A[i];
	     k=i;
	 }
	     	if(min>A[i]){
	     min=A[i];
	     m=i;
	 }
	}   
     
	cout << "\n O megaliteros arithmos tou pinaka einai o:\n" << max << endl;
	cout << "\n H thesi tou megaliterou arithmou tou pinaka einai h:\n" << k << endl;
	
	cout << "\n O mikroteros arithmos tou pinaka einai o:\n" << min << endl;
	cout << "\n H thesi tou mikroterou arithmou tou pinaka einai h:\n" << m << endl;

 return 0;
}
