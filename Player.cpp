#include "Player.hpp"

namespace coup{
    //Setter:
    void Player::setPlayer(const Game& game, const std::string& name){
        this->setName(name);
        this->setGame(game);
        this->setCoins(0);
        this->setRole("Default Player");
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
        this->setCoins(other.getCoins());
        this->setRole(other.getRole());
    }

    
    //Functions:
    //Increases the players coins by 1:
    void Player::income(){
        this->setCoins(this->getCoins()+1);
    }
    
    //Increases the players coins by 2:
    void Player::foreign_aid(){
        this->setCoins(this->getCoins()+2);
    }

    //Eliminate a Player from his Role and remove him from the Game:
    void Player::coup(Player& p){
        std::cout<< "Player::coup()" << std::endl;
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