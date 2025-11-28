#pragma once
#include <vector>
#include "Spirit.h"


#define EFFECT_NUMS 2
#define FIXED_DAMAGE 1
#define FIXED_HEAL 2

class Effect {
private:
    /*
     * 效果掩码
     * 每个位表示一种效果
     * 1表示有该效果
     * 0表示没有该效果
     * 0001 表示造成伤害
     * 0010 表示回血
    */
    int effect_mask;//效果掩码
    int effect_value[EFFECT_NUMS];//效果值，目前暂时只支持两个值，比如伤害和回血
public:
    Effect(int mask, int value[]);
    int get_effect_mask();
    int get_effect_value(int index);//获取效果值
    void apply_effect(Spirit& spirit);//应用效果
    ~Effect();
};