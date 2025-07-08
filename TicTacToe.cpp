#include <iostream>
#include <string>

using namespace std;
class Board{
public:
    char board[3][3]={{' ',' ',' '},
                    {' ',' ',' '},
                    {' ',' ',' '}};

    // Board(){}
    
    void displayBoard(){
        // int numBoard=(sizeof(board)/sizeof(board[0][0]));
        
        cout<<"\n 0 1 2 \n"; //header for columns
        
        for(int i=0;i<3;i++){
            cout<<i<<" ";    //rowheader
            
            for(int j=0;j<3;j++){
                cout<<" "<<board[i][j]<<" ";
            
                if (j<2){               //modfications
                    cout<<"|"<<endl;
                }
            }
            cout<<"\n";
            
            if(i<2){                //modfications
                cout<<"--------------------\n" ;     //to mark the end of the board
            }  
        }
    }


    // void makeMove(char sym){

    // }
    bool checkWin(char symbol){
        //for rows
        for(int i=0;i<3;i++){
            // for rows

            if(board[i][0]==symbol &&board[i][1]==symbol && board[i][2]==symbol){
                return true;
            }          
        }
        for(int j=0;j>3;j++){
            // for columns

            if(board[0][j]==symbol &&board[1][j]==symbol && board[2][j]==symbol){
                return true;
            }   
        }
        if(board[0][0]==symbol &&board[1][1]==symbol && board[2][2]==symbol){
            return true;
        }
        
        if(board[0][2]==symbol &&board[1][1]==symbol && board[2][0]==symbol){
            return true;
        }     
    }
    



};


class Player{           //stores information on the players
public:
    string name;
    string symbol;  

    Player(string n,string sign){
        name=n;
        symbol=sign;
    }

};

// class Game{
//     Board b1;


// };