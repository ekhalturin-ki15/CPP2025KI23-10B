#include "Game_Loop.h"

#include "Character_Controller.h"
#include "Game_Mode.h"

void Game_Loop::init(shared_ptr<Game_Mode> _GM)
{
	GM = _GM;
    cout << GM->CC->get_all_characters_info() << endl;
    while (true)
    {
        
    }
}
