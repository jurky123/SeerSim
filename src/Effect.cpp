#include "Effect.h"
Effect::Effect(int mask, int value[]) : effect_mask(mask) {
    for (int i = 0; i < EFFECT_NUMS; ++i) {
        effect_value[i] = value[i];
    }
}
Effect::~Effect() {}
int Effect::get_effect_mask() {
    return effect_mask;
}
int Effect::get_effect_value(int index) {
    return effect_value[index];
}
void Effect::apply_effect(Spirit& spirit) {
    //根据效果掩码应用效果
    if (effect_mask & FIXED_DAMAGE) {
        //造成伤害
        //这里精灵受伤时可能需要根据自己的某些效果进行减免等处理
        //spirit.take_damage(effect_value[0]);
    }
    if (effect_mask & FIXED_HEAL) {
        //回血
        //这里精灵回血时可能需要根据自己的某些效果进行一些处理，甚至可能有一些特殊效果
        //spirit.heal(effect_value[1]);
    }
}