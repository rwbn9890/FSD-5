#include<iostream>
#include<string>
using namespace std;

class Student{

    public:
    static string branch;
    int grid;
    string name;
    string course;


  static void setBranch(){
    
    }
   
};

 string Student::branch = "RWBN1";

class Teacher{
    public:
    int id;
    string name;
   static string branch;
    
};

string Teacher::branch = "RWBN1";

int main(){

    Student s1, s2 ,s3;
    Student arr[5];
    



    s1.grid = 1234;
    s1.name = "pratik";
    s1.course = "FSD";

    s2.grid = 7890;
    s2.name = "Amruta";
    s2.course = "Griphic";

    s3.grid = 4567;
    s3.name = "Yashwi";
    s3.course = "ML";


    arr[0] = s1;
    arr[1] = s2;
    arr[2] = s3;

    Student::setBranch();


    for(int i=0; i<5; i++){
        cout << arr[i].grid << endl;
        cout << arr[i].name << endl;
        cout << arr[i].course << endl;
        cout << Student::branch << endl;
        cout << "----------------" << endl;
    }


    return 0;
}