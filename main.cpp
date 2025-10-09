#include "Game_Mode.h"
int main()
{
    shared_ptr<Game_Mode> GM;
    GM = make_shared<Game_Mode>();
    GM->init(GM);
}