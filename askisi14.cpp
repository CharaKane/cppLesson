#include <iostream>
#define N 10
using namespace std;

int main(){

int newArray[N];

int n=0 ;

for(n=0; n<N; n++){
    newArray[n]=n;

    cout << newArray[n] << endl;
}

  cout<<"\n"<<endl;
  
for(n=N-1; n>=0; n--){
    newArray[n]=n;

    cout << newArray[n] << endl;
}
return 0;
}
