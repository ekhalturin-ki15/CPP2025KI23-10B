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

        // CreateDefaultSubobject (blueprint)
        // new

        player2 = std::make_shared<Character>();
    }


}