#include<iostream>
#include<string>
using namespace std;

class Std{

    private:
    int price;
    float rate;

    public:
    void setter(int price, float rate){
        this->price = price;
        this->rate = rate;
    }

    void getter(){
        cout << "price: " << this->price << endl;
        cout << "rate: " << this->rate << endl;

        cout << this << endl;
    }

};


 int main(){

    Std s1, s2;
    int price ;
    float rate;

    cout << "price: ";
    cin >> price;
    cout << "rate: ";
    cin >> rate;

    s1.setter(price, rate);

    s1.getter();


    cout << "-=--------------------------0" << endl;

    s2.setter(500, 4.1);
    
    s2.getter();

 
   
    return 0;
 }