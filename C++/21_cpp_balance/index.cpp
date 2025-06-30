#include<iostream>
#include<string.h>

using namespace std;

class Bank{

    private:


    int balance= 12000;
    string name = "pratik dabhi";
    string email = "pratik@gmail.com";
    string password = "pratik123";
    long long int phone = 9876545678;
    long long int accno = 2227459675;
    int pin = 9876;

    public:

    bool login(string email, string password){
        if(this->email == email && this->password == password){
            return true;
        }
        else {
            return false;
        }
    }

    void getBalance(int pin){
        if(this->pin == pin ){
            cout << "Balance: " << this->balance << endl;
        }else {
            cout << "invalide Pin...!" << endl;
        }
    }

    void deposit(int amount, int pin){
        if(this->pin == pin)
        {
            this->balance += amount;
            cout << "amount Deposited Successfully...1" << endl;
        }
        else{
            cout << "invalid Pin...!" << endl;
        }
    }

    void widrawal(int amount, int pin){
        if(this->pin == pin)
        {
           if(this->balance < amount){
                cout << "insufficiant balace...!" << endl;
           }else {
            this->balance -= amount;
            cout << "widrawal is successfully" << endl;
           }
        }
        else{
            cout << "invalid Pin...!" << endl;
        }
    }

    void myProfile(int pin){
        if(this->pin == pin ){
        cout << "name: " << this->name << endl;
        cout << "email: " << this->email << endl;
        cout << "acc No: " << this->accno << endl;
        cout << "phone: " << this->phone << endl;
        }else{
            cout << "invalide pin,..!" << endl;
        }
    }

    void changePin(int pin, int newpin){
        if(this->pin == pin)
        {
            this->pin = newpin;
        }else{
            cout << "old pin is wronge...!" << endl;
        }
    }

};



 int main(){

    Bank sbi;
    int choice, pin, amount, account;
    string email, password;

    cout << "enter email: ";
    cin >> email;
    cout << "Enter password: ";
    cin >> password;
    
    if(sbi.login(email, password)){

    while(choice != 0){
                cout << "press 1 for Get Balance" << endl;
                cout << "press 2 for Deposite" << endl;
                cout << "press 3 for Get Widrawal" << endl;
                cout << "press 4 for Get My profile" << endl;
                cout << "press 5 for change pin" << endl;
                cout << endl;

                cout << "Enter Choice: ";
                cin >> choice;

        switch(choice){
                case 1 : 
                        cout << "Enter Pin: ";
                        cin >> pin;
                        sbi.getBalance(pin);
                        break;
            
                case 2: 
                         cout << "Enter Deposit Amt : ";
                        cin >> amount;
                         cout << "Enter Pin: ";
                        cin >> pin;
                        sbi.deposit(amount, pin);
                        break;
            
                case 3: 
                         cout << "Enter Widrawal Amt : ";
                        cin >> amount;
                         cout << "Enter Pin: ";
                        cin >> pin;
                        sbi.widrawal(amount, pin);
                        break;
                        
                case 4: 
                         cout << "Enter Pin: ";
                        cin >> pin;
                        sbi.myProfile(pin);
                        break;
                        
                case 5: 
                         cout << "Enter old: ";
                        cin >> pin;
                        int newpin;
                         cout << "Enter new: ";
                        cin >> newpin;
                        sbi.changePin(pin, newpin);
                        break;
        }
        cout << "-----------------" << endl;
    }
  

        }else{
            cout << "invalid credientail...!" << endl;
        }

    return 0;
 }