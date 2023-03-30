#include <iostream>
#define N 10
using namespace std;

int main(){

int newArray[N][N];

int n=0; 


for(n=0; n<N*N; n++){
    newArray[n/10][n%10]=n;

    cout << newArray[n/10][n%10] <<"        ";
    
    if(n%N==N-1){

 cout<<"\n"<<endl;
  }
}


return 0;
}
