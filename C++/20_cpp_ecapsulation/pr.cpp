#include<iostream>
#include<string>
using namespace std;

class Std{

    public:
    int price;
    int rate;
};


 int main(){
int num1 = 10;
int num2 = 20;
    // int arr[5] = {1 , 2, 3, 4, 5};
    // char arr[3] = {'a', 'b', 'c'};

    Std s1, s2, s3;
     s1.price = 100;
     s1.rate = 5;

     s2.price = 50;
     s2.rate = 4;

     s3.price = 25;
     s3.rate = 3;


     

    Std arr[3] ={s1, s2, s3};


   
    return 0;
 }