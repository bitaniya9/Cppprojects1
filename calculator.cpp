#include <iostream>
#include <vector>
using namespace std;


int main(){
    cout<<"~~My Calculator~~"<<endl;
    
    char ans;
    do{ 
        
        cout<<"Enter the first number you want to calculate: "<<endl;
        double num1;
        
        while(!(cin>>num1)){
            cin.clear();
            cin.ignore(1000,'\n');
            cout<<"Invalid Input!Enter another number: ";
        } 
    
        char y;
        cout<<"What is operation you would like to perform (+,-,/,*)"<<endl;
        cin>>y; 
        if(y!='+'&& y!='-'&& y!='*'&& y!='/'){
            cout<<"Please specify the operation from the given characters."<<endl;
            return -1;
        }

        double num2;
        cout<<"Enter the second number you want to calculate: "<<endl;
        
        while(!(cin>>num2)){
            cin.clear();
            cin.ignore(1000,'\n');
            cout<<"Invalid number.Enter a number: "<<endl;
        }
        

        switch(y){
            case('+'):

                double answer;
                answer=num1+num2;
                cout<<num1<<y<<num2<<"="<<answer<<endl; 
                break;

            case('-'):
                
                answer=num1-num2;
                cout<<num1<<y<<num2<<"="<<answer<<endl; 
                break;

            case('*'):
    
                answer=num1*num2;
                cout<<num1<<y<<num2<<"="<<answer<<endl;             
                break;

            case ('/'):

                answer=num1/num2;
                cout<<num1<<y<<num2<<"="<<answer<<endl;   
                break;
            
            default:
                cout<<"try again"<<endl;
                
        }
        cout<<"Continue? (y/n)" << endl;
        cin >> ans;
        if(ans!='y' && ans!='n'){
            cout<<"Please enter a valid character 'y' or 'n'!"<<endl;
        }
        ans=tolower(ans);

    }while(ans=='y');

}