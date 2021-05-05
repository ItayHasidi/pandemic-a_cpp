#include "Board.hpp"
#include "Medic.hpp"
#include "City.hpp"

using namespace std;
// using namespace pandemic;

// namespace pandemic{
    // class Medic{

    // };
pandemic::Medic::Medic(Board _b, City _c){
    this->b = _b;
    this->c = _c;
}
// }