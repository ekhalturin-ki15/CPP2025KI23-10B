#pragma once
//#include <string>
#include <memory>
#include <string>
using namespace std;
class Pet;

class Character
{
public:

    Character(int _hp, int _damage, int _armor);
    Character() = default;

    int         hp;
    int         damage;
    int         armor;
    int         water;
    int         food;
    string      name;    // ??????
    std::shared_ptr<Character> ptrMarried;
    std::shared_ptr<Pet>       ptrPet;
    
    
};
