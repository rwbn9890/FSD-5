#include<iostream>
#include<string>
using namespace std;



class Object{

    private:
    int grid;
    string name;
    string course;
 

    public:

    // constructor 
 
   Object(){
        this->grid = 1111;
        this->name="-";
        this->course="-";
        cout << "Object is constructed...!" << endl;
    }
 
   ~Object(){
    this->grid = 0;
        cout << "Object is Destructed...!" << endl;
    }


    Object(int id){
        this->grid = id;
        this->name="-";
        this->course="-";
    }

    void setData(string name, string course){
        this->name= name;
        this->course = course;
    }


    void getData()
    {
    cout << this->grid << endl;
    cout << this->name << endl;
    cout << this->course << endl;
    }

};

int main(){

    Object obj1(2), obj2(3), obj3(4), obj4;

    obj1.setData("Pratic", "fsd");
    obj1.getData();
    obj2.getData();
    obj3.getData();






    return 0;
}