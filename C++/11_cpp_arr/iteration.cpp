// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {

int arr[7] = {9, 8, 7, 6, 5, 4, 3};

int size = sizeof(arr)/ sizeof(arr[0]);


for(int i=0; i<size; i++)
{ 
    cout << "arr[" << i << "]: " << arr[i] << endl;
}


    return 0;
}