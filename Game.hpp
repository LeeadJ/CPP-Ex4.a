#pragma once
#include<iostream>
#include<string>
#include<vector>

namespace coup{
    class Game{
        public:
        // //Variables:
        // std::vector<std::string> _gamePlayers;
        // int _turn;

        //Constructor:
        Game();
        // ~Game();

        //Returns the name of the current players turn:
        static std::string turn();
        //Returns a vector of players currently in the game:
        std::vector<std::string> players() const;
        //Returns the name of the winner. Throws Error if the game isn't over:
        std::string winner() const;
    };
}