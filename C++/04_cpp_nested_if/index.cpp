#include<iostream>
using namespace std;

 int main(){


    // big value;
        int a, b, c;

        cout << "A: ";
        cin >> a;
        cout << "B: ";
        cin >> b;
        cout << "C: ";
        cin >> c;


        if(a > b)
        {
            if(a > c)
            {
                cout << "A is Bigger" << endl;
            }
            else{
                cout << "C is Bigger" << endl;
            }
        }
        else {
            if(b > c)
            {
                cout << "B is Bigger" << endl;
            }
            else{
                cout << "C is Bigger" << endl;
            }
        }

    return 0;
 }