#include<iostream>

using namespace std;

 int main(){

    // int a = 10;
    // int b = 20;

    int arr[4] = {3, 4, 5, 6};
    

    // int *p1 = &a;
    // int *p2 = &b;

    int *a = arr;
    int *a1 = &arr[0];

    int *ptr[4];

    for(int i=0; i<4; i++)
    {
        // cout << &arr[i] << endl;
        // printf("%u", &arr[i]);

        ptr[i] = &arr[i];
        // cout << endl;
    }


    for(int i=0; i<4; i++)
    {
        cout << ptr[i] <<" : " << *ptr[i] << endl;
    }



    // cout << "address of arr: " << a << endl;
    // cout << "address of arr[0]: " << a1 << endl;



    return 0;
 }