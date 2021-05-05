#include "Board.hpp"
#include "Virologist.hpp"
#include "City.hpp"

using namespace std;
// using namespace pandemic;

// namespace pandemic{
    // class Virologist{

    // };
pandemic::Virologist::Virologist(Board _b, City _c){
    this->b = _b;
    this->c = _c;
}
// }