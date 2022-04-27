#include "Game.hpp"

namespace coup{
    Game::Game(){
        _turn=0;
        std::vector<std::string> _gamePlayers;
    }

    //Returns the name of the current players turn:
    std::string Game::turn(){
        return "";
    }
    //Returns a vector of players currently in the game:
    std::vector<std::string> Game::players(){
        return this->_gamePlayers;
    }
    //Returns the name of the winner. Throws Error if the game isn't over:
    std::string Game::winner(){
        return "";
    }

}