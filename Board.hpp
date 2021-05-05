#include <ostream>
#include <iterator>
#include <map>
#include <string>

using namespace std;

#ifndef BOARD_H
#define BOARD_H

#include "City.hpp"

// namespace pandemic{
    
    class Board{
        public:
            std::map<std::string, int>::iterator cur_city;
            std::string city_name; 
            // int cur_sick;

            Board();

            Board operator[](City c);

            void operator=(int num);

            friend std::ostream& operator<<(std::ostream& out, Board b);

            bool is_clean();

            void remove_cures();


    };
// }

#endif
