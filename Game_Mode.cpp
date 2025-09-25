#include "Character.h"
#include "Character_Controller.h"
#include "Pet.h"
#include "Game_Mode.h"
#include "Game_Loop.h"


Game_Mode::Game_Mode()
{
    in.open("input.txt");
    out.open("output.txt");
    {
        //
        //CreateDefaultSubobject
        CC = make_shared<Character_Controller>(); // ”казатель
        GL = make_shared<Game_Loop>();


        //CC->init(this);        
        //GL->init(*this);


        //CC->BeginPlay

       
    }



}