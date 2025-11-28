#include "Spirit.h"

int Spirit::get_health() const
{
    return health;
}
void Spirit::set_health(int health)
{
    this->health = health;
}


int Spirit::get_level() const
{
    return level;
}
void Spirit::set_level(int level)
{
    this->level = level;
}


std::string Spirit::get_name() const
{
    return name;
}
void Spirit::set_name(const std::string& new_name)
{
    name = new_name;
}


int Spirit::get_attribute_type() const
{
    return attribute_type;
}
void Spirit::set_attribute_type(int attribute_type)
{
    this->attribute_type = attribute_type;
}


BaseStats Spirit::get_stats() const
{
    return stats;
}

void Spirit::set_stats(const BaseStats& new_stats)
{
    this->stats = new_stats;
}



int Spirit::get_id() const
{
    return id;
}
void Spirit::set_id(int id)
{
    this->id = id;
}

void Spirit::take_damage(Damage* damage , Spirit* attacker)
{
    /*
    *    可能要检测一下魂印效果以及场地效果，回合类效果以及那些特殊效果等，还有强化这些
    *    现在只进行最基础的伤害计算。
    */
   if(typeid(*damage) == typeid(CommonDamage)){
        CommonDamage* common_damage = dynamic_cast<CommonDamage*>(damage);
        float advantage = get_advantage(
            common_damage->get_attribute_type(),
            get_attribute_type()
        );
        /*
        传入参数为：
        lv：攻击方等级
        pow：技能威力
        atk：攻击方攻击
        def：防御方防御
        fix：本系修正，这里要判断技能属性和攻击方属性是否相同
        advantage：克制系数
        */
        health -= calc_damage_origin(
            level,
            common_damage->get_power(),
            stats.get_atk(),
            stats.get_def(),
            common_damage->get_attribute_type() == attacker->get_attribute_type() ? 1.1 : 1.0,
            advantage
        );
        // 检查是否死亡
        if (health <= 0) {
            health = 0;
        }
        //这里可能需要在受伤后计算回血，弹伤，复活之类的效果，以及一些受击效果，暂时没有实现。
    }

}