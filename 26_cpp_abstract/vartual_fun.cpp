#include<iostream>
#include<string>
using namespace std;

// abstract class
class Object{

   public:
   // virtual functions 
  virtual void alert() = 0;

};

class subObj: public Object{
   public:
    void alert(){
      cout << "hello everyone" << endl;
   }
};


 int main(){
   subObj obj;

   obj.alert();

    return 0;
 }