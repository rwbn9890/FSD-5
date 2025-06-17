#include<iostream>

using namespace std;


 int main(){

    int r, c;

    cout << "rows: ";
    cin >> r;

    cout << "cols: ";
    cin >> c;

    int arr[r][c];

        // int arr[3][3] = {
        //                 {1, 2, 3},
        //                 {4, 5, 6},
        //                 {7, 8, 9}
        //                 };

        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                cout << "arr["<< i << "]["<< j << "]: ";
                cin >> arr[i][j];
            }
            cout << endl << "-----------" << endl;
        }


        arr[1][1] = 0;



        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }

    return 0;
 }