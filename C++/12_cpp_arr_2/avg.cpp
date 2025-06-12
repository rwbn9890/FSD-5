#include<iostream>
using namespace std;

int main(){
int size;
int sum =0;
int avg = 0;
    cout << "size:";
    cin >> size;

    int arr[size];

    for(int i=0; i<size; i++)
    {
        cout << "arr[" << i << "]: ";
        cin >> arr[i];
    }

    // for(int e : arr){ sum = sum + e; }

    for(int i=0; i<size; i++) //0 , 1, 2, 3, 4, 5
    {
        sum = sum + arr[i]; // 11+22 = 33+33 = 66 + 44 = 110+55 = 165
    }

    avg =sum/size;

    cout << "avg: " << avg <<endl;

    return 0;
}