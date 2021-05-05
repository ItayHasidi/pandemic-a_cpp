#include "Board.hpp"
#include "OperationsExpert.hpp"
#include "City.hpp"

using namespace std;
// using namespace pandemic;

pandemic::OperationsExpert::OperationsExpert(Board _b, City _c){
    this->b = _b;
    this->c = _c;
}