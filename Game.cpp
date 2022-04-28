#include "Game.hpp"

namespace coup{
    Game::Game(){
        // _turn=0;
        // std::vector<std::string> _gamePlayers;
    }

    //Returns the name of the current players turn:
    std::string Game::turn(){
        return "";
    }
    //Returns a vector of players currently in the game:
    std::vector<std::string> Game::players() const{
        // return this->_gamePlayers;
        std::vector<std::string> ans;
        return ans;
    }
    //Returns the name of the winner. Throws Error if the game isn't over:
    std::string Game::winner() const{
        // if(this->players().size() != 1){
        //     throw std::runtime_error("Game Wnner Error: Game is not over.");
        // }
        // return this->players().at(0);
        return "Winner";
    }

}