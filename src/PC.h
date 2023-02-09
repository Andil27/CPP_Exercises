#pragma once
#include "Pokemon.h"
#include <vector>

// A PC is the place where Pokemons get automagically sent when the trainer's pockets are full.
// When a Pokemon is transferred to the PC, this one takes ownership.

using Pokemons=std::vector<PokemonPtr>;
class PC
{
    public:
        const Pokemons& pokemons() const {
          return _pokemons;
        }

        void transfer(PokemonPtr pokemon){
            _pokemons.push_back(std::move(pokemon));
        }

    private:
        Pokemons _pokemons = {};
};