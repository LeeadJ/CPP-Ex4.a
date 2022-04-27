#pragma once
#include<iostream>
#include<string>
#include "Game.hpp"

namespace coup{
    class Player{
        public:
        std::string _myName;
        std::string _myRole;
        int _myCoins;
        Game _myGame;

        //Construcor
        Player(const Game& game, const std::string& name);
        
        //functions:
        //Increases the players coins by 1:
        void income();
        
        //Increases the players coins by 2:
        void foreign_aid();

        //Eliminate a Player from his Role and remove him from the Game:
        static void coup(Player& p);

        //Returns the Players role:
        std::string role() const;

        //Returns the Players coin count:
        int coins() const;
    };
}