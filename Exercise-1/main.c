/*ĳ��Ϸ�н�ս������ʵ���˺����㹫ʽΪ��
    ����ʵ������˺� = ��������˺� * ��������� + 100��/100
    ����������������������˺�256��Ҫ��������ҵ���������ӡ����ʵ������˺�
*/
#include <stdio.h>
#include <stdlib.h>
// 1.��Ҫ���弸��������  ==> ����ʵ������˺�����ҵ���������������˺�
// 2.��Ӧʲô�������ͣ�  ==>  double              int         double

int main()
{
    double shanghai_fact;    //����ʵ������˺�
    int strength;           //�������
    double shanghai_max = 256;    //��������˺�
//������ϣ���ʼ���ù�ʽ
    printf("�����뵱ǰ��ɫ��������");
    //&ȡ��ַ
    scanf("%d", &strength);
    //���ù�ʽ
    shanghai_fact = shanghai_max * (strength + 100)/100;
    printf("������ʵ������˺�Ϊ��%.2lf", shanghai_fact);  //���ֵ

    return 0;
}
