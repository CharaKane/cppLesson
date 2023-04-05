#include <iostream>
#include <cstdlib>
#define N 10
using namespace std;

char up (char newArray[N][N],int i,int j);
char down (char newArray[N][N],int i,int j);
char diag (char newArray[N][N],int i,int j);


int main(){

char newArray[N][N]={{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                     {' ',' ',' ',' ',' ','a',' ',' ',' ',' '},
                     {' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                     {' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                     {' ',' ',' ',' ',' ',' ',' ',' ',' ',' '}, 
                     {' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                     {' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                     {' ',' ','b',' ',' ',' ',' ',' ',' ',' '},
                     {' ',' ',' ',' ',' ',' ',' ',' ','c',' '},
                     {' ',' ',' ',' ',' ',' ',' ',' ',' ',' '}};
               
char c, gramma, d, u, k ;


int i, j; 


/*for(i=0; i<N; i++){
	for(j=0; j<N; j++){
	c = (char) (rand() % 26) + 'a';
            newArray[i][j] = c;
    cout << newArray[i][j] <<"        ";
		
}
 cout<<"\n"<<endl;
}*/

    cout << "Dose a,b,c h allo:" << endl;
    cin >> gramma;
 for(i=0; i<N; i++){
	for(j=0; j<N; j++){  
    	if (i==j){
          d = diag(newArray,i,j);
         cout << "3" << endl;
    	}
        else if (i<j){
         u =up(newArray,i,j);
        cout << "1" << endl;
        }
        else
         k =down(newArray,i,j);
        cout << "2" << endl;
     
  
	}
 }
         
return 0;
}

//function
char up (char newArray[N][N],int i,int j){
    if (newArray[i][j]==' ')
        return '0'; 
        else if (newArray[i][j]=='a')
            return '1';
          
}

char down (char newArray[N][N],int i,int j){
    if (newArray[i][j]==' ')
        return '0'; 
        
        else if (newArray[i][j]=='b')
            return '2';
    }

char diag (char newArray[N][N],int i,int j){
    if (newArray[i][j]==' ')
        return '0'; 
        else if (newArray[i][j]=='c')
            return '3';
        }
/*

int down (char gramma){
    char newArray[N][N];
    int i, j; 
 cout << "Dose a,b,c h allo:" << endl;
      cin >> gramma;
      for(i=0; i<N; i++)
	for(j=0; j<N; j++)
      if (newArray[i][j]==gramma)
         return (gramma);
}

int diag (char gramma){
    char newArray[N][N];
    int i, j; 
 cout << "Dose a,b,c h allo:" << endl;
      cin >> gramma;
        for(i=0; i<N; i++)
	for(j=0; j<N; j++)
      if (i==j)
         return (gramma);
}

int oxi (char gramma){
    char newArray[N][N];
    int i, j; 
  cout << "Dose a,b,c h allo:" << endl;
      cin >> gramma;
        for(i=0; i<N; i++)
	for(j=0; j<N; j++)
      if (newArray[i][j]==gramma)
  
       cout << "6900" << endl;
   return (gramma);
}*/
