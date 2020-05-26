#include "Soldier.hpp"

class FootCommander: public Soldier{
public:
    FootCommander();
    ~FootCommander();
    explicit FootCommander(int player);
};
