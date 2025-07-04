#include <iostream>
#include <string>
using namespace std;


int main(){
 
    string questions[]={"1. What is the predecessor of C++ ?",
                        "2. Who is discovered and theorized the Laws of Motion?",
                        "3. What is the shape of the Earth?",
                        "4. Who was the last Emperor of Ethiopia?"};   //element

    

    string choice[][4]={{"A.Java","B.C#","C.C","D.Python  "},   //first row two dimensional
                        {"A.Albert Einstein","B.Louis Pastuer","C.VanHelsing","D.Issac Newton "},
                        {"A.Sphere","B.Circle","C.Oval","D.Flat "},
                        {"A.Menlik I","B.HaileSelassie","C.Tewodros","D.Abebe "}};
                    



    char correct[]={'C','D','A','B'};
    int size=sizeof(questions)/sizeof(questions[0]);
    
    char guess;
    int score=0;
    char t;


    do{
        cout<<"Welcome to the quiz game!"<<endl;
        
        for(int i=0;i<size;i++){
            
            cout<<questions[i]<<endl;
            cout<<"---------------------------------"<<"\n";

            for(int j=0;j<(sizeof(choice[i])/sizeof(choice[0][i]));j++){
                cout<<choice[i][j]<<endl;

            }
            
        
            cin>>guess;
            guess=toupper(guess);
            if(guess==correct[i]){
                cout<<"Correct"<<endl;
                score++;
            }
            else{
                cout<<"Wrong"<<endl;
                cout<<"The correct answer was "<<correct[i]<<endl;
            }
        }
        cout<<"You have scored a: "<<score<<"/"<<size<<endl;

        cout<<"Would like to continue(y/n): ";

        cin>>t;
        while(t!='n'&& t!='N'&& t!='Y'&& t!='y'){
            cout<<"Invalid input only y or n are valid"<<endl;
        }
        

    }while(t=='y'&& t=='Y');
    



    
}