#include "Board.hpp"
#include "City.hpp"
#include "Player.hpp"

namespace pandemic{
    class Medic : public Player{
        public:
            Board b;
            City c;
            Medic(Board _b, City _c);

    };

}