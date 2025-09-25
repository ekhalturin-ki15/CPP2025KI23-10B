#include "Character.h"
#include "Character_Controller.h"
#include "Pet.h"
#include "Game_Mode.h"
#include "Game_Loop.h"


void Game_Mode::init(shared_ptr<Game_Mode> _This)
{
    
    
    in.open("input.txt");
    out.open("output.txt");
    {
        //
        //CreateDefaultSubobject
        CC = make_shared<Character_Controller>(); // ”казатель
        GL = make_shared<Game_Loop>();

        This = _This;
        CC->init(in, This);
        GL->init(This);

        //CC->init(this);        
        //GL->init(*this);


        //CC->BeginPlay
    }



}