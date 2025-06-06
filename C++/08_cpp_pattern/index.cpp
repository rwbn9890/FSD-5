#include<iostream>
using namespace std;


 int main(){
    int r, c;
    cout << "R: ";
    cin >> r;
    cout << "C: ";
    cin >> c;


    for(int i=1; i<=r; i++) // i =1 , 2
    {
        for(int j=1; j<=c; j++) // j= 1, 2,3, 4 
        {
            cout << "*" << " ";
        }
        cout << endl;
    }


cout << "------------------------------------" <<endl;

    for(int i=1; i<=r; i++) // i =1 , 2
    {
        for(int j=1; j<=c; j++) // j= 1, 2,3, 4 
        {
            cout << j << " ";
        }
        cout << endl;
    }

cout << "------------------------------------" <<endl;


    for(int i=1; i<=r; i++) // i =1 , 2
    {
        for(int j=1; j<=c; j++) 
        {
            cout << i << " "; // 1, 1, 1, 1
        }
        cout << endl;
    }



    return 0;
 }