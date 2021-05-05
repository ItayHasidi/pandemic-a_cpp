#include "Board.hpp"
#include "FieldDoctor.hpp"
#include "City.hpp"

// using namespace pandemic;
using namespace std;

// namespace pandemic{
    // class FieldDoctor{

    // };
pandemic::FieldDoctor::FieldDoctor(Board _b, City _c){
    this->b = _b;
    this->c = _c;
}
// }