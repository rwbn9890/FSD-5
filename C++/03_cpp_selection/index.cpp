#include<iostream>
using namespace std;


 int main(){


    cout << "Press 1 for Pizza" << endl;
    cout << "Press 2 for pasta" << endl;
    cout << "Press 3 for burger" << endl;
    cout << "Press 4 for sandwitch" << endl;

        int x;
        cout << "x: ";
        cin >> x;


        if( x== 1)
        {
            cout << "You Ordered Pizza 🍕" << endl;
            cout << "price: " << 200 << endl;
        }
        else if( x== 2)
        {
            cout << "Your ordered Pasta" << endl;
              cout << "price: " << 170 << endl;
        }
        else if( x== 3)
        {
            cout << "YOur Ordered Burger" << endl;
              cout << "price: " << 90 << endl;
        }
        else if( x== 4)
        {
            cout << "YOur Ordered sandwitch" << endl;
              cout << "price: " << 70 << endl;
        }
        else{
            cout << "this item isnot in menu...!" << endl;
        }


    return 0;
 }