#include<bits/stdc++.h>
using namespace std;

class Book{
    private:
        string title;
    public:
        Book(string a){
            title=a;
        }
        string gettitle(){
            return title;
        }
};

class Fiction : public Book{
    public:
        Fiction(string a): Book(a){}
    void getfic(){
        cout<<gettitle();
    }
};

class NonFiction : public Book{
    public:
        NonFiction(string a): Book(a){}
    void getnonf(){
        cout<<gettitle();
    }
};
class Biography : public Book{
    public:
        Biography(string a): Book(a){}
    void getbio(){
        cout<<gettitle();
    }
};

int main(){
    Fiction obj1("zoom");
    obj1.getfic();
    cout<<endl;
    NonFiction obj2("babu");
    obj2.getnonf();
    cout<<endl;
    Biography obj3("huhu");
    obj3.getbio();
    
    
    
    return 0;
}
