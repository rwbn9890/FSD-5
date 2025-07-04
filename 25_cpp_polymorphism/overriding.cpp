#include<iostream>
#include<string>
using namespace std;

class Parent{
    public:
        int add(int n1, int n2 )
        {
            return n1+n2;
        }
};

class child : public Parent {
    public:
     int add(int n1, int n2 )
        {
            return n1*n2;
        }
};

class grandChild: public child{
    public:
        int add(int n1, int n2 )
        {
            return n1/n2;
        }
};


 int main(){

   grandChild gc;

   cout <<  gc.Parent::add(10, 2) << endl;
   cout <<  gc.child::add(10, 2) << endl;
   cout <<  gc.add(10, 2) << endl;
    

    return 0;
 }