#pragma once

#include <sys/param.h>

class Soldier{
    int player;
    int hp ;
    int damage ;

public:
    Soldier();
    Soldier(int hp , int damege):hp(hp), damage(damege){}
    explicit Soldier(int player);
    ~Soldier();
public:
    int gethp()     const{ return hp;      }
    int getdamege() const{ return damage;  }
    int getPlayer() const{ return player;  }
    void setHp(int hp)   { this->hp=hp;    }
};
