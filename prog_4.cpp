#include<bits/stdc++.h>
using namespace std;

class Vehicle{
    private:
        int make;
    public:
        Vehicle(int a){
            make=a;
        }
        void getmake(){
            cout<<make;
        }
};

class Car:public Vehicle{
    private:
        string model;
    public:
        Car(int a, string b):Vehicle(a), model(b){}
        void getmodel(){
            cout<<model;
        }
};

class Sportscar:public Car{
    private:
        string enginetype;
    public:
        Sportscar(int a, string b,string c):Car(a,b),enginetype(c){}
        void gettype(){
            cout<<enginetype;
        }
};  

int main(){
    Sportscar obj(2000,"maruti","kucchbhi");
    obj.getmake();
    cout<<endl;
    obj.getmodel();
    cout<<endl;
    obj.gettype();
    
    
    return 0;
}
