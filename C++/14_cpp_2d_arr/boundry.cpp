#include<iostream>

using namespace std;


 int main(){

int arr[6][6] = {
    {10, 11, 12, 13, 14, 15},
    {16, 17, 18, 19, 20, 21},
    {22, 23, 24, 25, 26, 27},
    {28, 29, 30, 31, 32, 33},
    {34, 35, 36, 37, 38, 39},
    {40, 41, 42, 43, 44, 45}
};
int r = 6;
int c = 6;


        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
             if(i==0 || j==0 || i==r-1 || j==c-1)
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