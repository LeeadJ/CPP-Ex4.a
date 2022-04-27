#include "Captain.hpp"

namespace coup{
    //Constructor:
    Captain::Captain(const Game& game, const std::string& name) : Player(game, name){
        this->_myRole = "Captain";
    }

    //Functions:
    //This function steals 2 coins from a different player.
    void Captain::steal(Player& p){

    }
    //Blocks an Ambassador or a different Captain from stealing 2 coins.
    void Captain::block(Player& p){
        
    }
}