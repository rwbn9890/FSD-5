#include<iostream>
#include<string>
using namespace std;

class Animal{
    public:
    int legs = 4;

    void eat(){
        cout << "Animal Can Eat...!" << endl;
    }
};


class Dog : public Animal{

    public:
    void bark(){

    }

};

class Cat : public Animal{

    public:
    string name = "soni";
    void meow(){

    }

};




int main(){

    Cat c1;

    cout << c1.name ;
 c1.eat();
    return 0;
}