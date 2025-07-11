#include<iostream>
#include<string>
#include<vector>
using namespace std;


// s1 = {
//     id:,
//     name:
// }

class Std{
    public:
    int id;
    string name;

    Std(int id, string name){
        this->id = id;
        this->name = name;
    }
};


class List{
    public:
        vector<Std> list;

    List(){
       
    }

    void addStudent(int id, string name){
        Std s(id, name);

        this->list.push_back(s);


    }



    void updateStudent(int id, string n){
        for( Std e : this->list){
            if(e.id == id){
                e.name = n;
            }
        }
    }

    void showAll(){
        for( Std e : list){
            cout << e.id  << ", "<< e.name << endl;
        }
    }

};




 int main(){

    // Std s1(id, name), s2;

    // s1.id = 1111;
    // s1.name = "Pratik";

    // s2.id = 2222;
    // s2.name = "Dharmik";

    // vector<Std> list;

    // list.push_back(s1);
    // list.push_back(s2);

    List list;

    list.addStudent(222, "Vaishali");
    list.addStudent(333, "Brij");
    list.addStudent(444, "Utsav");
    list.addStudent(555, "Pratik");


    list.updateStudent(444, "dharmik");

    list.showAll();


    return 0;
 }