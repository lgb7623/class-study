#include "BattleCruise.h"


BattleCruise::BattleCruise()
{


	name = "배틀크루져";
	hp = 1000;
	mp = 200;
	atk = 1500;
	die = false;

	cout << "내이름은:" << name << endl;
	cout << "체력:" << hp << endl;
	cout << "마나:" << mp << endl;
	cout << "공격력:" << atk << endl;
	cout << boolalpha;
	cout << "나는 죽지 않는다:" << die << endl;
}




BattleCruise::~BattleCruise()
{
}

void BattleCruise::attack()
{


	cout << "야마토" << endl;

}