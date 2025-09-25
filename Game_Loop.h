#pragma once
#include <memory>
class Game_Mode;

using namespace std;
class Game_Loop
{
public:
    void init(shared_ptr<Game_Mode> _GM);

	shared_ptr<Game_Mode> GM;
};
