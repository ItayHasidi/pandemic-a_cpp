#include "Board.hpp"
#include "City.hpp"
#include "Player.hpp"

namespace pandemic{
    class Scientist : public Player{
        public:
            Board b;
            City c;
            int num;
            Scientist(Board _b, City _c, int _num);

    };

}