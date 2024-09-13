#include<bits/stdc++.h>
using namespace std;

class Animal{
    private:
        string species;
    public:
        Animal(string a){
            species=a;
        }
        void getspecies(){
            cout<<species;
        }
};

class Mammal:public Animal{
    private:
        string furcolor;
    public:
        Mammal(string a, string b):Animal(a), furcolor(b){}
        void getfur(){
            cout<<furcolor;
        }
};

class Dog:public Mammal{
    private:
        string breed;
    public:
        Dog(string a, string b,string c):Mammal(a,b),breed(c){}
        void getbreed(){
            cout<<breed;
        }
};  

int main(){
    Dog obj("rot","brown","jumba");
    obj.getbreed();
    cout<<endl;
    obj.getspecies();
    cout<<endl;
    obj.getfur();
    
    
    return 0;
}
