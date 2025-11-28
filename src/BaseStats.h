#pragma once
class BaseStats
{
private:
    int hp,atk,sp_atk,def,sp_def,speed;
public:
    virtual ~BaseStats() = default;
};