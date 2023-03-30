#include <iostream>
#define N 10
using namespace std;

int main(){

int newArray[N][N];

int n=0, m=0; 

for(n=0; n<N; n++){
	for(m=0; m<N; m++){
	
    newArray[n][m]=n*10+m;

    cout << newArray[n][m] <<"        ";
}
 cout<<"\n"<<endl;
}
 
return 0;
}
