#include<bits/stdc++.h>
using namespace std;

class Readable{
    public:
        void read(){
            cout<<"reading";
        }
};

class Writable{
    public:
        void write(){
            cout<<"writing";
        }
};

class Notebook : public Readable, public Writable{
    
};

int main(){
    Notebook obj;
   obj.read();
   cout<<endl;
   obj.write();
    
    
    return 0;
}
