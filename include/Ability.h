#pragma once
class Ability
{
private:
    int hp,atk,sp_atk,def,sp_def,speed;
public:
    virtual ~Ability() = default;
};