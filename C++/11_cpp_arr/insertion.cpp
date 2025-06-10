// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {

int size;
cout << "size: ";
cin >> size;

char str[size];



// cout << "arr[0]: ";
// cin >> str[0];
// cout << "arr[0]: ";
// cin >> str[1];
// cout << "arr[0]: ";
// cin >> str[2];
// cout << "arr[0]: ";
// cin >> str[3];

for(int i=0; i<size; i++)
{
    cout <<"arr[" << i << "]: ";
    cin >> str[i];
}




cout << "----------------------" << endl;

for(int i=0; i<size; i++)
{
    cout << str[i] << ", ";
}

cout << endl << "----------------------" << endl;

for(char x : str)
{
    cout << x << ", ";
}


    return 0;
}