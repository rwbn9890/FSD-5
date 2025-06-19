#include<iostream>

using namespace std;



int sum(int n)
{
    int sum = 0;
    for(int i=1; i<=10; i++)
    {
        sum = sum + i;
    }
    return sum;
}


int score(int arr[], int size)
{
    int sum = 0;
    for(int i=0; i<size; i++)
    {
        sum += arr[i]; // sum = sum + arr[i]
    }

    int avg = sum /size;

    return avg;

}


 int main(){

//    int ans = sum(100);
//  cout << ans;

int com[5] = {99, 89, 65, 82, 70} ;
int sci[6] = {78, 45, 65, 98, 90, 91};

    int perc = score(com, 5);

    cout <<perc << endl;
    cout<< "SCient: " << score(sci, 6);



    return 0;
 }