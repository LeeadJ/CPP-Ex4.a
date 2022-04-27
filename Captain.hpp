#pragma once
#include "Player.hpp"

namespace coup{
    class Captain : public Player{
        //Constructor:
        Captain(Game game, std::string name);

        //Functions:
        //This function steals 2 coins from a different player.
        void steal(Player& p);
        //Blocks an Ambassador or a different Captain from stealing 2 coins.
        void block(Player& p);
    };
}