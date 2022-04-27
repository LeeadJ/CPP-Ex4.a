#include "Assassin.hpp"

namespace coup{
    //Constructor
    Assassin::Assassin(Game game, std::string name) : Player(game, name){
        this->_myRole = "Assassin";
    }

    //Function
    void Assassin::kill(Player& p){

    }
}