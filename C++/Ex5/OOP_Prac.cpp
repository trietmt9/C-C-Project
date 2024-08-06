#include <iostream>
#include <string>

using namespace std;

class BankAccount 
{
    public:
        // Attributes (variables)
        string name; 
        int ID;
        float Balance;
    
        // Methods (function)
        bool deposit(double bal)
        {
            return bal;
        }
        bool withDraw(double bal)
        {
            return bal;
        }

};

int main()
{
    BankAccount myAccount; 
    myAccount.name = "Triet";
    myAccount.ID = 23412;
    myAccount.Balance = 500.500;
   
    cout << "My name is: "           << myAccount.name << endl;
    cout << "My account ID is: "     << myAccount.ID << endl;
    cout << "My Balance is: "        << myAccount.Balance << endl;
    cout << "Deposit: " << myAccount.deposit(false) << " Withdraw " << myAccount.withDraw(true) << endl;

    BankAccount hisAccount;
    hisAccount.name = "Frank";
    hisAccount.ID = 23413;
    hisAccount.Balance = 200.500;
    
    cout << "\nHis name is: "           <<hisAccount.name << endl;
    cout << "His account ID is: "     <<hisAccount.ID << endl;
    cout << "His Balance is: "        <<hisAccount.Balance << endl;
    cout << "Deposit: " << myAccount.deposit(true) << " Withdraw " << myAccount.withDraw(true) << endl;
}   