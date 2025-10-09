#pragma once
//#include <string>
#include <memory>
#include <string>
using namespace std;
class Pet;

class Character
{
public:

    Character(int, int, int, int, int,
              string);
    Character() = default;

    int         hp;
    int         damage;
    int         armor;
    int         water;
    int         food;   // Еда
    string      name;    
    std::shared_ptr<Character> ptrMarried;
    std::shared_ptr<Pet>       ptrPet;
    string get_info();
    
};
