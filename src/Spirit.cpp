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