#include<bits/stdc++.h>
using namespace std;

class Gun{
public:
int amo;
int damage;
int scope;
};

class Player{
    private:
    int health;
    int age;
    int score;
    bool isAlive;
    Gun gun;

    class Helmet{
        int hp;
        int level;

        public:
        void setHp(int hp){
            this -> hp = hp;
        }
        void setLevel(int level){
            this->level = level;
        }
        int getHp(){
            return hp;
        }
        int getLevel(){
            return level;
        }
    };
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
    Gun getGun(){
        return gun;
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
    void setGun(Gun gun){
        this-> gun = gun;
    }
    void setHelmet(int level){
        Helmet *helmet = new Helmet;
        helmet->setLevel(level);
        int health = 0;
        if(level = 1) health = 25;
        else if(level = 2) health = 50;
        else if(level = 3) health = 100;

        helmet -> setHp(health);
    }

    
};

int main(){
    return 0;
}