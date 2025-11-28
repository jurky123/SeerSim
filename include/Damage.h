#pragma once
#include "Effect.h"
/*
 * 伤害首先要区分固伤，真伤，以及普通攻击伤害
 * 固伤和百分比伤害也属于一类
 * 如果是普通攻击伤害还分为物理攻击和特殊攻击
 * 普通攻击还带有属性，比如水火等
 * 
 */
class Damage:public Effect
{
private:
    
public:
    Damage();
    ~Damage();
    virtual void apply(Spirit* spirit) override;//应用伤害效果
};

class CommonDamage : public Damage
{
private:
    int power;//威力
    int type;//属性类型
    bool is_physical;//是否为物理伤害
public:
    CommonDamage(int power, int type, bool is_physical);
    ~CommonDamage();
    virtual void apply(Spirit* spirit) override;//应用伤害效果
};