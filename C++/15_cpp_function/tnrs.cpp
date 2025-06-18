#include<iostream>
using namespace std;


int sumSci(){
    int math = 90;
    int sci = 80;
    int eng = 75;
    int che = 79;
    int comp = 95;

    int sum = math + sci + eng + che + comp;

    return sum;
}


int sumCom(){
    int math = 90;
    int eco = 73;
    int eng = 75;
    int acu = 82;
    int sta = 92;

    int sum = math + eco + eng + acu + sta;

    return sum; //575
}




int main(){

   int sum1 = sumSci(); // 575
   int sum2 = sumCom(); // 575


    int avg1 = sum1/5;
    int avg2 = sum2/5;

    cout << "avg Science: " << avg1 <<  endl;
    cout << "avg commerce: " << avg2 <<  endl;


    return 0;
 }