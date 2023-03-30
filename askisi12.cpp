#include <iostream>

using namespace std;

int main(){
    int a, b, c, d;
      a=b=0;
      c=d=0;

      if(a==0 && c==0)
      {

        a=b;
        b++;

        d++;
        c=d;
      }
      

      cout << "a=" << a << endl << "b=" << b << endl;
      cout << "c=" << c << endl << "d=" << d << endl;

     system("pause");
}
