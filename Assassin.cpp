#include "Assassin.hpp"

namespace coup{
    //Constructor
    Assassin::Assassin(const Game& game, const std::string& name) : Player(game, name){
        this->setRole("Assassin");
    }

    //Function
    //Eliminates a Player from the Game:
    void Assassin::coup(Player& p){
        const std::vector<Player>& v = this->getGame().getPlayersVec(); 
        if(std::find(v.begin(), v.end(), p) == v.end()){
            throw std::runtime_error("Assassin coup() Error: Player to coup not in the game.");
        }
        if(this->coins() < 3){
            throw std::runtime_error("Assassin coup() Error: Not enough coins to use coup().");
        }
        for(int i=0; i<this->getGame().getGameSize(); i++){
            if(&(this->getGame().getPlayersVec()[i]) == &p){
                this->getGame().getPlayerNameVec().erase(this->getGame().getPlayerNameVec().begin()+i); //Erasing the name from the nameVec
                this->getGame().getPlayersVec().erase(this->getGame().getPlayersVec().begin()+i); //Erasing from playersVec
                this->getGame().getPlayersEliminatedMap()[p.getName()] = p; //add the victim to the eliminated map
                break;
            }
        } 
        this->setCoins(this->coins()-3);
        this->setPreviousTurn("coup");
    }
}