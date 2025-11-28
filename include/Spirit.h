#pragma once
#include <string>
#include "BaseStats.h"
#include "Ability.h"
#include "Skill.h"
#include <vector>
class Spirit
{
public:
    Spirit();
    ~Spirit();
    void take_damage(int damage);
    void heal(int amount);
private:
    int id;
    std::string name;
    int level;
    int health;//体力值但是这个是血量而不是能力值
    BaseStats stats;//种族值
    Ability ability;//能力值
    int exp; //经验值
    std::vector<Skill> skill_pool;//技能池
    std::vector<Skill> skills;//已学习技能
    std::vector<Skill> skills_equipped;//已装备技能
};