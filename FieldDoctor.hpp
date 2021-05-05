#include "Board.hpp"
#include "City.hpp"
#include "Player.hpp"
// using namespace pandemic;

namespace pandemic{
    class FieldDoctor : public Player{
        public:
            Board b;
            City c;
            FieldDoctor(Board _b, City _c);

    };

}