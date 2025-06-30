#include <iostream>
#include <string>
#include <stack>
#include <sstream>
#include <stdexcept>
#include <cmath>
using namespace std;

class RPNCalculator{
private: 
    stack<double>nums;

    bool isOperator(const string& token){
        return(token=="^"||token=="+"||token=="*"||token=="/"||token=="-");
    }

    void performOperation(const string& token){
        if(nums.size()<2){
            throw runtime_error("not enough operands");
        }
        double a=nums.top();
        nums.pop();
        double b=nums.top();
        nums.pop();
         
        if(token=="+"){
            nums.push(b+a);    
        }
        else if(token=="-"){
            nums.push(b-a);
        }
        else if(token=="*"){
            nums.push(b*a);
        }
        else if(token=="/"){
            if(a==0){
                throw runtime_error("Division by zero");
            }
            nums.push(b/a);
        }
        else if(token=="^"){
            nums.push(pow(b,a));
        }

    }

public:
    void processInput(const string& token){
        if(isOperator(token)){
            performOperation(token);
        }
        else{
            try{
                double num=stod(token);
                nums.push(num);

            }catch(...){
                throw runtime_error("Invalid token: " + token);

            }
        }
       

    }
    double getResult(){
        if(nums.size()!=1){
            throw runtime_error("Invalid output");
        }
        return nums.top();
    }
    void clear(){
        while(!(nums.empty())){
            nums.pop();
        }
    }

    
};
int main(){
    
    RPNCalculator calc;
    string input;
    while(true){

        cout<<"Enter q to quit else enter postfix expression >";
        getline(cin,input);  //reads input

        if(input=="q"){
            break;
        }

        istringstream iss(input);
        string token;

        try{
            while(iss>>token){
                calc.processInput(token);

            }
            cout<<"= "<<calc.getResult()<<endl;
            calc.clear();
        }catch(const exception& e){
            cout<<"Error: "<<e.what()<<endl;
        }
    }
        
    return 0;

}