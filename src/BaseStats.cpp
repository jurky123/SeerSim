#include "BaseStats.h"
int BaseStats::get_hp() const
{
    return hp;
}
void BaseStats::set_hp(int hp)
{
    this->hp = hp;
}
int BaseStats::get_atk() const
{
    return atk;
}
void BaseStats::set_atk(int atk)
{
    this->atk = atk;
}
int BaseStats::get_sp_atk() const
{
    return sp_atk;
}
void BaseStats::set_sp_atk(int sp_atk)
{
    this->sp_atk = sp_atk;
}
int BaseStats::get_def() const
{
    return def;
}
void BaseStats::set_def(int def)
{
    this->def = def;
}
int BaseStats::get_sp_def() const
{
    return sp_def;
}
void BaseStats::set_sp_def(int sp_def)
{
    this->sp_def = sp_def;
}
int BaseStats::get_speed() const
{
    return speed;
}
void BaseStats::set_speed(int speed)
{
    this->speed = speed;
}
