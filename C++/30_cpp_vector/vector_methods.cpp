#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){

    vector<int> arr{1, 2, 3, 5, 6};

arr.push_back(11);

arr.pop_back();



cout << "empty: " << arr.empty() << endl;
cout << "at   : " << arr.at(1) << endl;
cout << "front: " << arr.front() << endl;
cout << "back : " << arr.back() << endl;
cout << "size : " << arr.size() << endl;
arr.insert(arr.begin()+3, 4);

arr.erase(arr.begin() + 1, arr.begin()+3);


// arr.clear();

    for(int e : arr){
        cout << e << ", ";
    }



    return 0;
}