#include<iostream>
using namespace std;


class MyClass{

    private:
    int size;
    int *arr;

    public:
    MyClass(int size){
        this->size = size;
        arr = new int[this->size];
        if(arr == NULL){
            cout << "Memory Allocation failed...!" << endl;
        }else{
            cout << "Memory Allocated Successfully...!" << endl;
        }
    }



    void addEle(int index, int ele){
        if(index >= 0 && index < this->size){
            arr[index] = ele;
            cout << arr[index] << endl;
        }else{
            cout << "Error: index is out of bound...!" << endl;
        }
    }


    ~MyClass(){     
        delete[] arr;
        arr = NULL;
        if(arr == NULL){
            cout << "Memory Deallocated Successfully...!" << endl;
        }else{
            cout << "Memory Deallocation is failed...!" << endl;
        }
    }

};





int main(){

MyClass obj(5);

obj.addEle(1, 99);

    return 0;
}