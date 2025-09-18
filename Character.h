#pragma once
//#include <string>
#include <memory>
#include <string>
using namespace std;
class Pet;

class Character
{
public:

    Character(int _hp, int _damage, int _armor, int _water, int _eat,
              string _name);
    //Character() = default;

    int         hp;
    int         damage;
    int         armor;
    int         water;
    int         eat;
    string      name;    // Размер
    std::shared_ptr<Character> ptrMarried;
    std::shared_ptr<Pet>       ptrPet;
    
    
};
