#include<iostream>
#include<string>

using namespace std;


class Tata{
    public:
    
  virtual void getRevenue() = 0;

  void getEmployess(){
    cout << 100000 << "employees..!" <<endl;
  }
};

class TataSteel: public Tata{
    public:
   void getRevenue(){
        cout << "10000 Revenue this Year...!" << endl;
    }
};

class TataMotors: public Tata{
  void getRevenue(){
        cout << "15000 Revenue this Year...!" << endl;
    }
};



 int main(){



    return 0;
 }