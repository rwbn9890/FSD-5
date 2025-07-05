#include<iostream>
using namespace std;


class Object{

    public:

    void show(){
        cout << "Showing the Data" << endl;
    }

    void show(int days){
        cout << "Showing " << days  <<" days the Data" << endl;
    }
    void show(string days){
        cout << "Showing " << days  <<" days the Data" << endl;
    }

    void show(int days, int data){
        cout << "Showing " << days  <<" days, " << data <<" Data" << endl;
    }
};



 int main(){

    Object obj1;
    obj1.show();
    obj1.show(10);
    obj1.show("ten");
    obj1.show(10, 2000);

    return 0;
 }