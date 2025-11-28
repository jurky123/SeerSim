#include "Damage.h"

void CommonDamage::set_power(int power)
{
    this->power = power;
}
int CommonDamage::get_power() const
{
    return power;
}



int CommonDamage::get_attribute_type() const
{
    return attribute_type;
}
void CommonDamage::set_attribute_type(int type)
{
    this->attribute_type = type;
}

bool CommonDamage::is_physical_damage() const
{
    return is_physical;
}
void CommonDamage::set_is_physical(bool is_physical)
{
    this->is_physical = is_physical;
}