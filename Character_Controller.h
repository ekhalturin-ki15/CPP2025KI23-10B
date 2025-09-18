#pragma once
#include <vector>
#include <memory>
#include <fstream>

class Character;

using namespace std;

class Character_Controller
{
private:
    vector<shared_ptr<Character>> arr_Character;
    shared_ptr<Character>         Player;

public:
    void                          init(ifstream& in);
};
