/*某游戏中近战武器的实际伤害计算公式为：
    武器实际最大伤害 = 武器最大伤害 * （玩家力量 + 100）/100
    现有如下武器，武器最大伤害256，要求输入玩家的力量，打印武器实际最大伤害
*/
#include <stdio.h>
#include <stdlib.h>
// 1.需要定义几个变量？  ==> 武器实际最大伤害，玩家的力量，武器最大伤害
// 2.对应什么数据类型？  ==>  double              int         double

int main()
{
    double shanghai_fact;    //武器实际最大伤害
    int strength;           //玩家力量
    double shanghai_max = 256;    //武器最大伤害
//定义完毕，开始套用公式
    printf("请输入当前角色的力量：");
    //&取地址
    scanf("%d", &strength);
    //套用公式
    shanghai_fact = shanghai_max * (strength + 100)/100;
    printf("武器的实际最大伤害为：%.2lf", shanghai_fact);  //输出值

    return 0;
}
