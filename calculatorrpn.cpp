#include <iostream>
#include <string>
#include <stack>
using namespace std;

stack<int>nums;

int main(){
    char ans;
    int num;
    do{cout<<"Enter number: ";
        cin>>num;
        nums.push(num);
        cout<<"Do you want to enter another number?(y/n)"<<endl;
        cin>>ans;
        ans=tolower(ans);
        if(ans!='y' && ans!='n'){
            cout<<"Please enter either y or n!"<<endl;
            return -1;
        }
    }while(ans=='y');

    char op;
    while(true){
        cout<<"Enter operator(+,-,/,*) or 'q'to quit: ";
        cin>>op;
        if(op=='q'){
            break;
        }
        if(op=='+'||op=='-' ||op=='*' ||op=='/'){
            if(nums.size()<2){
                cout<<"not enough operands"<<endl;
                continue;
            
            }
            int num1=nums.top();
            nums.pop();

            int num2=nums.top();
            nums.pop();

            int result;
            switch(op){
                case('+'):
                    result=num2+num1;
                    break;

                case('-'):
                    result=num2-num1;
                    break;
                
                case('*'):
                    result=num2*num1;
                    break;

                case('/'):
                    if(num1==0){
                        cout<<"Division by zero!"<<endl;
                        nums.push(num2);
                        nums.push(num1); //restore numbers back to stack
                        continue;
                    }
                    result=num2/num1;
                    break;

                default:
                    cout<<"Try again!"<<endl;

            }
            
            nums.push(result);
            cout<<"result "<<nums.top()<<endl;

        }
        else{
            cout<<"Invalid operator"<<endl;
        }

    } 
        
}
  


