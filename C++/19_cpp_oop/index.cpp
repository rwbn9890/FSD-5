#include<iostream>
#include<string.h>

 using namespace std;

  class Student{

    public: 

    int roll;
    char name[100];
    char course[100];
     
  };


 int main(){
    Student std1, std2;

    std1.roll = 1111;
    strcpy(std1.name, "Utsav");
    strcpy(std1.course, "full stack");


    std2.roll = 2222;
    strcpy(std2.name, "pratik");
    strcpy(std2.course, "Graphic");


    cout << std1.roll << endl;
    cout << std1.name << endl;
    cout << std1.course << endl;


    cout << std2.roll << endl;
    cout << std2.name << endl;
    cout << std2.course << endl;


    

  return 0;
 }