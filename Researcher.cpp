#include "Board.hpp"
#include "Researcher.hpp"
#include "City.hpp"

using namespace std;
// using namespace pandemic;

// namespace pandemic{
    // class Researcher{

    // };
pandemic::Researcher::Researcher(Board _b, City _c){
    this->b = _b;
    this->c = _c;
}

// }