#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string>tasks;
void addTask(){
    string task;
    cout<<"Enter the task you like to add: "<<endl;
    getline(cin>>ws, task);  //since it cuts of white spaces; 
    tasks.push_back(task);
    cout<<"Your task"<<task<<"has been saved to tasks"<<endl;
}
void viewTask(){
    if(tasks.empty()){
        cout<<"No tasks have been added yet"<<endl;
        return;
    }
    cout<<"~~~TO-DO-LIST~~~\n";
    for(int i=0;i<tasks.size();i++){
        string T;
        T=tasks.at(i);
        cout<<i+1<<". "<<T<<endl;
    }

}
void deleteTask(){
    viewTask();
    if(tasks.empty()){
        cout<<"Nothing in tasks"<<endl;
        return;
    }
    string toBdeleted;
    cout<<"Which of the tasks would you like to delete: (Enter the numbers associated with them)"<<endl;
    getline(cin>>ws,toBdeleted);

    if(stoi(toBdeleted)<1 || stoi(toBdeleted)>tasks.size()){
        cout<<"Out of range"<<endl;
        return;
    }

    tasks.erase(tasks.begin()+ stoi(toBdeleted)-1);
    viewTask();
    cout<<"Task deleted"<<endl;
}

int main(){
    int choice;

    while(true){
        cout<<"~~~~OUR TO DO LIST MENU~~~"<<endl;
        cout<<"1. Add task to list"<<"\n"
            <<"2. View tasks "<<"\n"
            <<"3. Delete tasks"<<"\n"
            <<"4. Exit"<<endl;

        cout<<"What would you like to do : "<<"\n";
        
        try{
            cin>>choice;
            cout<<"You have chosen "<<choice<<endl;
            switch(choice){
                case(1):
                    addTask();
                    break;
                case(2):
                    viewTask();
                    break;
                case(3):
                    deleteTask();
                    break;
                
                case(4):
                    cout<<"Program exited"<<endl;
                    return 0;
                default:
                    cout<<"Thank you for using our to do list!"<<endl;
                    break;
                
            }
        }catch(...){
            cout<<"Unknown Error has occured"<<endl;
            cin.clear(); 
            cin.ignore(1000, '\n');
        }

    }

}//don't forget edit to catch errors prevent crashing
