#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <iomanip> //to use setprecision

using namespace std;
class Transaction{                                                              //set to public to access the parent method
public: //makes it accessable to child classes
    string timestamp;
    string description;
    double balanceafter;
    double amount;
    
    Transaction(string descrip,double balanceAfter,double amt){  
        description=descrip;
        balanceafter=balanceAfter; 
        amount=amt;
        time_t now=time(nullptr); //this the time that is not readable to people
        timestamp=ctime(&now); //makes the time readable has a newline char at the end
        timestamp.pop_back();      //removes the newline char
    }
    
    void getTransactionDetatils()const{
        cout<<fixed<<setprecision(2);
        cout<<"[ "<<timestamp<<"] |"<<"description: |"<<description<<" |"<<"$"<<amount<<"| Balance: $"<<balanceafter<<"|"<<endl;
    }

};

class Account{          //class serves as a blueprint for objects
private:   
    string AccountHolder;  //if you want to access these attributes use getters and setters
    string AccountNumber;
    double Balance;
    vector<Transaction>transactions;

public:
    void setAccountHolder(string accHolder){ AccountHolder=accHolder;} //setters have no return type
    string getAccountHolder(){return AccountHolder;}

    void setAccountNumber(string accNumber){AccountNumber=accNumber;}
    string getAccountNumber(){return AccountNumber;}

    void setBalance(double balance){Balance=balance;}
    double getBalance(){return Balance;}



    Account(string accHolder,string accNumber,double initBalance){
        AccountHolder=accHolder;
        AccountNumber=accNumber;
        Balance=initBalance;
        transactions.push_back(Transaction("Account Opening",initBalance,initBalance)); //to initial balance becuase nothing will change initially

    }

    double deposit(double amountDepo){
        if(amountDepo<=0){
            cout<<"Error: depositing.The amount to be deposited has to be of a positive value."<<endl;
            return Balance;
        }
        Balance+=amountDepo;
        transactions.push_back(Transaction("Deposit",amountDepo,Balance));

        cout<<fixed<<setprecision(2);
        cout<<"Deposit | $"<<amountDepo<<"| New Balance |"<<Balance<<"|"<<endl;
        
        return Balance;
        

    }
    double withdraw(double amountWithdraw){
        if(amountWithdraw<=0){
            cout<<"Error: withdrawing.The amount to be withdrawn has to be of a positive value."<<endl;
        }
        Balance=Balance-amountWithdraw;

        transactions.push_back(Transaction("WithDrawal",amountWithdraw,Balance));
        
        cout<<fixed<<setprecision(2);
        cout<<"Withdraw |$"<<amountWithdraw<<"| New Balance |"<<Balance<<"|"<<endl;
        return Balance;


    }
    void checkBalance(){
        cout<<"Current balance: $"<<Balance<<endl;
    }

    void TransactionHistory(){
        cout<<"Transaction History for account: "<<AccountNumber<<endl;
        cout<<"AccountHolder: "<<AccountHolder<<endl;
        cout<<"----------------------------------------------------"<<endl;
        
        for(const auto& transact:transactions){
            transact.getTransactionDetatils();
        }
       
        checkBalance();
    }


}; //semicolon is important after defining a class

int main(){
    Account acc1=Account("bit","100004545",569000.32);
    acc1.deposit(290.00);
    acc1.checkBalance();

    acc1.withdraw(90.0);
    acc1.checkBalance();
    
    acc1.deposit(50000);
    acc1.checkBalance();
    //acc1.AccountHolder="bit"; begets error as it is declared private



}
