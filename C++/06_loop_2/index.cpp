#include<iostream>
using namespace std;


 int main(){

    int digit = 86567;

    int last_digit = digit%10;

    while(digit > 10) // 86 / 8
    {
        digit = digit / 10;
    }
      int first_digit = digit;

cout << first_digit + last_digit << endl;


    return 0;
 }