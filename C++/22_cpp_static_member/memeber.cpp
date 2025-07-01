#include<iostream>
using namespace std;
#include<string>

class Array{

    public:
    string arr[5];
    int count = 0;

    void push(string name){
        this->arr[count] = name;
        count++;
    }

};

int main(){

    Array arr1;

    arr1.push("pratik");
    arr1.push("brij");
    arr1.push("darmik");

    cout << arr1.arr[0];
    cout << arr1.arr[1];
    cout << arr1.arr[2];

    return 0;
}