#include<bits/stdc++.h>
using namespace std;

class Product{
    private:
        int productid;
        int price;
    public:
        Product(int a, int b){
            productid=a;
            price=b;
        }
        int sol(){
            return price;
        }
};

class Electronics:public Product{
    public:
        Electronics(int a, int b):Product(a,b){}
        void getPrice(){
            cout<<sol();
        }
};

int main(){
    Electronics obj(1,2400);
    obj.getPrice();
    
    
    return 0;
}
