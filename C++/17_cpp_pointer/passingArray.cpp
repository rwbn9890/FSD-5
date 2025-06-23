#include<iostream>

using namespace std;

void fun(int &arr){
    cout << &arr << endl;
}

 int main(){

    int arr[4] = {1, 2, 3, 4};

    fun(*arr);
    cout << arr << endl;

    return 0;
 }