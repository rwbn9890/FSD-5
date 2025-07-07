#include<iostream>
 using namespace std;





  int main(){

    int a = 10;

    int *x = new int(111);


    *x = 222;
    *x = new char('c');

    cout << *x << endl;

    delete x;
    x = NULL;
    cout << *x << endl;

    return 0;
  }