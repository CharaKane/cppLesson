#include <iostream>

using namespace std;

int main(){
    int a, b, c, d;
      a=b=0;
      c=d=0;

      for(int i=c; i<1; i++)
      {

        a=b++;
       
        c=++d;
      }
      

      cout << "a=" << a << endl << "b=" << b << endl;
      cout << "c=" << c << endl << "d=" << d << endl;

     system("pause");
}
