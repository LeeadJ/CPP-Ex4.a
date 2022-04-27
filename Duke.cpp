#include "Duke.hpp"

namespace coup{
    //Constructor:
    Duke::Duke(Game game, std::string name) : Player(game, name){
        this->_myRole = "Duke";
    }

    //Functions:
    //Takes tax of 3 coins from the pile.
    void Duke::tax(){

    }
    //Blocks a player from taking 2 coins (using foreign_aid)
    void Duke::block(Player& p){
        
    }
}