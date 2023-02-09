#pragma once

#include <string>
#include "PC.h"

//using PCPtr=std::unique_ptr<PC>;
// A person that captures Pokemons and makes them fight.
class Trainer
{
    public:
    Trainer(std::string name, PC pc) :
            _name {name}, 
            _pc {std::move(std::make_unique<PC>(pc))} 
            {}

    /*
    
        Trainer(std::string name, PC pc) :
            _name {name}, 
            _pc {pc} 
            {}

        const std::string name() const {
            return _name;
        }    

*/ 
    private:
        std::string _name = "";
        //PC _pc;
        std::unique_ptr<PC> _pc;
       

};
