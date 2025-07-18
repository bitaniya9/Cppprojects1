<<<<<<< HEAD
#include <iostream>
#include <string>

using namespace std;
class Player{           //stores information on the players
// private:            //using encapsulation
public:
    string name;
    char symbol;
    
public:

    // Player(string n,char sign){
    //     name=n;
    //     symbol=sign;
    // }
    // string getName(){return name;}
    // string getSymbol(){return symbol;}

};
class Board{
public:
    char board[3][3]={{' ',' ',' '},
                    {' ',' ',' '},
                    {' ',' ',' '}};
    
    void displayBoard(){
        // int numBoard=(sizeof(board)/sizeof(board[0][0]));
        
        cout<<"\n  0    1    2 \n"; //header for columns
        
        for(int i=0;i<3;i++){
            cout<<i<<" ";    //rowheader
            
            for(int j=0;j<3;j++){
                cout<<" "<<board[i][j]<<" ";
            
                if (j<2){               //modfications
                    cout<<"| ";
                }
            }
            cout<<"\n";
            
            if(i<2){                //modfications
                cout<<"---------------\n" ;     //to mark the end of the board
            }  
        }
    }


    bool makeMove(const int row,const int column,char symbol ){
        if(row<0 || row>=3 || column<0 ||column>=3){
            return false;
        }
        if(board[row][column]!=' '){
            return false;
        }
        board[row][column]=symbol;
        return true;

    }


    bool isFull(){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){

                if(board[i][j]==' '){
                    return false;      //if an empty space is found
                }
                // if(board[i][j]!=' '){
                //     return true; //this was wrong because if it find one spot that is not empty it returns true
                // }
            }
        }
        return true;
    }

    bool checkWin(char symbol){
        
        for(int i=0;i<3;i++){
            // for rows
            if(board[i][0]==symbol && board[i][1]==symbol && board[i][2]==symbol){
                return true;
            }   

        }
        for(int j=0;j<3;j++){
            // for columns

            if(board[0][j]==symbol &&board[1][j]==symbol && board[2][j]==symbol){
                return true;
            }   
        }
        //for the diagonals
        if(board[0][0]==symbol &&board[1][1]==symbol && board[2][2]==symbol){
            return true;
        }
        
        if(board[0][2]==symbol &&board[1][1]==symbol && board[2][0]==symbol){
            return true;
        } 
        return false;

    }
    bool checkDraw(){           // if nobody wins it is a draw
        if(isFull()){
            if((!checkWin('X')) && (!checkWin('Y'))){
                cout<<"It is a DRAW!!"<<endl;
                return true;
            }
        }
        return false;
    }
    
    

};

class Game{
public:
    Board b1;
    Player player1;
    Player player2;
    Player* currentPlayer;

    Game(){
        
        cout<<"Enter your name Player 1: ";
        cin>>player1.name;

        while(true){
            cout<<"Choose a symbol X or O: ";
            player1.symbol=toupper(player1.symbol);

            cin>>player1.symbol;
            player1.symbol=toupper(player1.symbol);

            if(player1.symbol=='X' || player1.symbol=='O'){
                break;
            }
            cout<<"Enter another symbol"<<endl;
            cin.clear();
            cin.ignore(10000,'\n');

            if(cin.fail()){
        
                cin.clear();
                cin.ignore(10000,'\n');

            }

        }
        
    
        
        if(player1.symbol!='X'&& player1.symbol!='O'){
            cout<<"Symbol must be X or O: ";
            cin.clear();
            cin.ignore(10000,'\n');
        }

        cout<<'\n';

        cout<<"Enter your name Player 2: ";
        cin>>player2.name;

        player2.symbol=(player1.symbol=='X'? 'O' : 'X');

        cout<<player2.name<<" is "<<player2.symbol<<endl;

        currentPlayer=&player1;

        // gameOver=false;
    }

    
    
    void switchPlayer(){
        currentPlayer=((currentPlayer==&player1)? &player2 : &player1);        
    }
    //used conditional ternary operator

    void start(){

        bool gameOver=false;

        cout<<"Welcome "<<player1.name<<" and "<<player2.name<<endl;
        cout<<player1.name<<" as "<<player1.symbol<<" VS "<<player2.name<<" as "<<player2.symbol<<endl;
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;


        while(!gameOver){
            b1.displayBoard();
            cout<<currentPlayer->name<<"'s turn ("<<currentPlayer->symbol<<")"<<endl;

            int row,column;

            while(true){

                cout<<"Enter row: ";
                cin>>row;
                cout<<'\n';

                cout<<"Enter column: ";
                cin>>column;
                cout<<'\n';

                if(row>2 || row<0 || column>2 || column<0){
                    break;
                    cout<<"Invalid position"<<endl;
                }
                if(cin.fail()){
                    cin.clear();
                    cin.ignore(10000,'\n');
                    cout<<"Invalid input"<<endl;
                }
                else{
                    break;
                }
            }
            

            if(b1.makeMove(row,column,currentPlayer->symbol)){
                
                if(b1.checkWin(currentPlayer->symbol)){
                    b1.displayBoard();
                    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                    cout<<currentPlayer->name<<" has won the game Congrats!"<<endl;
                    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;

                    gameOver=true;

                }
                else if(b1.checkDraw()){
                    b1.displayBoard();
                    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                    cout<<"Well played It is a draw!"<<endl;
                    gameOver=true;

                }
                else{
                    switchPlayer();
                }
            }
            else{
                cout<<"Invalid move!"<<endl;
            }
        }
    }

};
int main(){
    
    Board b1;
    Game game1;
    char ans;

    do{ 
        game1.start();
        cout<<"Would you like to try again(y/n)?";
        cin>>ans;
        if(ans!='y' && ans!='n' && ans!='Y' && ans!='N'){
            cout<<"Enter y or n for yes and no respectively!";
            cin.clear();
            cin.ignore(10000,'\n');
        }
        
    }while(ans=='y' || ans=='Y');
    
    
    return 0;
    

}
