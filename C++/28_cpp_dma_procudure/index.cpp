#include<iostream>
using namespace std;


int main(){

    int size;
    int *arr;

    arr = new int[size];

    if(arr == NULL){
        cout << "Memory Allocation failed...!" << endl;
    }else{
        cout << "Memory Allocated Successfully...!" << endl;
    }


    arr[0] = 12;
cout << arr[0] << endl;



// delete[] arr;

int *newArr = arr;

    arr = NULL;

    if(arr == NULL){
        cout << "Memory Deallocated Successfully...!" << endl;
    }else{
        cout << "Memory Deallocation is failed...!" << endl;
    }


    return 0;
}