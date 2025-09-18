#include "Character.h"
#include "Pet.h"
#include <fstream>
#include <iostream>
#include <memory>

int main()
{
    //
    std::ifstream in;
    std::ofstream out;

    in.open("input.txt");
    out.open("output.txt");
    {
        std::shared_ptr<Character> player2;
        player2 = std::make_shared<Character>(3, 2, 34, 10, 21, "Jeck");
    }


}