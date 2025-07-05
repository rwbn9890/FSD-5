#include<iostream>
using namespace std;

int x = 200;

void sub(){
cout << "sub: " << x<< endl;
}



int main(){

    int x = 10;

cout << "main: " << ::x<< endl;

sub();



    return 0;
}