#include<iostream>
#include<string>
using namespace std;

class Car{
    public:
    string wheel ="Alloy wheel";
    string body ="cardbon fible body";
    string window ="glass window";
};


class Bolero : public Car{

    public:
    string engine = "Diesel";
    int price = 1400000;

    void getDetails(){
        cout << "Engine: " << this->engine<< endl;
        cout << "Price: " << this->price<< endl;
        cout << "wheel: " << wheel<< endl;
    }



};


int main(){

    Bolero b1;

    b1.getDetails();

    b1.wheel;

    return 0;
}