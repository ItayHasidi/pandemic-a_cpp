#include "Board.hpp"
#include "Scientist.hpp"
#include "City.hpp"

using namespace std;
// using namespace pandemic;

// namespace pandemic{
    // class Scientist{
// 
    // };
pandemic::Scientist::Scientist(Board _b, City _c, int _num){
    this->b = _b;
    this->c = _c;
    this->num = _num;
}
// }