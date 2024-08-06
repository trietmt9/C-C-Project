#include <iostream>
#include <string>

using namespace std;

class BankAccount 
{
    public:
        // Attributes (variables)
        string name; 
        int ID;

        // Methods (function)
        double deposit(double bal)
        {
            return bal;
        }
        double withDraw(double bal)
        {
            return bal;
        }
        void setBalance(double bal)
        {
            Balance = bal; 
        }
        double getBalance()
        {
            return Balance;
        }
    private:
        // Private attributes
        float Balance;
    
        

};

int main()
{
    BankAccount myAccount; 
    myAccount.name = "Triet";
    myAccount.ID = 23412;
    myAccount.setBalance(10000.0);
    cout << "My name is: "              << myAccount.name                                       << endl;
    cout << "My account ID is: "        << myAccount.ID                                         << endl;
    cout << "My current balance is: "   << myAccount.getBalance()                               << endl;
    cout << "Deposit: " << myAccount.deposit(1000) << " Withdraw "  << myAccount.withDraw(500)  << endl;

    BankAccount hisAccount;
    hisAccount.name = "Frank";
    hisAccount.ID = 23413;
    hisAccount.setBalance(20000.0);
    cout << "\nHis name is: "                       << hisAccount.name                           << endl;
    cout << "His account ID is: "                   << hisAccount.ID                             << endl;
    cout << "His current balance is: "              << hisAccount.getBalance()                   << endl;
    cout << "Deposit: " << myAccount.deposit(500)   << " Withdraw " << myAccount.withDraw(8000)  << endl;

    BankAccount *newAccount = new BankAccount;
    newAccount->ID = 2321;
    newAccount->name = "Stephen";
    newAccount->setBalance(30000.0);
    cout << "\nAccount name is: "               << newAccount->name                               << endl;
    cout << "Account ID is: "                   << newAccount->ID                                 << endl;
    cout << "Account current balance is: "      << newAccount->getBalance()                         << endl;
    cout << "Deposit: " << myAccount.deposit(5000) << " Withdraw " << myAccount.withDraw(9000)    << endl;

    delete newAccount;
}   