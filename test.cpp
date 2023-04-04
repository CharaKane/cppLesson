#include <iostream>
#include <cstdlib>
#define N 5
using namespace std;

int up (char gramma);
int down (char gramma);
int diag (char gramma);
int oxi (char gramma);

int main(){

char newArray[N][N];
char c, gramma, d, u, k, o;


int i, j; 


for(i=0; i<N; i++){
	for(j=0; j<N; j++){
	c = (char) (rand() % 26) + 'a';
            newArray[i][j] = c;
    cout << newArray[i][j] <<"        ";
		
}
 cout<<"\n"<<endl;
}

		if (i==j){
          d = diag(gramma);
         cout << "3" << endl;
		}
        else if (i<j){
         u =up(gramma);
        cout << "1" << endl;
     }
        else if (i>j){
         k =down(gramma);
        cout << "2" << endl;
        }
        else 
         o = oxi(gramma);
         
return 0;
}

//function
int up (char gramma){
    char newArray[N][N];
    int i, j; 
    cout << "Dose ena gramma:" << endl;
      cin >> gramma;
       for(i=0; i<N; i++)
	for(j=0; j<N; j++)
      if (newArray[i][j]==gramma)

       
       return (gramma);
}

int down (char gramma){
    char newArray[N][N];
    int i, j; 
 cout << "Dose ena gramma:" << endl;
      cin >> gramma;
      for(i=0; i<N; i++)
	for(j=0; j<N; j++)
      if (newArray[i][j]==gramma)

    return (gramma);
}

int diag (char gramma){
    char newArray[N][N];
    int i, j; 
 cout << "Dose ena gramma:" << endl;
      cin >> gramma;
        for(i=0; i<N; i++)
	for(j=0; j<N; j++)
      if (newArray[i][j]==gramma)
    return (gramma);
}

int oxi (char gramma){
    char newArray[N][N];
    int i, j; 
 cout << "Dose ena gramma:" << endl;
      cin >> gramma;
        for(i=0; i<N; i++)
	for(j=0; j<N; j++)
      if (newArray[i][j]==gramma)
  
       cout << "6900" << endl;
   return (gramma);
}
