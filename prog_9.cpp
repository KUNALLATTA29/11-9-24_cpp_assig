#include<bits/stdc++.h>
using namespace std;

class Animal{
    private:
        string species;
    public:
        Animal(string s){
            species=s;
        }
        string getspecies(){
            return species;
        }
};

class Dog : public Animal{
    public:
        Dog(string s): Animal(s){}
    void getdog(){
        cout<<getspecies();
    }
};

class Cat : public Animal{
    public:
        Cat(string s): Animal(s){}
    void getcat(){
        cout<<getspecies();
    }
};
class Bird : public Animal{
    public:
        Bird(string s): Animal(s){}
    void getbird(){
        cout<<getspecies();
    }
};

int main(){
    Dog obj1("kukur");
    obj1.getdog();
    cout<<endl;
    Cat obj2("kitten");
    obj2.getcat();
    cout<<endl;
    Bird obj3("chidiya");
    obj3.getbird();
    
    
    
    return 0;
}
