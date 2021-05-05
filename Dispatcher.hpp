#include "Board.hpp"
#include "City.hpp"
#include "Player.hpp"

namespace pandemic{
    class Dispatcher : public Player{
        public:
            Board b;
            City c;
            Dispatcher(Board _b, City _c);

    };

}