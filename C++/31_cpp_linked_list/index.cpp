#include<iostream>
#include<string>
#include<vector>
using namespace std;


// s1 = {
//     id:,
//     name:
// }

class Std{
    public:
    int id = 0;
    string name;

    Std(int id, string name){
        this->id = id;
        this->name = name;
    }
};


class List{
    public:
        vector<Std> list;

    List(){
       
    }

    void addStudent(int id, string name){
        Std s(id, name);
        this->list.push_back(s);
    }


    void searchStudent(int id){
        for( Std e : this->list){
            if(e.id == id){
                cout << e.id  << " | "<< e.name << endl;
            }
        }
    }

    void removeStudent(int id){
        for(int i=0; i<list.size(); i++){
            if(this->list[i].id == id){
                list.erase(list.begin()+i);
            }
        }
    }


    void showAll(){
        for( Std e : list){
            cout << e.id  << " | "<< e.name << endl;
        }
    }

};




 int main(){
    int id;
    string name;
    int choice;
    List list;


    while(choice != 0){
        cout << "---------------------" << endl;
        cout << "1 for Add" << endl;
        cout << "2 for search" << endl;
        cout << "3 for Remove" << endl;
        cout << "4 for Display" << endl;
        cout << "Choice: ";
        cin >> choice;
        
        switch (choice)
        {
        case 1:
                cout << "Id: ";
                cin >> id;
                cout << "Name: ";
                cin >> name;
                list.addStudent(id, name);
            break;
        case 2:
                cout << "Id: ";
                cin >> id;
                list.searchStudent(id);
            break;
        case 3:
            cout << "Id: ";
            cin >> id;
            list.removeStudent(id);
            break;
        case 4:
            list.showAll();
            break;
        
        default:
            break;
        }
    }




    return 0;
 }