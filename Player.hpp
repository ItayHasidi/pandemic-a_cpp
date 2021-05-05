// #ifdef City.hpp
// #endif

// #ifdef Board.hpp
// #endif

// #ifdef Color.hpp
// #endif


#ifndef PLAYER_H
#define PLAYER_H

#include "City.hpp"
#include "Board.hpp"
#include "Color.hpp"

using namespace std;

// namespace pandemic{
    class Player{
        public:
            Player drive(City c);
            Player fly_direct(City c);
            Player fly_charter(City c);
            Player fly_shuttle(City c);
            Player build();
            Player discover_cure(Color col);
            Player treat(City c);

            std::string role();
            Player take_card(City c);
    };
    
// }

#endif