#include<iostream>

using namespace std;

 int main(){

  int a , b;

  cout << "A: ";
  cin >> a;

  cout << "B: ";
  cin >> b;

    if(a > b)
    {
        cout << "A is greater" << endl;
    }
    else if( b > a)
    {
        cout << "B is greater " << endl;
    }
    else{
        cout << "A & B are EQual...1" << endl;
    }

    return 0;
 }