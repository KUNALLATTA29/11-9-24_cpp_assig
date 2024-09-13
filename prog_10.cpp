#include<bits/stdc++.h>
using namespace std;

class Product{
    private:
        int price;
    public:
        Product(int a){
            price=a;
        }
        int getprice(){
            return price;
        }
};

class Electronics : public Product{
    public:
        Electronics(int a): Product(a){}
    void getelectro(){
        cout<<getprice();
    }
};

class Clothing : public Product{
    public:
        Clothing(int a): Product(a){}
    void getcloth(){
        cout<<getprice();
    }
};
class Groceries : public Product{
    public:
        Groceries(int a): Product(a){}
    void getgroc(){
        cout<<getprice();
    }
};

int main(){
    Electronics obj1(100);
    obj1.getelectro();
    cout<<endl;
    Clothing obj2(200);
    obj2.getcloth();
    cout<<endl;
    Groceries obj3(300);
    obj3.getgroc();
    
    
    
    return 0;
}
