<<<<<<< HEAD
#include <iostream>
#include <string>
#include <vector>
#include <map>


using namespace std;

enum class Type{
    NORMAL, FIRE, WATER, ELECTRIC, GRASS, ICE, FIGHTING, POISON, GROUND, 
    FLYING, PSYCHIC, BUG, ROCK, GHOST, DRAGON, DARK, STEEL, FAIRY,COUNT

};
const int TypeCount=static_cast<int>(Type::COUNT);

double typeEffectiveness[TypeCount][TypeCount];

for(int i=0;i<TypeCount;i++){
    for(int j=0;j<TypeCount;j++){
        typeEffectiveness[i][j]=1.0;
    }
}
// typeEffectiveness[static_cast<int>(Type::NORMAL)][static_cast<int>(Type::NORMAL)]=;
// typeEffectiveness[static_cast<int>(Type::NORMAL)][static_cast<int>(Type::FIRE)]=;
// typeEffectiveness[static_cast<int>(Type::NORMAL)][static_cast<int>(Type::WATER)]=;
// typeEffectiveness[static_cast<int>(Type::NORMAL)][static_cast<int>(Type::GRASS)]=;
// typeEffectiveness[static_cast<int>(Type::NORMAL)][static_cast<int>(Type::ELECTRIC)]=;

typeEffectiveness[static_cast<int>(Type::NORMAL)][static_cast<int>(Type::ROCK)]=0.5;
typeEffectiveness[static_cast<int>(Type::NORMAL)][static_cast<int>(Type::GHOST)]=0;
typeEffectiveness[static_cast<int>(Type::NORMAL)][static_cast<int>(Type::STEEL)]=0.5;

typeEffectiveness[static_cast<int>(Type::FIRE)][static_cast<int>(Type::FIRE)]=0.5;

typeEffectiveness[static_cast<int>(Type::FIRE)][static_cast<int>(Type::WATER)]=0.5;
typeEffectiveness[static_cast<int>(Type::FIRE)][static_cast<int>(Type::GRASS)]=2;
typeEffectiveness[static_cast<int>(Type::FIRE)][static_cast<int>(Type::ICE)]=2;
typeEffectiveness[static_cast<int>(Type::FIRE)][static_cast<int>(Type::BUG)]=2;
typeEffectiveness[static_cast<int>(Type::FIRE)][static_cast<int>(Type::ROCK)]=0.5;
typeEffectiveness[static_cast<int>(Type::FIRE)][static_cast<int>(Type::DRAGON)]=0.5;
typeEffectiveness[static_cast<int>(Type::FIRE)][static_cast<int>(Type::STEEL)]=2;


typeEffectiveness[static_cast<int>(Type::WATER)][static_cast<int>(Type::FIRE)]=2;
typeEffectiveness[static_cast<int>(Type::WATER)][static_cast<int>(Type::GRASS)]=0.5;
typeEffectiveness[static_cast<int>(Type::WATER)][static_cast<int>(Type::WATER)]=0.5;
typeEffectiveness[static_cast<int>(Type::WATER)][static_cast<int>(Type::GROUND)]=2;
typeEffectiveness[static_cast<int>(Type::WATER)][static_cast<int>(Type::ROCK)]=2;
typeEffectiveness[static_cast<int>(Type::WATER)][static_cast<int>(Type::DRAGON)]=0.5;

typeEffectiveness[static_cast<int>(Type::GRASS)][static_cast<int>(Type::FIRE)]=0.5;
typeEffectiveness[static_cast<int>(Type::GRASS)][static_cast<int>(Type::WATER)]=2;

typeEffectiveness[static_cast<int>(Type::GRASS)][static_cast<int>(Type::GRASS)]=0.5;

typeEffectiveness[static_cast<int>(Type::GRASS)][static_cast<int>(Type::POISON)]=0.5;
typeEffectiveness[static_cast<int>(Type::GRASS)][static_cast<int>(Type::GROUND)]=2;
typeEffectiveness[static_cast<int>(Type::GRASS)][static_cast<int>(Type::FLYING)]=0.5;
typeEffectiveness[static_cast<int>(Type::GRASS)][static_cast<int>(Type::BUG)]=0.5;
typeEffectiveness[static_cast<int>(Type::GRASS)][static_cast<int>(Type::ROCK)]=2;
typeEffectiveness[static_cast<int>(Type::GRASS)][static_cast<int>(Type::DRAGON)]=0.5;
typeEffectiveness[static_cast<int>(Type::GRASS)][static_cast<int>(Type::STEEL)]=0.5;

typeEffectiveness[static_cast<int>(Type::ELECTRIC)][static_cast<int>(Type::WATER)]=2;
typeEffectiveness[static_cast<int>(Type::ELECTRIC)][static_cast<int>(Type::GRASS)]=0.5;

typeEffectiveness[static_cast<int>(Type::ELECTRIC)][static_cast<int>(Type::ELECTRIC)]=0.5;
typeEffectiveness[static_cast<int>(Type::ELECTRIC)][static_cast<int>(Type::FLYING)]=2;
typeEffectiveness[static_cast<int>(Type::ELECTRIC)][static_cast<int>(Type::GROUND)]=0;
typeEffectiveness[static_cast<int>(Type::ELECTRIC)][static_cast<int>(Type::DRAGON)]=0.5;

typeEffectiveness[static_cast<int>(Type::ICE)][static_cast<int>(Type::FIRE)]=0.5;
typeEffectiveness[static_cast<int>(Type::ICE)][static_cast<int>(Type::WATER)]=0.5;
typeEffectiveness[static_cast<int>(Type::ICE)][static_cast<int>(Type::GRASS)]=2;
typeEffectiveness[static_cast<int>(Type::ICE)][static_cast<int>(Type::ICE)]=0.5;
typeEffectiveness[static_cast<int>(Type::ICE)][static_cast<int>(Type::GROUND)]=2;
typeEffectiveness[static_cast<int>(Type::ICE)][static_cast<int>(Type::FLYING)]=0.5;
typeEffectiveness[static_cast<int>(Type::ICE)][static_cast<int>(Type::DRAGON)]=2;
typeEffectiveness[static_cast<int>(Type::ICE)][static_cast<int>(Type::STEEL)]=0.5;

typeEffectiveness[static_cast<int>(Type::FIGHTING)][static_cast<int>(Type::NORMAL)]=0.5;
typeEffectiveness[static_cast<int>(Type::FIGHTING)][static_cast<int>(Type::ICE)]=2;
typeEffectiveness[static_cast<int>(Type::FIGHTING)][static_cast<int>(Type::POISON)]=0.5;
typeEffectiveness[static_cast<int>(Type::FIGHTING)][static_cast<int>(Type::FLYING)]=0.5;

typeEffectiveness[static_cast<int>(Type::FIGHTING)][static_cast<int>(Type::PSYCHIC)]=0.5;
typeEffectiveness[static_cast<int>(Type::FIGHTING)][static_cast<int>(Type::BUG)]=0.5;
typeEffectiveness[static_cast<int>(Type::FIGHTING)][static_cast<int>(Type::ROCK)]=2;
typeEffectiveness[static_cast<int>(Type::FIGHTING)][static_cast<int>(Type::GHOST)]=0;

typeEffectiveness[static_cast<int>(Type::FIGHTING)][static_cast<int>(Type::DARK)]=2;
typeEffectiveness[static_cast<int>(Type::FIGHTING)][static_cast<int>(Type::STEEL)]=2;
typeEffectiveness[static_cast<int>(Type::FIGHTING)][static_cast<int>(Type::FAIRY)]=0.5;

typeEffectiveness[static_cast<int>(Type::POISON)][static_cast<int>(Type::GRASS)]=2;
typeEffectiveness[static_cast<int>(Type::POISON)][static_cast<int>(Type::POISON)]=0.5;
typeEffectiveness[static_cast<int>(Type::POISON)][static_cast<int>(Type::GROUND)]=0.5;
typeEffectiveness[static_cast<int>(Type::POISON)][static_cast<int>(Type::ROCK)]=0.5;
typeEffectiveness[static_cast<int>(Type::POISON)][static_cast<int>(Type::GHOST)]=0.5;
typeEffectiveness[static_cast<int>(Type::POISON)][static_cast<int>(Type::STEEL)]=0;
typeEffectiveness[static_cast<int>(Type::POISON)][static_cast<int>(Type::FAIRY)]=2;

typeEffectiveness[static_cast<int>(Type::GROUND)][static_cast<int>(Type::FIRE)]=2;
typeEffectiveness[static_cast<int>(Type::GROUND)][static_cast<int>(Type::GRASS)]=0.5;
typeEffectiveness[static_cast<int>(Type::GROUND)][static_cast<int>(Type::ELECTRIC)]=2;
typeEffectiveness[static_cast<int>(Type::GROUND)][static_cast<int>(Type::POISON)]=2;
typeEffectiveness[static_cast<int>(Type::GROUND)][static_cast<int>(Type::FLYING)]=0;
typeEffectiveness[static_cast<int>(Type::GROUND)][static_cast<int>(Type::BUG)]=0.5;
typeEffectiveness[static_cast<int>(Type::GROUND)][static_cast<int>(Type::ROCK)]=2;
typeEffectiveness[static_cast<int>(Type::GROUND)][static_cast<int>(Type::STEEL)]=2;

typeEffectiveness[static_cast<int>(Type::FLYING)][static_cast<int>(Type::GRASS)]=2;
typeEffectiveness[static_cast<int>(Type::FLYING)][static_cast<int>(Type::ELECTRIC)]=0.5;
typeEffectiveness[static_cast<int>(Type::FLYING)][static_cast<int>(Type::FIGHTING)]=2;
typeEffectiveness[static_cast<int>(Type::FLYING)][static_cast<int>(Type::BUG)]=2;
typeEffectiveness[static_cast<int>(Type::FLYING)][static_cast<int>(Type::ROCK)]=0.5;
typeEffectiveness[static_cast<int>(Type::FLYING)][static_cast<int>(Type::STEEL)]=0.5;

typeEffectiveness[static_cast<int>(Type::PSYCHIC)][static_cast<int>(Type::FIGHTING)]=2;
typeEffectiveness[static_cast<int>(Type::PSYCHIC)][static_cast<int>(Type::POISON)]=2;
typeEffectiveness[static_cast<int>(Type::PSYCHIC)][static_cast<int>(Type::PSYCHIC)]=0.5;
typeEffectiveness[static_cast<int>(Type::PSYCHIC)][static_cast<int>(Type::DARK)]=0;
typeEffectiveness[static_cast<int>(Type::PSYCHIC)][static_cast<int>(Type::STEEL)]=0.5;


typeEffectiveness[static_cast<int>(Type::BUG)][static_cast<int>(Type::FIRE)]=0.5;
typeEffectiveness[static_cast<int>(Type::BUG)][static_cast<int>(Type::GRASS)]=2;
typeEffectiveness[static_cast<int>(Type::BUG)][static_cast<int>(Type::FIGHTING)]=0.5;
typeEffectiveness[static_cast<int>(Type::BUG)][static_cast<int>(Type::POISON)]=0.5;
typeEffectiveness[static_cast<int>(Type::BUG)][static_cast<int>(Type::FLYING)]=0.5;
typeEffectiveness[static_cast<int>(Type::BUG)][static_cast<int>(Type::PSYCHIC)]=2;
typeEffectiveness[static_cast<int>(Type::BUG)][static_cast<int>(Type::GHOST)]=0.5;
typeEffectiveness[static_cast<int>(Type::BUG)][static_cast<int>(Type::DARK)]=2;
typeEffectiveness[static_cast<int>(Type::BUG)][static_cast<int>(Type::FAIRY)]=0.5;
typeEffectiveness[static_cast<int>(Type::BUG)][static_cast<int>(Type::STEEL)]=0.5;

typeEffectiveness[static_cast<int>(Type::ROCK)][static_cast<int>(Type::FIRE)]=2;
typeEffectiveness[static_cast<int>(Type::ROCK)][static_cast<int>(Type::ICE)]=2;
typeEffectiveness[static_cast<int>(Type::ROCK)][static_cast<int>(Type::FIGHTING)]=0.5;
typeEffectiveness[static_cast<int>(Type::ROCK)][static_cast<int>(Type::GROUND)]=0.5;
typeEffectiveness[static_cast<int>(Type::ROCK)][static_cast<int>(Type::FLYING)]=2;
typeEffectiveness[static_cast<int>(Type::ROCK)][static_cast<int>(Type::BUG)]=2;
typeEffectiveness[static_cast<int>(Type::ROCK)][static_cast<int>(Type::STEEL)]=0.5;

typeEffectiveness[static_cast<int>(Type::GHOST)][static_cast<int>(Type::NORMAL)]=0;
typeEffectiveness[static_cast<int>(Type::GHOST)][static_cast<int>(Type::PSYCHIC)]=2;
typeEffectiveness[static_cast<int>(Type::GHOST)][static_cast<int>(Type::GHOST)]=2;
typeEffectiveness[static_cast<int>(Type::GHOST)][static_cast<int>(Type::DARK)]=0.5;

typeEffectiveness[static_cast<int>(Type::DRAGON)][static_cast<int>(Type::DRAGON)]=2;
typeEffectiveness[static_cast<int>(Type::DRAGON)][static_cast<int>(Type::STEEL)]=0.5;
typeEffectiveness[static_cast<int>(Type::DRAGON)][static_cast<int>(Type::FAIRY)]=0;


typeEffectiveness[static_cast<int>(Type::DARK)][static_cast<int>(Type::FIGHTING)]=0.5;
typeEffectiveness[static_cast<int>(Type::DARK)][static_cast<int>(Type::PSYCHIC)]=0.5;
typeEffectiveness[static_cast<int>(Type::DARK)][static_cast<int>(Type::GHOST)]=0.5;
typeEffectiveness[static_cast<int>(Type::DARK)][static_cast<int>(Type::DARK)]=0.5;
typeEffectiveness[static_cast<int>(Type::DARK)][static_cast<int>(Type::FAIRY)]=0.5;


typeEffectiveness[static_cast<int>(Type::STEEL)][static_cast<int>(Type::FIRE)]=0.5;
typeEffectiveness[static_cast<int>(Type::STEEL)][static_cast<int>(Type::WATER)]=0.5;
typeEffectiveness[static_cast<int>(Type::STEEL)][static_cast<int>(Type::ELECTRIC)]=0.5;
typeEffectiveness[static_cast<int>(Type::STEEL)][static_cast<int>(Type::ICE)]=2;
typeEffectiveness[static_cast<int>(Type::STEEL)][static_cast<int>(Type::ROCK)]=0.5;
typeEffectiveness[static_cast<int>(Type::STEEL)][static_cast<int>(Type::STEEL)]=0.5;
typeEffectiveness[static_cast<int>(Type::STEEL)][static_cast<int>(Type::FAIRY)]=2;


typeEffectiveness[static_cast<int>(Type::FAIRY)][static_cast<int>(Type::FIRE)]=0.5;
typeEffectiveness[static_cast<int>(Type::FAIRY)][static_cast<int>(Type::FIGHTING)]=2;
typeEffectiveness[static_cast<int>(Type::FAIRY)][static_cast<int>(Type::POISON)]=0.5;
typeEffectiveness[static_cast<int>(Type::FAIRY)][static_cast<int>(Type::DRAGON)]=2;
typeEffectiveness[static_cast<int>(Type::FAIRY)][static_cast<int>(Type::STEEL)]=0.5;
typeEffectiveness[static_cast<int>(Type::FAIRY)][static_cast<int>(Type::DARK)]=2;


enum class MoveCategory{
    PHYSICAL,SPECIAL,STATUS //status moves non damaging
};
class Move{
private:
    string name;
    Type type;
    int power;
    int accuracy;
    MoveCategory category;
    string effect;
    //map<string>map;

public:
    string getName(){return name;}
    Type getType(){return type;}
    int getPower(){return power;}
    int getAccuracy(){return accuracy;}
    MoveCategory getCategory(){return category;}
    string getEffect(){return effect;}

    Move()
        :name(""),type(Type::Normal),power(0),accuracy(0),category(MoveCategory::STATUS),effect(""){}  // this is a default constructor assigns defalult so,that the constructor can be called on empty like Move()

    Move(string n,Type typ,int pwr,int accr, MoveCategory catgry,string effct)
        :name(n),type(typ),power(pwr),accuracy(accr),category(catgry),effect(effct);  

    {}

    
};
class Pokemon{
public:
    string name;
    Type type;
    int maxHP=100;
    int currentHP=100;
    int speed;
    Move moves[4]={};

    Pokemon(string nam,Type typ,int hp,int spd){
        name=nam;
        type=typ;
        HP=hp;
        speed=spd;

        for(int i=0;i<4;i++){
            moves[i]=Move(); //initialize with empty moves
        }
    }

    void attack(){
// user picks one of the moves of the pokemon to attack and make a subtraction of hp if not properly defended
    }
   
    bool defense(){
// don't know how defense works in pokemon 
    }

    int takeDamage(int amount){
        currentHP=max(0,currentHP-amount);
        cout<<currentHP;
        return currentHP;
    }
    
    
    bool useItems(){ 
// used to heal damage 
    }
    
    bool isFainted(){
        if(currentHP==0){
            return true;
        }
        return false;
    }
    void useRevive(){
        if(isFainted()){
            currentHP=maxHP/2;
        }
    }


};

class Player{
public:
    vector<Pokemon>Pmonteam;
    int activePokemon=0; //originally was not initiallized but was told initiallizing to 0 is safe for vector and arrays

    void collectPokemon(const Pokemon& p){
        if(Pmonteam.size()<6){       
            Pmonteam.push_back(p);
        }
        else{
            cout<<"Team is full!"<<endl;
        }
    }

    void sendOut(int index){
        if(index<0 || index>=Pmonteam.size()){
            cout<<"Index out of range!"<<endl;
            return 0;
        }
        // if(activePokemon==index){
        //     cout<<"Can't switch to the same index."<<endl;
        // }
        activePokemon=index;
    }

    void getActivePokemon(){
        activePmon=Pmonteam[activePokemon];
        cout<<activePmon<<endl;
    }

    bool switchPokemon(int index){
        if(index<0 || index<Pmonteam.size()){
            cout<<"Index out of range!"<<endl;
            return false;
        }
        if(activePokemon==index){
            cout<<"Can't switch to the same Pokemon."<<endl;
            return false;
        }
        if((Pmonteam[index].isFainted())){
            cout<<Pmonteam[index].name<< "has fainted !"<<endl;
            return false;
        }
        activePokemon=index;
        cout<<"Go! "<<Pmonteam[index].name<<endl;
        return true;
    }


}
class Battle{
    



};

int main(){
    
   
=======
#include <iostream>
#include <string>
#include <vector>
#include <map>


using namespace std;

enum class Type{
    NORMAL, FIRE, WATER, ELECTRIC, GRASS, ICE, FIGHTING, POISON, GROUND, 
    FLYING, PSYCHIC, BUG, ROCK, GHOST, DRAGON, DARK, STEEL, FAIRY

};
enum class MoveCategory{
    PHYSICAL,SPECIAL,STATUS //status moves non damaging
};
class Move{
private:
    string name;
    Type type;
    int power;
    int accuracy;
    MoveCategory category;
    string effect;
    //map<string>map;

public:
    string getName(){return name;}
    Type getType(){return type;}
    int getPower(){return power;}
    int getAccuracy(){return accuracy;}
    MoveCategory getCategory(){return category;}
    string getEffect(){return effect;}

    Move()
        :name(""),type(Type::Normal),power(0),accuracy(0),category(MoveCategory::STATUS),effect(""){}  // this is a default constructor assigns defalult so,that the constructor can be called on empty like Move()

    Move(string n,Type typ,int pwr,int accr, MoveCategory catgry,string effct)
        :name(n),type(typ),power(pwr),accuracy(accr),category(catgry),effect(effct);  

    {}

    
};
class Pokemon{
public:
    string name;
    Type type;
    int HP;
    int speed;
    Move moves[4]={};

    Pokemon(string nam,Type typ,int hp,int spd){
        name=nam;
        type=typ;
        HP=hp;
        speed=spd;

        for(int i=0;i<4;i++){
            moves[i]=Move(); //initialize with empty moves
        }
    }

    void attack(){
// user picks one of the moves of the pokemon to attack and make a subtraction of hp if not properly defended
    }
   
    bool defense(){
// don't know how defense works in pokemon 
    }
    
    
    bool useItems(){ 
// used to heal damage 
    }
    
    bool isFainted(){
        if(HP==0){
            return true;
        }
        return false;
    }


};

class Player{
public:
    vector<Pokemon>Pmonteam;
    int activePokemon=0; //originally was not initiallized but was told initiallizing to 0 is safe for vector and arrays

    void collectPokemon(const Pokemon& p){
        if(Pmonteam.size()<6){       
            Pmonteam.push_back(p);
        }
        else{
            cout<<"Team is full!"<<endl;
        }
    }

    void sendOut(int index){
        if(index<0 || index>=Pmonteam.size()){
            cout<<"Index out of range!"<<endl;
            return 0;
        }
        // if(activePokemon==index){
        //     cout<<"Can't switch to the same index."<<endl;
        // }
        activePokemon=index;
    }

    void getActivePokemon(){
        activePmon=Pmonteam[activePokemon];
        cout<<activePmon<<endl;
    }

    bool switchPokemon(int index){
        if(index<0 || index<Pmonteam.size()){
            cout<<"Index out of range!"<<endl;
            return false;
        }
        if(activePokemon==index){
            cout<<"Can't switch to the same Pokemon."<<endl;
            return false;
        }
        if((Pmonteam[index].isFainted())){
            cout<<Pmonteam[index].name<< "has fainted !"<<endl;
            return false;
        }
        activePokemon=index;
        cout<<"Go! "<<Pmonteam[index].name<<endl;
        return true;
    }


}
class Game{
    Player* currentPlayer; // to keep track of the next player
    Pokemon pokemon1;
    Player player1

    void start(){
        int choice;
        cout<<"Welcome to the pokemon battle simulator"<<endl;
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
        cout<<"Time to send out your pokemon!"<<currentPlayer<<endl;
        player1.sendout(1);


        // cout<<"What would you like for your pokemon to do "<<currentPlayer->name<<endl;
        // cout<<"1. Attack"<<endl;
        // cout<<"2. Defend"<<endl;
        // cout<<"3. Heal"<<endl;
        // cout<<"3. Switch Pokemon"<<endl;

        // cin>>choice;
        // switch(choice){
        //     case 1:
        //         pokemon1.attack();
        //     case 2:
        //         pokemon1.defense();
        //     case 3:
        //         pokemon1.useItems();
        //     case 4:
        //         pokemon1.switchPokmon();
        //     default:
        //         return 0;
        // }
    }


};

int main(){
    
   
>>>>>>> 6bf494acfd52e71480007c5093b3a1da639059a7
}