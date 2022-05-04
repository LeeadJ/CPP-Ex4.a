#include "Captain.hpp"

namespace coup{
    //Constructor:
    Captain::Captain(const Game& game, const std::string& name) : Player(game, name){
        this->setRole("Captain");
    }

    //Functions:
    //This function steals 2 coins from a different player.
    void Captain::steal(Player& p){
        const std::vector<Player>& v = this->getGame().getPlayersVec(); 
        if(std::find(v.begin(), v.end(), p) == v.end()){
            throw std::runtime_error("Captain steal() Error: Player to steal not in the game.");
        }
        if(p.coins() < 2){
            throw std::runtime_error("Captain steal() Error: Victim does not enough coins.");
        }
        p.setCoins(p.getCoins()-2);
        this->setCoins(this->getCoins()+2);
        if(this->_victimStack.size() != 0){
            this->_victimStack.pop();
        }
        this->_victimStack.push(p);
        this->setPreviousTurn("steal");
    }

    //Blocks an Ambassador or a different Captain from stealing 2 coins.
    void Captain::block(Player& p){
        const std::vector<Player>& v = this->getGame().getPlayersVec(); 
        if(std::find(v.begin(), v.end(), p) == v.end()){
            throw std::runtime_error("Captain steal() Error: Player to steal not in the game.");
        }
        if(p.getPreviousTurn().compare("steal") != 0){
            throw std::runtime_error("Captain block() Error: Captain to block previous turn was not steal. Captain to block can not be blocked!");
        }
        //Block can be made, undoing Block:
        this->setCoins(this->getCoins()-2); //Removing the captains steal.
        this->getVictimStack().top().setCoins(this->getVictimStack().top().getCoins()+2); //Returning the stolen coins.
        this->getVictimStack().pop(); //Removing the victim from the stack.
    }
}