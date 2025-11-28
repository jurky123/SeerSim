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
    int get_attribute_type() const; //获取属性类型
    int get_id() const; //获取精灵id
    BaseStats get_stats() const; //获取精灵种族值

    void set_id(int new_id); //设置精灵id
    void set_attribute_type(int type); //设置属性类型
    void set_name(const std::string& new_name); //设置精灵名字
    void set_level(int new_level); //设置精灵等级
    void set_health(int new_health); //设置精灵血量
    void set_stats(const BaseStats& new_stats); //设置精灵种族值
    void take_damage(Damage* damage , Spirit* attacker);//受到伤害
private:
    int id;
    std::string name;
    int level;
    int health;//体力值但是这个是血量而不是能力值
    BaseStats stats;//种族值
    Ability ability;//能力值
    int exp; //经验值
    int attribute_type;//属性类型

    std::vector<Skill> skill_pool;//技能池
    std::vector<Skill> skills;//已学习技能
    std::vector<Skill> skills_equipped;//已装备技能
};