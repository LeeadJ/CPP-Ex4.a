#pragma once
#include "Player.hpp"

namespace coup{
    class Ambassador : public Player
    {
        public:
        //Constructor:
        Ambassador(Game game, std::string name);

        //Functions:
        //Transfers a coin from ont player to another.
        void transfer(Player& p1, Player& p2) const;
        //Blocks the Captain from stealing 2 coins.
        void block(Player& p);
        

    };
}