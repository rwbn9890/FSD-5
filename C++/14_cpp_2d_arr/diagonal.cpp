#include<iostream>

using namespace std;


 int main(){

int arr[6][6] = {
    {10, 11, 12, 13, 14, 15}, //i = 0
    {16, 17, 18, 19, 20, 21}, //i = 1
    {22, 23, 24, 25, 26, 27}, //i = 2
    {28, 29, 30, 31, 32, 33}, //i = 3
    {34, 35, 36, 37, 38, 39}, //i = 4
    {40, 41, 42, 43, 44, 45}  //i = 5
//j = 0   1   2   3   4   5 
};
int r = 6;
int c = 6;


        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
             if( i==j || i+j==r-1)
             {
                 cout << arr[i][j] << " ";
             }    
             else{
                cout << "  "  << " ";
             }
            }
            cout << endl;
        }

    return 0;
 }