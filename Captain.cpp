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

    //Blocks a different Captain from stealing 2 coins. Does not waste turn.
    void Captain::block(Captain& cap){
        const std::vector<Player>& v = this->getGame().getPlayersVec(); 
        if(std::find(v.begin(), v.end(), cap) == v.end()){
            throw std::runtime_error("Captain block() Error: Different Captain to block not in the game.");
        }
        if(cap.getPreviousTurn().compare("steal") != 0){
            throw std::runtime_error("Captain block() Error: Captain to block previous turn was not steal. Captain to block can not be blocked!");
        }
        if(cap.coins() < 2){
            throw std::runtime_error("Captain block() Error: Captain to be blocked doesn't have 2 coins to return.");
        }
        //Block can be made, undoing Block:
        cap.setCoins(cap.coins()-2); //Removing the different captains steal.
        cap.getVictimStack().top().setCoins(cap.getVictimStack().top().coins()+2); //Returning the stolen coins.
        cap.getVictimStack().pop(); //Removing the victim from the captain who stoles stack.
        cap.setPreviousTurn("Steal was Blocked");
    }
    
}