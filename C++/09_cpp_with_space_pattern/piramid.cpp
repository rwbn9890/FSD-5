#include<iostream>
using namespace std;


int main(){

        int n= 10;
    for(int i=1; i<=n; i++) 
    {

        for(int l=i; l<=n; l++)
        {
            cout << " ";
        }

        for(int j=1; j<=i; j++) // 1 v//2
        {
            cout << "*" << " ";
        }
        cout << endl;
    }

    return 0;
}