#include<iostream>
#include<stdio.h>

using namespace std;




void sum(int a , int b){

        int sum = a+b;

        return ;

}

 int main(){

    int arr[5];

    int x = 10;
    int y = 20;

    int  *p = &x;
//     cout << arr << endl;
//    cout << &x << endl;
//    cout << *p << endl;
//    cout << &y << endl;

printf("%x", p);
cout << endl;
printf("%p", p);
cout << endl;
printf("%u", p);
cout << endl;

    return 0;
 }