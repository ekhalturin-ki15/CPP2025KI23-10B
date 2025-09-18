#include "Character_Controller.h"
#include "Character.h"

void Character_Controller::init(ifstream& in)
{
    Player = make_shared<Character>();
    in >> Player->hp;
    in >> Player->damage;
    in >> Player->armor;
    in >> Player->water;
    in >> Player->eat;
    in >> Player->name;
    /*string name1;
    in >> name1;
    Player -> name = new string(name1);
    */
}
