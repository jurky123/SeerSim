#pragma once
#include "Spirit.h"
#include <vector>
class Game
{
private:
    std::vector<Spirit> left;//左边方
    std::vector<Spirit> right;//右边方
public:
    Game();
    ~Game();

};