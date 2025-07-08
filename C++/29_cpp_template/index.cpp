#include<iostream>
using namespace std;

template<typename T>
T sum(T x , T y){
    return x  + y;
}

int main(){

   cout <<  sum<int>(10, 20) << endl;
   cout <<  sum<float>(10.2, 20.1) << endl;
   cout <<  sum<char>('a', 'b') << endl;

   

    return 0;
}