#include "BattleCruise.h"


BattleCruise::BattleCruise()
{


	name = "��Ʋũ����";
	hp = 1000;
	mp = 200;
	atk = 1500;
	die = false;

	cout << "���̸���:" << name << endl;
	cout << "ü��:" << hp << endl;
	cout << "����:" << mp << endl;
	cout << "���ݷ�:" << atk << endl;
	cout << boolalpha;
	cout << "���� ���� �ʴ´�:" << die << endl;
}




BattleCruise::~BattleCruise()
{
}

void BattleCruise::attack()
{


	cout << "�߸���" << endl;

}