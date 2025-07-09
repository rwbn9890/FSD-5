#include<iostream>
#include<string>
using namespace std;


template<typename T>
class Vector{

    private:
    int size;
    T *arr;

    public:

    Vector(){
        this->size = 0;
        arr = new T[100];
    }

    Vector(int size, T ele){
        this->size = size;
        arr = new T[100];
        for(int i=0; i<this->size; i++){
                arr[i] = ele; 
                }
    }

    void push(T ele){
        arr[this->size] = ele;
        this->size++;
    }

    void pop(){
        this->size--;
    }

    void length(){
        cout << this->size << endl;
    }

    void print(){
        for(int i=0; i<this->size; i++){
            cout << arr[i] << ", ";
        }
        cout << endl;
    }

};





 int main(){
    Vector <int>arr;

    Vector <int>array(5, 4)
    
    arr.push(2);
    arr.push(4);
    arr.push(6);
    arr.push(8);

    
    arr.pop();
    
    arr.length();
    arr.print();

    Vector <char>str;

    str.push('a');
    str.push('z');
    str.push('b');

    str.length();
    str.print();

    cout << "----------------" << endl;


    Vector <string>names;

    names.push("jonny");
    names.push("tom");
    names.push("bheem");
names.length();
    names.print();


    return 0;
 }