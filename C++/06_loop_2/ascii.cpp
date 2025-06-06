#include<iostream>
using namespace std;


 int main(){

    int n = 'a';
    int n2 = 'A';

    cout << n << endl;
    cout << n2 << endl;


    while( n < n+26){
        n= n+ 3;
    }
    return 0;
 }