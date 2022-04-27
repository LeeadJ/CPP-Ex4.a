#include "Ambassador.hpp"

namespace coup{
    //Constructor:
    Ambassador::Ambassador(Game game, std::string name) : Player(game, name){
        this->_myRole="Ambassador";
    }
    

    //Functions:
    //Transfers a coin from ont player to another.
    void Ambassador::transfer(Player& p1, Player& p2) const{
    
    }
    //Blocks the Captain from stealing 2 coins.
    void Ambassador::block(Player& p){

    }
}