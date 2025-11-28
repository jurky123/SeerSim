#include "Help_Funcs.h"
/*
计算伤害公式
公式：[(攻击方的LV×0.4+2)×技能威力×攻击方的攻击÷防御方的防御÷50+2)×本系修正×克制系数×(217-255)÷255×其他修正]
参数说明：
lv：攻击方等级
pow：技能威力
atk：攻击方攻击
def：防御方防御
fix：本系修正
advantage：克制系数
*/
int calc_damage_origin(int lv,int pow,int atk,int def,int fix,float advantage){
    // 创建随机数生成器
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(217, 255);  // 生成217-255之间的随机数
    int random_factor = dis(gen);
    return  ((float(lv)*0.4*(float(pow)*(float(atk)/float(def)))/50.0 + 2)*advantage*(float(random_factor)/255.0)*float(fix));
}
