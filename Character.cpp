#include "Character.h"
#include "Pet.h"

using namespace std;

Character::Character(int _hp, std::string _name, Pet* _ptrPet,
                     Character* _ptrMarried)
    : hp(_hp), name(_name), ptrPet(_ptrPet), ptrMarried(_ptrMarried)
{
}
