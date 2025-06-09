#include<iostream>
using namespace std;


 int main(){

    int digit = 7;
    int count =0;
    int last_digit = digit%10;

    while(digit > 10) // 86 / 8
    {
        digit = digit / 10;
        count++;
    }
      int first_digit = digit;

      if(count >= 1){
          cout << first_digit + last_digit << endl;
      }
      else{
        cout << last_digit << endl;
      }


    return 0;
 }