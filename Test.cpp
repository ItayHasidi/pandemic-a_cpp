#include "doctest.h"

#include "Board.hpp"
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"

#include "OperationsExpert.hpp"
#include "FieldDoctor.hpp"
#include "GeneSplicer.hpp"
#include "Researcher.hpp"
#include "Medic.hpp"
#include "Scientist.hpp"
#include "Virologist.hpp"
#include "Dispatcher.hpp"


TEST_CASE("checking OperationsExpert") {
    Board board;
    pandemic::OperationsExpert player {board, City::Atlanta};
    CHECK_NOTHROW(player.build());
    CHECK_NOTHROW(player.drive(City::Washington));
    CHECK_THROWS(player.drive(City::Madrid));
    CHECK_NOTHROW(player.fly_direct(City::Johannesburg));
    CHECK_THROWS(player.fly_direct(City::Taipei));
    
}

TEST_CASE("checking FieldDoctor") {
    Board board;
    pandemic::FieldDoctor player {board, City::Atlanta};
    CHECK_THROWS(player.build());
    CHECK_NOTHROW(player.drive(City::Washington));
    CHECK_THROWS(player.drive(City::Madrid));
    CHECK_NOTHROW(player.fly_direct(City::Johannesburg));
    CHECK_THROWS(player.fly_direct(City::Taipei));
    
}

TEST_CASE("checking GeneSplicer") {
    Board board;
    pandemic::GeneSplicer player {board, City::Atlanta};
    CHECK_THROWS(player.build());
    CHECK_NOTHROW(player.drive(City::Washington));
    CHECK_THROWS(player.drive(City::Madrid));
    CHECK_NOTHROW(player.fly_direct(City::Johannesburg));
    CHECK_THROWS(player.fly_direct(City::Taipei));
    
}

TEST_CASE("checking Researcher") {
    Board board;
    pandemic::Researcher player {board, City::Atlanta};
    CHECK_THROWS(player.build());
    CHECK_NOTHROW(player.drive(City::Washington));
    CHECK_THROWS(player.drive(City::Madrid));
    CHECK_NOTHROW(player.fly_direct(City::Johannesburg));
    CHECK_THROWS(player.fly_direct(City::Taipei));
    
}

TEST_CASE("checking Medic") {
    Board board;
    pandemic::Medic player {board, City::Atlanta};
    CHECK_THROWS(player.build());
    CHECK_NOTHROW(player.drive(City::Washington));
    CHECK_THROWS(player.drive(City::Madrid));
    CHECK_NOTHROW(player.fly_direct(City::Johannesburg));
    CHECK_THROWS(player.fly_direct(City::Taipei));
    
}

TEST_CASE("checking Scientist") {
    Board board;
    pandemic::Scientist player {board, City::Atlanta, 4};
    CHECK_THROWS(player.build());
    CHECK_NOTHROW(player.drive(City::Washington));
    CHECK_THROWS(player.drive(City::Madrid));
    CHECK_NOTHROW(player.fly_direct(City::Johannesburg));
    CHECK_THROWS(player.fly_direct(City::Taipei));
    
}

TEST_CASE("checking Virologist") {
    Board board;
    pandemic::Virologist player {board, City::Atlanta};
    CHECK_THROWS(player.build());
    CHECK_NOTHROW(player.drive(City::Washington));
    CHECK_THROWS(player.drive(City::Madrid));
    CHECK_NOTHROW(player.fly_direct(City::Johannesburg));
    CHECK_THROWS(player.fly_direct(City::Taipei));
    
}

TEST_CASE("checking Dispatcher") {
    Board board;
    pandemic::Dispatcher player {board, City::Atlanta};
    CHECK_THROWS(player.build());
    CHECK_NOTHROW(player.drive(City::Washington));
    CHECK_THROWS(player.drive(City::Madrid));
    CHECK_NOTHROW(player.fly_direct(City::Johannesburg));
    CHECK_THROWS(player.fly_direct(City::Taipei));
    
}