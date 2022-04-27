#pragma once
#include "Player.hpp"
namespace coup{
    class Assassin : public Player{
        public:
        //Constructor
        Assassin(Game game, std::string name);

        //Functions
        void kill(Player& p);
    };
}