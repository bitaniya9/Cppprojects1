#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <iomanip> //to use setprecision

using namespace std;
class Account{          //class serves as a blueprint for objects
private:   
    string AccountHolder;
    string AccountNumber;
    double Balance;

public:
    Account(string accHolder,string accNumber,double balance){
        AccountHolder=accHolder;
        AccountNumber=accNumber;
        Balance=balance;

    }

    double deposit(double amountDepo){
        if(amountDepo<=0){
            cout<<"Error: depositing.The amount to be deposited has to be of a positive value."<<endl;
            return Balance;
        }
        Balance+=amountDepo;
        cout<<fixed<<setprecision(2);
        cout<<"Your Balance after depositing "<<amountDepo<<"is $"<<Balance<<endl;
        return Balance;

    }
    double withdraw(double amountWithdraw){
        if(amountWithdraw<=0){
            cout<<"Error: withdrawing.The amount to be withdrawn has to be of a positive value."<<endl;
        }
        Balance=Balance-amountWithdraw;

        cout<<fixed<<setprecision(2);
        cout<<"Your Balance after withdrawing "<<amountWithdraw<<"is $"<<Balance<<endl;
        return Balance;
    }
    void checkBalance(){
        cout<<"Your current balance is "<<Balance<<endl;
    }


}; //semicolon is important after defining a class
class Transaction{

};
int main(){
    Account acc1=Account("bit","100004545",569000.32);
    acc1.deposit(290.00);
    acc1.withdraw(90.0);
    acc1.checkBalance();
    //acc1.AccountHolder="bit"; begets error as it is declared private



}
