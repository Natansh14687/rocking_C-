#include<bits/stdc++.h>
using namespace std;

class Player{
    private: 
    int health;
    int age;
    int score;
    bool alive;

    public:
    int getHealth(){
        return health;
    }
    int getAge(){
        return age;
    }
    int getScore(){
        return score;
    }
    bool getIsAlive(){
        return alive;
    }
    int setHealth(int health){
        this->health = health;
    }
    int setAge(int age){
        this->age = age;
    }
    int setScore(int score){
        this->score = score;
    }
    int setIsAlive(bool alive){
        this->alive  = alive;
    }
};

int addScore(Player a, Player b){
    return a.getScore() + b.getScore();
}

Player getMaxScorePlayer(Player a, Player b){
    if(a.getScore() < b.getScore()) return b;
    else return a;
}

int main(){

    Player natansh;
    Player dushyant;

    natansh.setHealth(100);
    natansh.setAge(20);
    natansh.setScore(11);
    natansh.setIsAlive(true);

    dushyant.setHealth(80);
    dushyant.setAge(19);
    dushyant.setScore(6);
    dushyant.setIsAlive(true);

    cout << addScore(natansh,dushyant) << "\n";
    Player higherScore = getMaxScorePlayer(natansh, dushyant);
    cout << higherScore.getScore() << "\n";


    return 0;
}