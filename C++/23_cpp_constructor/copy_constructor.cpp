#include<iostream>
#include<string>
using namespace std;



class Object{

public:
    string name;
    string model;

    Object(string name, string model){
        this->name = name;
        this->model = model;
    }

    Object(const Object &obj){
        this->name = obj.name;
        this->model = obj.model;
    }



};

int main(){

Object obj1("swift", "vdf"), obj2(obj1), obj3("Polo", "gost"), obj4(obj3);

obj1.model="desire";

cout <<"obj1-Name: " << obj1.name << endl;
cout <<"obj1-model: " << obj1.model << endl;

cout <<"obj2-Name: " << obj2.name << endl;
cout <<"obj2-model: " << obj2.model << endl;

    return 0;
}