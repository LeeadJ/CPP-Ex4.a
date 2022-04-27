#include "Ambassador.hpp"


namespace coup{
    //Constructor:
    Ambassador::Ambassador(const Game& game, const std::string& name) : Player(game, name){
        this->_myRole="Ambassador";
    }
    

    //Functions:
    //Transfers a coin from one player to another.
    void Ambassador::transfer(Player& p1, Player& p2){
    
    }
    //Blocks the Captain from stealing 2 coins.
    void Ambassador::block(Player& p){

    }
}