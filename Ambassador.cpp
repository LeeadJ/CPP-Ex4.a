#include "Ambassador.hpp"

namespace coup{
    //Constructor
    Ambassador::Ambassador(Game game, std::string name) : Player(game, name){
        this->_myRole="Ambassador";
    }
    

    //functions
    void Ambassador::transfer(Player& p1, Player& p2) const{

    }
}