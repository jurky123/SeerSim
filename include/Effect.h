#pragma once
#include <vector>
#include "Spirit.h"


#define EFFECT_NUMS 2
#define FIXED_DAMAGE 1
#define FIXED_HEAL 2

class Effect {
private:

public:
    virtual void apply(Spirit* spirit) = 0;//应用效果的虚函数
    ~Effect();
};