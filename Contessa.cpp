#include "Contessa.hpp"

namespace coup{
    //Constructor:
    Contessa::Contessa(Game game, std::string name) : Player(game, name){
        this->_myRole = "Contessa";
    }

    //Functions:
    void Contessa::block(Assassin& a1){
        
    }
}