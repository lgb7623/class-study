#include "unit.h"


unit::unit()
{

	name = "나는 유닛";
	hp = 100;
	mp = 50;
	atk = 800;
	cout << boolalpha;
	die << false;
	cout << "내 이름은 : " << name << endl;

	cout << "체력 : " << hp << endl;
	cout << "마나 : " << mp << endl;
	cout << "공격력 : " << atk << endl;
	cout << "나는 죽지 않는다 : " << die << endl;



// 최상위 부모에서는 소멸자를 가능한 남겨둔다.
}

unit::~unit()
{
}

void unit::attack(char* myname, char* enemyname)
{

	cout << myname << "이" << enemyname << "을 공격한다" << endl;


}

void unit::attack(int atk, int enemyhp)
{

	cout << atk << "의 공격으로 적의 체력" << enemyhp << "을 감소시켰다" << endl;

}

void unit::attack(bool* enemydie)
{

	cout << boolalpha;
		cout << "적 제거 여부: " << enemydie < , endl;


}

void unit::attack()
{

	cout << "적을 공격한다" << endl;
}




