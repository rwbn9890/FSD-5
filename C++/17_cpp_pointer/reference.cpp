#include<iostream>

using namespace std;


void cube(int &num){ //4 bytes
cout << &num << endl;
}

int main(){


    int x = 3; // 4 bytes

    int &num = x;

    // cout << &num  << endl;
    cout << &x  << endl;

    cube(num);

    return 0;
}