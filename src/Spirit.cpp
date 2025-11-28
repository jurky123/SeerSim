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
void Spirit::take_damage(Damage* damage)
{
    /*
    *    可能要检测一下魂印效果以及场地效果，回合类效果以及那些特殊效果等，还有强化这些
    *    现在只进行最基础的伤害计算。
    */
   if(typeid(*damage) == typeid(CommonDamage)){
        CommonDamage* common_damage = dynamic_cast<CommonDamage*>(damage);
        
        health -= calc_damage_origin(
            level,
            common_damage->get_power(),
            stats.get_attack(),
            stats.get_defense(),
            100,
            1.0f
        );
    }

}