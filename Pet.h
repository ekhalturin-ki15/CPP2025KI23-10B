#pragma once
#include <string>

class Character;

class Pet
{
public:
    int hp;
    std::string name;
    Character* ptrOwner;
};