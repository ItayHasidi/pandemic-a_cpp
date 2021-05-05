#include "Board.hpp"
#include "Dispatcher.hpp"
#include "City.hpp"

using namespace std;
// using namespace pandemic;

// namespace pandemic{
    // class Dispatcher{

    // };
pandemic::Dispatcher::Dispatcher(Board _b, City _c){
    this->b = _b;
    this->c = _c;
}
// }