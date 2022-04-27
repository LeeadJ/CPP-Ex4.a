#include "Player.hpp"

namespace coup{
    //Construcor
        Player::Player(Game& g, std::string name)
        {
            this->_myName=name;
            this->_myCoins=0;
            this->_myGame = &g;
            this->_myGame->_gamePlayers.push_back(name);
        }
        Player::~Player(){};

        
        //functions:
        //Increases the players coins by 1:
        void Player::income()
        {
            this->_myCoins++;
        }
        
        //Increases the players coins by 2:
        void Player::foreign_aid()
        {
            this->_myCoins+=2;
        }

        //Eliminate a Player from his Role and remove him from the Game:
        void Player::coup(Player p)
        {
            std::cout<< "Player::coup()" << std::endl;
        }

        //Returns the Players role:
        std::string Player::role()
        {
            return this->_myRole;
        }

        //Returns the Players coin count:
        int Player::coins()
        {
            return this->_myCoins;
        }
}