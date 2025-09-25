#include "Game_Loop.h"
#include "Game_Mode.h"

void Game_Loop::init(shared_ptr<Game_Mode> _GM)
{
	GM = _GM;
}
