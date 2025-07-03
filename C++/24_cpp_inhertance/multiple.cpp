#include<iostream>
#include<string>
using namespace std;



class Dog {
    public:
    string food_type = "non-veg";
    void bark(){
        cout << "pets can barks"<< endl;
    }
};

class Cat {
    public:
    string food_type = "non-veg";
    void meow(){
        cout << "pets can meow...!" << endl;
    }
};

class Pet : public Dog, public Cat{


};



int main(){

   Pet kitty, puppy;

   kitty.meow();
   puppy.bark();

   


    return 0;
}