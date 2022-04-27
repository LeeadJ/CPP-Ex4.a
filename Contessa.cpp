#include "Contessa.hpp"

namespace coup{
    //Constructor:
    Contessa::Contessa(const Game& game, const std::string& name) : Player(game, name){
        this->_myRole = "Contessa";
    }

    //Functions:
    //Blocks the Assassin from assasinating. 
    void Contessa::block(Assassin& a1){

    }
}