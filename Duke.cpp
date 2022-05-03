#include "Duke.hpp"

namespace coup{
    //Constructor:
    Duke::Duke(const Game& game, const std::string& name) : Player(game, name){
        this->setRole("Duke");
    }

    //Functions:
    //Takes tax of 3 coins from the pile.
    void Duke::tax(){
        this->setCoins(this->coins()+3);
    }
    //Blocks a player from taking 2 coins (using foreign_aid)
    void Duke::block(Player& p){
        if(p.getPreviousTurn().compare("foreign_aid") != 0){
            throw std::runtime_error("Duke block() Error: Players previous turn is not foreign_aid().");
        }
        p.setCoins(p.coins()-2);
    }
}