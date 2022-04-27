#pragma once
#include "Player.hpp"

namespace coup{
    class Duke : public Player{
        public:
        //Constructor:
        Duke(Game game, std::string name);

        //Functions:
        //Takes tax of 3 coins from the pile.
        void tax();
        //Blocks a player from taking 2 coins (using foreign_aid)
        void block(Player& p);
    };

}