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
    //int numofChoice=sizeof(choice)/sizeof(choice[0][0]);
    
    char guess;
    
    char t;
    
    

    do{
        cout<<"Welcome to the quiz game!"<<endl;
        int score=0;    //moved the score varaible to the do while loop so that if player wanted to play again it will always start from 0 and not the previous
        
        for(int i=0;i<size;i++){
            
            cout<<questions[i]<<endl;
            cout<<"---------------------------------"<<"\n";

            for(int j=0;j<(sizeof(choice[i])/sizeof(choice[0][i]));j++){
                cout<<choice[i][j]<<endl;

            }
                       
            bool validInput=false;
            while(!validInput){
                cin>>guess;
                guess=toupper(guess);
                //cin.ignore('1000','\n');
                if(guess>='A' && guess<='D'){
                    validInput=true;
                }
                else{
                    cout<<"Your answer should be from A to D. Try again:"<<endl;
                    cin.clear();
                    cin.ignore(1000,'\n');
                }
            }
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

        cout<<"Would like to try again (y/n): ";

        
        bool validInput=false;
        while(!validInput){
            
            cin>>t;
            if(t=='n'|| t=='N'|| t=='Y'|| t=='y'){
                validInput=true;
            }
            else{
                cout<<"Invalid input only y or n are valid"<<endl;
                cin.clear();
                cin.ignore(1000,'\n');
            }

        }

    }while(t=='y'||t=='Y');
    
}