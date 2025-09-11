#pragma once
#include <string>

class Pet;

class Character
{
public:

    //Character(int _hp, std::string _name, Pet* _ptrPet, Character* _ptrMarried);
    //Character() = default;

    int         hp;
    int         damage;
    int         armor;
    int         water;
    int         eat;
    std::string name;    // Размер
    Character*  ptrMarried;
    Pet*        ptrPet;
    
    
};
