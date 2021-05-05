#include "Board.hpp"
#include "City.hpp"
#include "Player.hpp"
// using namespace pandemic;

namespace pandemic{
    class OperationsExpert : public Player{
        public:
            Board b;
            City c;
            OperationsExpert(Board _b, City _c);

    };

}