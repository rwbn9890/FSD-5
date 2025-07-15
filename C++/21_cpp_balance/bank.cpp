#include<iostream>
#include<string>
using namespace std;
 

class BankAcount{

    private:
    int accountNumber =123456789;
    string accountHolderName = "Utsav";
    double balance;


    public: 

   void deposit(int amount){
        this->balance += amount;
    }

   void widraw(int amount){
        this->balance -= amount;
    }

   int getBalance(){
       return this->balance;
    }

   void displayAccountInfo(){
        cout << this->accountNumber << endl;
        cout << this->accountHolderName << endl;
    }
};


class SavingAccount : public BankAcount{
    int interestRate;

    public:
    void calculateInterest(int interest, double balance){
        this->interestRate = interest;

       cout << (this->interestRate*balance)/100 << endl;
   
    }
};

class CheckingAccount : public BankAcount{

   int overDraftLimit = 30000;

   public:
   void checkOverDraft(double balance){
    cout << this->overDraftLimit << endl;
    cout << -balance << endl;
       if(this->overDraftLimit < -balance){
        cout << "overDraft limit EXided" << endl;
       }else{
        cout << "overdraft limit not exceeded...!" << endl;
       }
    }
};

class FixedDeposit :public BankAcount{

    int term;
    public:

   void calculateInterest(int term, double balance){
    this->term = term;
       cout << ((12*balance)/100 )*this->term << endl;
    }
};


int main(){
int choice, amount, interest, term;
BankAcount ba;
SavingAccount sa;
CheckingAccount ca;
FixedDeposit fd;


    while (choice != 0)
    {

        cout << "-> 1 for deposit" << endl;
        cout << "-> 2 for widraw" << endl;
        cout << "-> 3 for getBalance" << endl;
        cout << "-> 4 for displayInfo" << endl;
        cout << "-> 5 for saving Interest" << endl;
        cout << "-> 6 for check overdraft" << endl;
        cout << "-> 7 for FD" << endl;
        cout << "choice: ";
        cin >> choice;
        
        
        switch (choice)
        {
        case 1:
                cout << "Amount: ";
                cin >> amount;
                ba.deposit(amount);
            break;
        case 2:
                cout << "amount: ";
                cin >> amount;
                ba.widraw(amount);
            break;  
        case 3:
               cout<< ba.getBalance() << endl;;
            break;  
        case 4:
                ba.displayAccountInfo();
            break;
        case 5:
                cout << "Interest: ";
                cin >> interest;
                sa.calculateInterest(interest, ba.getBalance());
            break;
        case 6:
                ca.checkOverDraft(ba.getBalance());
            break;
        case 7:
            cout << "Term: ";
            cin >> term;
            fd.calculateInterest(term, ba.getBalance());
            break;
        
        default:
            break;
        }
    }
    



    return 0;
}