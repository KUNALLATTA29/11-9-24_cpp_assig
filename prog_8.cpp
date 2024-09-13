#include<bits/stdc++.h>
using namespace std;

class Movable{
    public:
        void move(string s){
            cout<<s;
        }
};

class Chargeable{
    public:
        void charge(string s){
            cout<<s;
        }
};

class ElectricScooter : public Movable, public Chargeable{
    private:
        string p;
        string s;
    public:
        ElectricScooter(string a, string b):p(a),s(b){}
        void one(){
            move(p);
        }
        void two(){
            charge(s);
        }
};

int main(){
    ElectricScooter obj("moving", "charging");
    obj.one();
    cout<<endl;
    obj.two();
    
    
    return 0;
}
