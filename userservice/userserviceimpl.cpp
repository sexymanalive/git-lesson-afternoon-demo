#include<iostream> 
using namespace std; 

class UserService{
    private: 
        int id; 
        string name; 
        string gender; 
    public: 
        UserService(int id , string name, string gender ){
            this->name = name; 
            this-> id = id; 
            this-> gender = gender; 
        }
};
int main(){
    cout<<"Another another line in here !"<<endl; 
    cout<<"User service impl "<<endl; 
    return 0; 
}