#pragma once
#include <filesystem>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include "Stack.h"

class Train : public Stack<char>
{
public:
    void read();
    void display();
    Train();
    void fromFile(std::filesystem::path path);
    std::string toString();
};