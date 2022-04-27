#include "Assassin.hpp"

namespace coup{
    //Constructor
    Assassin::Assassin(const Game& game, const std::string& name) : Player(game, name){
        this->_myRole = "Assassin";
    }

    //Function
    void Assassin::kill(Player& p){

    }
}