#pragma once
#include "Player.hpp"
namespace coup{
    class Assassin : public Player{
        public:
        //Constructor
        Assassin(const Game& game, const std::string& name);

        //Functions
        void coup(Player& p);
    };
}