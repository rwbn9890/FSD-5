#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){

    vector<int> arr;
    arr = {1, 2, 3,4, 5, 6, 7, 9};

    vector<char> str(5, 'A');

    vector<int> nums{1, 2, 3, 4,5, 6, 7};




    for(int e : arr){
        cout << e << ", ";
    }
    cout << endl;

    for(char e : str){
        cout << e << ", ";
    }
    cout << endl;

    for(int e : nums){
        cout << e << ", ";
    }
    cout << endl;





    return 0;
}