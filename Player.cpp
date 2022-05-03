#include "Player.hpp"


namespace coup{
    //Setter:
    void Player::setPlayer(const Game& game, const std::string& name){
        this->setName(name);
        this->setGame(game);
        this->setCoins(0);
        this->setRole("Default Player");
        this->setPreviousTurn("Null");
    }
    //Construcor
    Player::Player(){
        this->setName("Default Name");
        this->setCoins(0);
        this->setRole("Default Player");
    }
    Player::Player(const Game& game, const std::string& name){
        this->setPlayer(game, name);
        this->_myGame.players().push_back(name);
    }
    Player::Player(const Player& other){
        this->setPlayer(other.getGame(), other.getName());
        this->setCoins(other.coins());
        this->setRole(other.role());
    }

    
    //Functions:
    //Increases the players coins by 1:
    void Player::income(){
        if(this->getGame().turn().compare(this->getName()) != 0){
            throw std::runtime_error("Player income() Error: Not Players turn.");
        }
        this->setCoins(this->coins()+1);
        this->setPreviousTurn("income");
    }
    
    //Increases the players coins by 2:
    void Player::foreign_aid(){
        if(this->getGame().turn().compare(this->getName()) != 0){
            throw std::runtime_error("Player foreign_aid() Error: Not Players turn.");
        }
        this->setCoins(this->coins()+2);
        this->setPreviousTurn("foreign_aid");
    }

    //Eliminates a Player from the Game:
    void Player::coup(Player& p){
        const std::vector<Player>& v = this->getGame().getPlayersVec(); 
        if(std::find(v.begin(), v.end(), p) == v.end()){
            throw std::runtime_error("Player coup() Error: Player to coup not in the game.");
        }
        if(this->coins() < 7){
            throw std::runtime_error("Player coup() Error: Not enough coins to use coup().");
        }
        for(int i=0; i<this->getGame().getGameSize(); i++){
            if(&(this->getGame().getPlayersVec()[i]) == &p){
                this->getGame().getPlayerNameVec().erase(this->getGame().getPlayerNameVec().begin()+i); //Erasing the name from the nameVec
                this->getGame().getPlayersVec().erase(this->getGame().getPlayersVec().begin()+i); //Erasing from playersVec
                this->getGame().addPlayer_coupMap(p);
                break;
            }
        } 
        this->setCoins(this->coins()-7);
        this->setPreviousTurn("coup");
    }

    //Returns the Players role:
    std::string Player::role() const{
        return this->getRole();
    }

    //Returns the Players coin count:
    int Player::coins() const{
        return this->getCoins();
    }
}