#include<bits/stdc++.h>
using namespace std;

class Shape{
    private:
        string color;
    public:
        Shape(string s){
            color=s;
        }
        string sol(){
            return color;
        }
};

class Circle:public Shape{
    public:
        Circle(string s):Shape(s){}
        void getColor(){
            cout<<sol();
        }
};

int main(){
    Circle obj("red");
    obj.getColor();
    
    
    return 0;
}
