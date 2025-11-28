#pragma once
#include <string>
#include "BaseStats.h"
#include "Ability.h"
class Spirit
{
public:
    Spirit();
    ~Spirit();
private:
    int id;
    std::string name;
    int level;
    int health;//体力值但是这个是血量而不是能力值
    BaseStats stats;//种族值
    Ability ability;//能力值
    int exp; //经验值
};