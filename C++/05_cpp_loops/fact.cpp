#include<iostream>
using namespace std;

int main(){

// int i = 1;  
// int n = 5;
// int fact = 1;

// while(i<=n)
// {
//     fact = fact * i; // fact *= i
//     i++;
// }

// cout << "factorial of " << n << ": " << fact << endl;




int n = 5;
int fact = 1;

while (n>=1)
{
    fact *= n; // fact = fact * n;
    n--;
}

cout << "factorial of n" <<": " << fact << endl;

    return 0;
}
