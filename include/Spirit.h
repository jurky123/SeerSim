#pragma once
#include <string>
#include "BaseStats.h"
#include "Ability.h"
#include "Skill.h"
#include "Damage.h"
#include <vector>
#include "Help_Funcs.h"

class Spirit
{
public:
    Spirit();
    ~Spirit();
    void take_damage(int damage);
    void heal(int amount);

    int get_health() const;
    std::string get_name() const; //获取精灵名字
    int get_level() const; //获取精灵等级

    void set_name(const std::string& new_name); //设置精灵名字
    void set_level(int new_level); //设置精灵等级
    void set_health(int new_health); //设置精灵血量
    void set_stats(const BaseStats& new_stats); //设置精灵种族值
    void take_damage(Damage* damage);
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