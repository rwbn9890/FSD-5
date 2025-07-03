#include<iostream>
#include<string>
using namespace std;

class Animal{
    public:
    int legs = 4;
    void eat(){
        cout << "pets can eat...1" << endl;
    }
};


class Dog : public Animal{
    public:
    void bark(){
cout << "pets can Bark" << endl;
    }
};

class Cat : public Animal{
    public:
    void meow(){
cout << "pets can meow" << endl;
    }
};



class pet : public Dog, public Cat{


};



int main(){

   pet kitty, puppy;

 cout << puppy.Dog::legs << endl;
 puppy.bark();

 kitty.meow();
 kitty.Cat::eat();


    return 0;
}