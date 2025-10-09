#pragma once
#include <vector>
#include <memory>
#include <fstream>

class Character;
class Game_Mode;

using namespace std;

class Character_Controller
{
private:
    vector<shared_ptr<Character>> arr_Character;
    shared_ptr<Character>         Player;

public:
    void   init(ifstream&, shared_ptr<Game_Mode>);
    string get_all_characters_info();
};
