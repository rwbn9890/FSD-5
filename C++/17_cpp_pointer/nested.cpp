#include<iostream>

using namespace std;

void third(){
    cout << "Third fun called. " << endl;
}

void second(){
    cout << "Second fun called." << endl;
    third();
}

void first()
{
    cout << "first fun called." << endl;
    second();
}

 int main(){

    first();
  
    return 0;
 }