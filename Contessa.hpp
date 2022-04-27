#pragma once
#include "Player.hpp"
#include "Assassin.hpp"

namespace coup{
    class Contessa : public Player{
        public:
        //Constructor:
        Contessa(Game game, std::string name);

        //Functions:
        void block(Assassin& a1);
    };
}