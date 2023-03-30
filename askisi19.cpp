#include <iostream>

using namespace std;

// dilosi synartiseon

float add (int choice);
float sub (int choice);
float mul (int choice);
float div (int choice);


int main(){
	
	int choice;
	float x, y, p, a, pol, d;

	
	cout << "1. Addition \n";
	cout << "2. Subtraction \n";
	cout << "3. Multiplication \n";		
	cout << "4. Division \n";
	cout << "5. Exit \n\n";
	
	
	cout << "Enter your Choice (1-5): ";
	cin >> choice;

	while (choice<=0 || choice>5){
	
		cout << "Enter new Choice (1-5): ";
	    cin >> choice;
}
	
	
	
	switch(choice){
		case 1: 
		 
	    	p = add(choice);
	    	cout << "To athrisma einai: " <<  p << endl; 
	    	break;
		
		case 2:
			a = sub(choice);
			cout << "H diafora einai: " << a << endl;
			break;
			
		case 3:
			pol = mul(choice);
			cout << "H ginomeno einai: " << pol << endl;
			break;
			
    	case 4:
				d =  div(choice);
				cout << "To apotelesma einai: " << d << endl;
				break;
				
	    case 5: 
	    
	           cout << " Ejodos" << endl;
        break;
	           
	}
	

}

// ejo apo tin main

float add (int choice){
   float x,y;
   	cout << "dose 2 arithmous:" << endl;
   cin >> x>> y;
	return (x+y);
	
}

 float sub (int choice){
  float x,y;
  	cout << "dose 2 arithmous:" << endl;
   cin >> x>> y;
	return (x-y);
	
}
 
float mul (int choice){
float x,y;
	cout << "dose 2 arithmous:" << endl;
 cin >> x>> y;
	return (x*y);
	
}
 float div (int choice){
float x,y;
	cout << "dose 2 arithmous:" << endl;
 cin >> x>> y;
	return (x/y);
	
}
