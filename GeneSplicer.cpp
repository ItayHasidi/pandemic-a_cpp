#include "Board.hpp"
#include "GeneSplicer.hpp"
#include "City.hpp"

using namespace std;
// using namespace pandemic;

// namespace pandemic{
    // class GeneSplicer{

    // };
pandemic::GeneSplicer::GeneSplicer(Board _b, City _c){
    this->b = _b;
    this->c = _c;
}
// }