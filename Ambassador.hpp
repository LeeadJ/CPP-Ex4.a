#pragma once
#include "Player.hpp"

namespace coup{
    class Ambassador : public Player
    {
        public:
        //Constructor
        Ambassador(Game game, std::string name);

        //functions
        void transfer(Player& p1, Player& p2) const;

    };
}