#include <iostream>
#include <string>
#include <vector>
#include <random>
std::random_device rd;
std::mt19937 gen(rd());
std::uniform_int_distribution<> distrib(100000000,199999999);

class Account{
    const long account_number;
    std::vector<std::string> transaction_history;
    double balance;

    public:
    void creditAccount(double amount);
    void debitAccount(double amount);
    void transferMoney(Account& to_account, double amount);
    void display();
    
    Account(long accountno):account_number(accountno){
        balance = 0;
    }
};

void Account::creditAccount(double amount){
        balance += amount;
        long transactionID = distrib(gen);
        std::cout << "Transaction ID : " << transactionID << std::endl;
        std::cout << "Rs. " << amount << " credited to " << account_number << std::endl;
        std::string his = "Transaction ID : " + std::to_string(transactionID) + "\nTransaction type : Credit"; 
        transaction_history.push_back(his);
        return;
}

void Account::debitAccount(double amount){
        if(amount > balance){
            std::cout << "Not enough money to debit." << std::endl;
            return;
        }
        balance -= amount;
        long transactionID = distrib(gen);
        std::cout << "Transaction ID : " << transactionID << std::endl;
        std::cout << "Rs. " << amount << " debited from " << account_number << std::endl;
        std::string his = "Transaction ID : " + std::to_string(transactionID) + "\nTransaction type : Debit"; 
        transaction_history.push_back(his);
        return;
}

void Account::transferMoney(Account& to_account, double amount){
        if(amount > balance){
            std::cout << "Not enough money to debit." << std::endl;
            return;
        }
        balance -= amount;
        to_account.balance += amount;
        long transactionID = distrib(gen);
        std::cout << "Transaction ID : " << transactionID << std::endl;
        std::cout << "Rs. " << amount << " transferred from " << account_number << " to " << to_account.account_number << std::endl;
        std::string a = "Transaction ID : " + std::to_string(transactionID) + "\nTransaction type : Debit";
        std::string b = "Transaction ID : " + std::to_string(transactionID) + "\nTransaction type : Credit";
        transaction_history.push_back(a);
        to_account.transaction_history.push_back(b);
        return;
}


void Account::display(){
    std::cout << "\nAccount number : " << account_number << std::endl;
    std::cout << "Transactions - " << std::endl;
    for(auto it = transaction_history.begin(); it != transaction_history.end(); it++){
        std::cout << *it << std::endl;
    }
    std::cout << "Balance : " << balance << std::endl << std::endl;
    return;
}

int main(){
    Account A[5] = {Account(1), Account(2), Account(3), Account(4), Account(5)};
    A[0].creditAccount(25);
    A[1].creditAccount(52);
    A[0].debitAccount(100);
    A[1].transferMoney(A[2], 27);
    A[0].debitAccount(25);
    A[5].creditAccount(1999);
    A[5].transferMoney(A[4], 999);
    A[0].display();
    A[1].display();
    A[2].display();
    A[3].display();
    A[4].display();
    return 0;
}