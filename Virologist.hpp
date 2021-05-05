#include "Board.hpp"
#include "City.hpp"
#include "Player.hpp"

namespace pandemic{
    class Virologist : public Player{
        public:
            Board b;
            City c;
            Virologist(Board _b, City _c);

    };

}