#include "Character_Controller.h"
#include "Character.h"

void Character_Controller::init(ifstream& in)
{
    int number_of_characters;
    
    Player = make_shared<Character>();
    in >> Player->hp;
    in >> Player->damage;
    in >> Player->armor;
    in >> Player->water;
    in >> Player->food;
    in >> Player->name;
    
    in >> number_of_characters;
    arr_Character.resize(number_of_characters);
    for (auto& element : arr_Character)
    {
        element = make_shared<Character>();
        in >> element->hp;
        in >> element->damage;
        in >> element->armor;
        in >> element->water;
        in >> element->food;
        in >> element->name;
    }
}
