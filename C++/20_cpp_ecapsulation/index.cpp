#include<iostream>
#include<string>
using namespace std;

class Data{

    public:
    string name;
    string email;
    int phone;
    string password;

};


 int main(){

    Data obj1;

    int size;
    cout << "size: ";
    cin >>size;

    Data obj[size];

    for(int i=0; i<size; i++)
    {
        cout  << i << "-name : ";
        cin >> obj[i].name;
        cout  << i << "-email : ";
        cin >> obj[i].email;
        cout  << i << "-phone : ";
        cin >> obj[i].phone;
        cout  << i << "-password : ";
        cin >> obj[i].password;
        cout << endl;
    }

    cout << "======================"<< endl;
      for(int i=0; i<size; i++)
    {
        cout << "name: : " << obj[i].name << endl;
        cout << "email: : " << obj[i].email << endl;
        cout << "phone: : " << obj[i].phone << endl;
        cout << "password: : " << obj[i].password << endl;
    }


    // obj1.name = "Alishan Shaikh";
    // obj1.email = "alishan@gmail.com";
    // obj1.phone = 98625314582;
    // obj1.password = "ali@123";

    // Data obj2;

    // obj2.name = "amit";
    // obj2.email = "amit@gmail.come"

    return 0;
 }