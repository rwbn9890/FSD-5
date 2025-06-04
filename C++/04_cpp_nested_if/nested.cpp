#include<iostream>
using namespace std;

 int main(){


int choice, type;
 
    cout << "Press 1 for Pizza" << endl;
    cout << "Press 2 for pasta" << endl;
    cout << "Press 3 for burger" << endl;
    cout << "Press 4 for sandwitch" << endl;
    
    cout << "CHoice: ";
    cin >> choice;



    switch(choice){
            case 1 :  cout << "Select type of Pizza 📒:" << endl;
                        cout << " 🍕 Press 1 for Margaritta Pizza" << endl;
                        cout << " 🍕 Press 2 for 8 cheeze Pizza" << endl;
                        cout << " 🍕 Press 3 for Onion Pizza" << endl;
                        cout << " 🍕 Press 4 for Garlic Pizza" << endl;
                        cout << "Type:";
                        cin >> type;

                        if(type==1)
                        {
                            cout << "You Ordered Margaritta Pizza" << endl;
                        }
                        else if(type==2)
                        {
                            cout << "You Ordered 8 cheeze Pizza" << endl;
                        }
                        else if(type==3)
                        {
                            cout << "You Ordered Onion Pizza" << endl;
                        }
                        else if(type==4)
                        {
                            cout << "You Ordered Garlic Pizza" << endl;
                        }
                        else 
                        {
                            cout << "This type not avaailable..!" << endl;
                        }

                     break;

            case 2 : cout << "Select type of Pasta 📒:" << endl;
                        cout << " 🍝 Press 1 for cheeze Pasta" << endl;
                        cout << " 🍝 Press 2 for normal pasta" << endl;
                        cout << " 🍝 Press 3 for Special Pasta" << endl;
                        cout << " 🍝 Press 4 for chinese pasta" << endl;
                        cout << "Type:";
                        cin >> type;

                        if(type==1)
                        {
                            cout << "You Ordered Cheeze pasta" << endl;
                        }
                        else if(type==2)
                        {
                            cout << "You Ordered normal Pasta" << endl;
                        }
                        else if(type==3)
                        {
                            cout << "You Ordered Special pasta" << endl;
                        }
                        else if(type==4)
                        {
                            cout << "You Ordered chinese Pasta" << endl;
                        }
                        else 
                        {
                            cout << "This type not avaailable..!" << endl;
                        }
                     break;

            case 3 : cout << "YOur Ordered Burger" << endl;
                     break;

            case 4 : cout << "YOur Ordered sandwitch" << endl;
                     break;

            default : cout << "this item isnot in menu...!" << endl;
    }

    return 0;
 }