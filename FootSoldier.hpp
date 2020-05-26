#include "Soldier.hpp"

class FootSoldier: public Soldier{
protected:
    int damage = 100;
public:
    FootSoldier();
    ~FootSoldier();
    explicit FootSoldier(int player);
};
