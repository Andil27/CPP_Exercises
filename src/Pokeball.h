
#include "Pokemon.h"
#include <memory>



class Pokeball {
    public:
        bool empty() const {
            return _pokemon == nullptr;
        }       
        
        void store(PokemonPtr pokemon){
            _pokemon =  std::move(pokemon) ;
        }

        const Pokemon& pokemon() const {
            return *_pokemon;
        }

    private:
        bool _is_empty = true;
        PokemonPtr _pokemon ;
};