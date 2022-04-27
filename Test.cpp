#include "doctest.h"
#include "Game.hpp"
#include "Player.hpp"
#include "Ambassador.hpp"
#include "Assassin.hpp"
#include "Captain.hpp"
#include "Contessa.hpp"
#include "Duke.hpp"
#include <iostream>
#include <stdexcept>

using namespace std;
using namespace coup;

//Creating the game:
Game game_1{};

//Creating the Players:
Duke duke{game_1, "p1"};
Assassin assassin{game_1, "p2"};
Ambassador ambassador{game_1, "p3"};
Captain captain{game_1, "p4"};
Contessa contessa{game_1, "p5"};


//Starting the Game:
TEST_CASE("game_1 initialization"){
    CHECK(game_1.players().size() == 5);

    //checking init of player name vector:
    for(int i=0; i<game_1.players().size(); i++){ 
        string player = "p" + to_string(i+1);
        CHECK(game_1.players().at(i) == player);
    }
    CHECK(game_1.turn()==0);
    CHECK(game_1.turn() == "p1"); //checking that turn() works
    CHECK_THROWS(game_1.winner()); //No winner yet, throws error
}

TEST_CASE("Round 1"){
    //Increasing coins by 1:
    CHECK_NOTHROW(duke.income());
    CHECK_NOTHROW(assassin.income());
    CHECK_NOTHROW(ambassador.income());
    CHECK_NOTHROW(captain.income());
    CHECK_NOTHROW(contessa.income());

    CHECK_THROWS(assassin.income()); //It is dukes turn
}

TEST_CASE("Round 2"){
    CHECK_NOTHROW(duke.income());
    CHECK_NOTHROW(assassin.foreign_aid());
    CHECK(duke.coins()==2);
    CHECK(assassin.coins()==3);

    CHECK_THROWS(captain.block(duke)); //No player can block income
    CHECK_THROWS(contessa.block(assassin)); //contessa can't block foreign_aid

    
}


