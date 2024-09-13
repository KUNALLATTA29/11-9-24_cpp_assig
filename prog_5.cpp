#include<bits/stdc++.h>
using namespace std;

class Shape{
    private:
        string color;
    public:
        Shape(string a){
            color=a;
        }
        void getcolor(){
            cout<<color;
        }
};

class Polygon:public Shape{
    private:
        int sides;
    public:
        Polygon(string a, int b):Shape(a), sides(b){}
        void getside(){
            cout<<sides;
        }
};

class Hexagon:public Polygon{
    private:
        int sidelength;
    public:
        Hexagon(string a, int b,int c):Polygon(a,b),sidelength(c){}
        void getsidelength(){
            cout<<sidelength;
        }
};  

int main(){
    Hexagon obj("red",6,3);
    obj.getcolor();
    cout<<endl;
    obj.getside();
    cout<<endl;
    obj.getsidelength();
    
    
    return 0;
}
