#include "unit.h"


unit::unit()
{

	name = "���� ����";
	hp = 100;
	mp = 50;
	atk = 800;
	cout << boolalpha;
	die << false;
	cout << "�� �̸��� : " << name << endl;

	cout << "ü�� : " << hp << endl;
	cout << "���� : " << mp << endl;
	cout << "���ݷ� : " << atk << endl;
	cout << "���� ���� �ʴ´� : " << die << endl;



// �ֻ��� �θ𿡼��� �Ҹ��ڸ� ������ ���ܵд�.
}

unit::~unit()
{
}

void unit::attack(char* myname, char* enemyname)
{

	cout << myname << "��" << enemyname << "�� �����Ѵ�" << endl;


}

void unit::attack(int atk, int enemyhp)
{

	cout << atk << "�� �������� ���� ü��" << enemyhp << "�� ���ҽ��״�" << endl;

}

void unit::attack(bool* enemydie)
{

	cout << boolalpha;
		cout << "�� ���� ����: " << enemydie < , endl;


}

void unit::attack()
{

	cout << "���� �����Ѵ�" << endl;
}




