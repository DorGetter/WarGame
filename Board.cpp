#include "Board.hpp"

Soldier*& WarGame::Board::operator[](std::pair<int,int> location)
{
    return board[0][0];
}

Soldier *WarGame::Board::operator[](std::pair<int, int> location) const {
    return nullptr;
}

void WarGame::Board::move(uint player_number, std::pair<int, int> source, WarGame::Board::MoveDIR direction) {

}

bool WarGame::Board::has_soldiers(uint player_number) const {
    return false;
}





