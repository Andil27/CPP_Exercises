#pragma once

#include <string>
#include <memory>

// A creature that is cute and can fight other ones.

class Pokemon
{
    public:
        Pokemon(std::string name):
            _name {name}, 
            _id {_n_of_poks++} 
            {}

        Pokemon(const Pokemon& other) :
            _name { other._name},
             _id {_n_of_poks++} 
            {}    
        
        //Pokemon()

        std::string name() const {
            return _name;
        }

        int id() const {
            return _id;
        }


        Pokemon& operator=(const Pokemon& other)
        {
            if (this != &other)
            {
                _name = other._name;
               
            }

            return *this;
        }
    private:
        static inline int _n_of_poks = 0;
        std::string _name;
        int _id;
};

using PokemonPtr=std::unique_ptr<Pokemon>;