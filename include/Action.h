#pragma once
#include "Effect.h"
#include <vector>
#include "Spirit.h"
class Action
{
protected:
    std::vector<Effect> effects;//动作效果

public:
    virtual ~Action() = default;
    Effect* get_effect();
    void set_effect(const std::vector<Effect>& new_effects);
    void do_action(std::vector<Spirit>& spirits);//执行动作
};