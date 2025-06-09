#include<iostream>
using namespace std;


 int main(){

    int digit = 7;
    int sum = 0;

    while(digit > 1) // 78 / 7
    {
        sum += digit%10; // 4 + 8 +7

        digit = digit/10;
    }

    cout << sum<< endl;

    return 0;
 }