#pragma once
#include<iostream>
#include<string>
#include "Player.hpp"
#include<vector>

namespace coup{
    class Game{
        public:
        //Variables:
        std::vector<std::string> _gamePlayers;
        int _turn;

        //Constructor:
        Game();
        ~Game();

        //Returns the name of the current players turn:
        std::string turn();
        //Returns a vector of players currently in the game:
        std::vector<std::string> players();
        //Returns the name of the winner. Throws Error if the game isn't over:
        std::string winner();
    };
}