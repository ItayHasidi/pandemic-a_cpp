// #ifdef Board.hpp
#include "Board.hpp"
// #endif

// #ifdef City.hpp
#include "City.hpp"
// #endif

#include<map>
#include<vector>
#include <ostream>
#include <string>
#include <iostream>
#include <fstream>
#include <iterator>
using namespace std;
// using namespace pandemic;

std::map<std::string, std::map<std::string, int>> nei_cities;
std::map<std::string, int> cities;

std::string enum_to_string(City type) {
        switch(type) {
            case City::Algiers: return "Algiers";
            case City::Atlanta: return "Atlanta";
            case City::Baghdad: return "Baghdad";
            case City::Bangkok: return "Bangkok";
            case City::Beijing: return "Beijing";
            case City::Bogota: return "Bogota";
            case City::BuenosAires: return "BuenosAires";
            case City::Cairo: return "Cairo";
            case City::Chennai: return "Chennai";
            case City::Chicago: return "Chicago";
            case City::Delhi: return "Delhi";
            case City::Essen: return "Essen";
            case City::HoChiMinhCity: return "HoChiMinhCity";
            case City::HongKong: return "HongKong";
            case City::Istanbul: return "Istanbul";
            case City::Jakarta: return "Jakarta";
            case City::Johannesburg: return "Johannesburg";
            case City::Karachi: return "Karachi";
            case City::Khartoum: return "Khartoum";
            case City::Kinshasa: return "Kinshasa";
            case City::Kolkata: return "Kolkata";
            case City::Lagos: return "Lagos";
            case City::Lima: return "Lima";
            case City::London: return "London";
            case City::LosAngeles: return "LosAngeles";
            case City::Madrid: return "Madrid";
            case City::Manila: return "Manila";
            case City::MexicoCity: return "MexicoCity";
            case City::Miami: return "Miami";
            case City::Milan: return "Milan";
            case City::Montreal: return "Montreal";
            case City::Moscow: return "Moscow";
            case City::Mumbai: return "Mumbai";
            case City::NewYork: return "NewYork";
            case City::Osaka: return "Osaka";
            case City::Paris: return "Paris";
            case City::Riyadh: return "Riyadh";
            case City::SanFrancisco: return "SanFrancisco";
            case City::Santiago: return "Santiago";
            case City::SaoPaulo: return "SaoPaulo";
            case City::Seoul: return "Seoul";
            case City::Shanghai: return "Shanghai";
            case City::StPetersburg: return "StPetersburg";
            case City::Sydney: return "Sydney";
            case City::Taipei: return "Taipei";
            case City::Tehran: return "Tehran";
            case City::Tokyo: return "Tokyo";
            case City::Washington: return "Washington";

            default:
                throw std::invalid_argument("Invalid City");
        }
    }

std::vector<std::string> splitWords(std::string str){
    std::string word = "";
    std::vector<std::string> result;
    for (char x : str) 
    {
        if (x == ' ')
        {
            if(word.size() > 0){
                result.push_back(word);
                word = "";
            }
        }
        else {
            word = word + x;
        }
    }
    if(word.size() > 0){
        result.push_back(word);
    }
    return result;
}

void read_file(){
    std::string line;
    ifstream file("cities_map.txt");
    while(getline(file, line)){
        std::vector<std::string> result = splitWords(line);
        cities.insert({result[0], 0});
        for(unsigned int i = 2; i < result.size(); i++){
            std::map<std::string, int> tempMap;
            tempMap.insert({result[i], 0});
            nei_cities.insert({result[0], tempMap});
        }
    }
}

Board::Board(){}

Board Board::operator[](City c){
    std::string city_name = enum_to_string(c);
    this->cur_city = cities.find(city_name);
    this->city_name = city_name;
    return *this;
}

void Board::operator=(int num){
    cities[this->city_name] = num;
}

ostream& /*pandemic::*/operator<<(ostream& out, Board b){

    return out;
}

bool Board::is_clean(){
    bool flag = false;

    return flag;
}

void Board::remove_cures(){
    
}