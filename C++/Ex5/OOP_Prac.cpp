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
        double deposit(double bal)
        {
            return bal;
        }
        double withDraw(double bal)
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
   
    cout << "My name is: "           << myAccount.name      << endl;
    cout << "My account ID is: "     << myAccount.ID        << endl;
    cout << "My Balance is: "        << myAccount.Balance   << endl;
    cout << "Deposit: " << myAccount.deposit(1000) << " Withdraw " << myAccount.withDraw(500) << endl;

    BankAccount hisAccount;
    hisAccount.name = "Frank";
    hisAccount.ID = 23413;
    hisAccount.Balance = 200.500;
    
    cout << "\nHis name is: "         <<hisAccount.name     << endl;
    cout << "His account ID is: "     <<hisAccount.ID       << endl;
    cout << "His Balance is: "        <<hisAccount.Balance  << endl;
    cout << "Deposit: " << myAccount.deposit(500) << " Withdraw " << myAccount.withDraw(8000) << endl;

    BankAccount *newAccount = new BankAccount;
    newAccount->ID = 2321;
    newAccount->name = "Stephen";
    newAccount->Balance = 100.124;
    cout << "\nAccount name is: "       <<newAccount->name     << endl;
    cout << "Account ID is: "           <<newAccount->ID       << endl;
    cout << "Account Balance is: "      <<newAccount->Balance  << endl;
    cout << "Deposit: " << myAccount.deposit(5000) << " Withdraw " << myAccount.withDraw(9000) << endl;

    delete newAccount;
}   