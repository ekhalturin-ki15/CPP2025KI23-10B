#include "Character.h"
#include "Pet.h"

Character::Character(int    _hp, int    _damage,
                     int    _armor, int _water, int _food,
                     string _name)
    : hp(_hp),
      damage(_damage),
      armor(_armor),
      water(_water),
      food(_food),
      name(_name)


//BaseGameMode
{
}

string Character::get_info()
{
    string info;
    info += "Name: " + name + "\n";
    info += "HP: " + to_string(hp) + "\n";
    info += "Damage: " + to_string(damage) + "\n";
    info += "Armor: " + to_string(armor) + "\n";
    info += "Water: " + to_string(water) + "\n";
    info += "Food: " + to_string(food) + "\n";

    if (ptrMarried)
        info += "Married to: " + ptrMarried->name + "\n";
    else
        info += "Not married\n";

    if (ptrPet)
        info += "Pet name: " + ptrPet->name + "\n";
    else
        info += "No pet\n";

    return info;
}