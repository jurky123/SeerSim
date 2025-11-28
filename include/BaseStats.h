#pragma once
class BaseStats
{
private:
    int hp,atk,sp_atk,def,sp_def,speed;
public:
    virtual ~BaseStats() = default;
    int get_hp() const { return hp; }
    void set_hp(int hp) { this->hp = hp; }
    int get_atk() const { return atk; }
    void set_atk(int atk) { this->atk = atk; }
    int get_sp_atk() const { return sp_atk; }
    void set_sp_atk(int sp_atk) { this->sp_atk = sp_atk; }
    int get_def() const { return def; }
    void set_def(int def) { this->def = def; }
    int get_sp_def() const { return sp_def; }
    void set_sp_def(int sp_def) { this->sp_def = sp_def; }
    int get_speed() const { return speed; }
    void set_speed(int speed) { this->speed = speed; }
};