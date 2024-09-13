#include<bits/stdc++.h>
using namespace std;

class Playable{
    public:
        void playing(string s){
            cout<<s;
        }
};

class Stoppable{
    public:
        void stop(string s){
            cout<<s;
        }
};

class MediaPlayer : public Playable, public Stoppable{
    private:
        string p;
        string s;
    public:
        MediaPlayer(string a, string b):p(a),s(b){}
        void play(){
            playing(p);
        }
        void stoping(){
            stop(s);
        }
};

int main(){
    MediaPlayer obj("playing", "stopped");
    obj.play();
    cout<<endl;
    obj.stoping();
    
    
    return 0;
}
