#include "Character.h"
#include "Pet.h"
#include <fstream>
#include <iostream>
#include <memory>
#include "Character_Controller.h"

int main()
{
    //
    std::ifstream in;
    std::ofstream out;

    in.open("input.txt");
    out.open("output.txt");
    {
        Character_Controller FCharacterController;
        FCharacterController.init(in);
    }


}