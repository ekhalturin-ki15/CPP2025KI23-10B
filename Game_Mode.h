#pragma once
#include <memory>
#include <fstream>
#include <iostream>

class Character_Controller;
class Game_Loop;

using namespace std;

class Game_Mode
{
public:
    // Game_Mode();
    std::ifstream in;
    std::ofstream out;

    // TSubclassOf
	shared_ptr<Character_Controller> CC; // Отслеживать хранение в памяти
	//Character_Controller* ptrCC; // Передавать данны, которые хранятися

    shared_ptr<Game_Loop>            GL;
    shared_ptr<Game_Mode>            This;

    //Game_Loop*                     ptrGL;
    void init(shared_ptr<Game_Mode> _This);
};
