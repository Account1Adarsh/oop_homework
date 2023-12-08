#include<iostream>
using namespace std;
// class player{
//     public:
//     int score;
//     int health;

//     void showhealth(){
//         cout<<"Health is : "<<health<<endl;
//     }
//     void showscore(){
//         cout<<"Score is : "<<score<<endl;
//     }

// };
class player{
    private:
    int score;
    int health;
    public:
    //setter
    void setscore(int s){
        score=s;
    }
    void sethealth(int h){
        health=h;
    }
    void showhealth(){
        cout<<"Health is : "<<health<<endl;
    }
    void showscore(){
        cout<<"Score is : "<<score<<endl;
    }

};
int main(){
    player one;
    // one.score=10;
    // one.health=9;
    //cout<<one.health<<" "<<one.score<<endl;

    one.setscore(10);
    one.sethealth(9);
    one.showhealth();
    one.showscore();
    return 0;
}