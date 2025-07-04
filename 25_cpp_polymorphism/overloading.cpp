#include<iostream>
#include<string>
using namespace std;

class Parent{

    public:
        int add(int n1, int n2 )
        {
            return n1+n2;
        }

        int add(int n1, int n2, int n3, int n4 )
        {
            return n1+n2+n3+n4;
        }

        string add(string n1, string n2)
        {
            return n1+n2;
        }

};


 int main(){

    Parent op;

   cout <<  op.add(2, 2) << endl;
   cout <<  op.add("Alishan ", "shaikh") << endl;
   cout << op.add(4, 6, 8, 9) << endl;


    return 0;
 }