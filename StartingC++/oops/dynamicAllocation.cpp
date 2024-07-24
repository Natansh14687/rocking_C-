#include<bits/stdc++.h>
using namespace std;

class Player{
    private:
    int health;
    int age;
    int score;
    bool isAlive;

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
    int getIsAlive(){
        return isAlive;
    }

    void setHealth(int health){
        this->health = health;
    }
    void setAge(int age){
        this->age = age;
    }
    void setScore(int score){
        this->score = score;
    }
    void setIsAlive(bool isAlive){
        this->isAlive = isAlive;
    }
};

int main(){
    Player *urvi = new Player;
    Player urviObject = *urvi;
    urviObject.setScore(3);
    cout << urviObject.getScore() << "\n";

    urvi->setAge(24);
    cout << urvi -> getAge() <<"\n";
    return 0;
}