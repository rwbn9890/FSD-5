#include<iostream>
using namespace std;
#include<string>

class Student{

    private:
    static string code ;

    public:
    int roll;
    string name;
   static string course;

  static void mycode(string c){
    code = c;
   }
  static void getmycode(){
    cout << code << endl;
   }


};

string Student::course = "fsd";
string Student::code = "";


int x = 100;

int main(){
    int x = 20;
    cout << ::x << endl;


Student batch[4];

Student std1, std2;

std1.roll = 111;
std1.name = "utsav";

std2.roll = 222;
std2.name = "dharmik";

batch[0] = std1;
batch[1] = std2;
batch[2].name = "brij";

    cout << std1.course << endl;

    Student::mycode("RWBN1");

    Student::getmycode();


    return 0;
}