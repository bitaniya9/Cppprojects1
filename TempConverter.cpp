#include <iostream>
#include <string>
using namespace std;

int tempconvertF2C(int tempF){

    tempF=0.55*(tempF -32);
    cout<<"Temperature in celisius is: "<<tempF<<"C"<<endl;
    return tempF;


}
int tempconvertC2F(int tempC){
    tempC=(1.8*tempC +32);
    cout<<"Temperature in fahrenhiet is: "<<tempC<<"F"<<endl;
    return tempC;

}

int main(){

    string input;
    cout<<"What are the temperature readings today: ";
    cin>>input;

    cout<<"You have entered "<<input<<endl;

    //transform(input.begin(),input.end(),input.begin()::toupper);

    for(char &c:input){
        c=toupper(c);
    }

    size_t fpos=input.find('F');
    size_t Cpos=input.find('C');

    //int tempNum=stoi(input);

    try{
        int tempNum=stoi(input);
        if(fpos!=string::npos){

           tempconvertF2C(tempNum);
        }
        else if(Cpos!=string::npos){
            tempconvertC2F(tempNum);

        }
        else{
            cout<<"Please specify units used!"<<endl;
        }
    }catch(const invalid_argument& e){
        cout<<"Invalid input! Enter a valid number "<<endl;

    }
    return 0;
    

}