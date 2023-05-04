#include <iostream>
#include <cstdlib>
#define N 10
using namespace std;

char newArray[N][N];

void search (char c);


int main(){


char c, gramma;


int i, j; 


for(i=0; i<N; i++){
	for(j=0; j<N; j++){
	c = (char) (rand() % 26) + 'a';
            newArray[i][j] = c;
    cout << newArray[i][j] <<"        ";
		
}
 cout<<"\n"<<endl;
}

      cout << "Dose ena gramma:" << endl;
      cin >> gramma;

	
         
return 0;
}

//function
void search (char c){
	int i, j, p=0;

   for(i=0; i<N; i++){
	for(j=0; j<N; j++){
       if(i==j && c==newArray[i][j]) 
       cout<< " " << 3;
       if(i<j && c==newArray[i][j]) 
       cout<< " " << 2;
       if(i>j && c==newArray[i][j]) 
       cout<< " " << 1;
       if (c==newArray[i][j]) 
       p=1;
   }
}
    if (p==0) cout<<6900;
       return;
}
