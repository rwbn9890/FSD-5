#include<iostream>
using namespace std;


int main(){

    for(int i=1; i<=5; i++) // 1 //2 
    {
        for(int j=1; j<=i; j++) // 1 v//2
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}