#pragma once
#include<iostream>


using namespace std;

#pragma region
/*

�� ������+ ������
������(accessor): ������� ���� ��ȯ�ϴ� ��� �Լ��� ��Ī�Ѵ�.
������(mutator): ��� ���� ���� �����ϴ� ��� �Լ��� ��Ī�Ѵ�.


�� �Ϲ������� getter / setter(set) ������ ���� �˰� �־���Ѵ�.!






*/




#pragma endregion



class player_17
{

private:
	
	int _hp;
	int _mp;
	int _def;
	int _att;
	float _speed;




public:
	/*
	- �⺻������ c++ ����� �Լ��� ȣ���� �ɶ� �Լ��� ���𿡼� ����� ��ŭ�� �Է��� �ѱ�°��� ��Ģ���� �Ѵ�.
    - ������ ����Ʈ �Ű������� �̿��ϸ� �Լ� ȣ�� �� �Է� �� �ѱ�� ���� �����ϴ°��� �����ϴ�.
	- �ƹ��� �Է��� ���� ��� �⺻������ ���ϴ� ���� �����ϴ°��� �����ϴٴ� �ֱ⸦ ���Ѵ�.
	 
	* 
	*  
	*/


	void setID(int ID = 0);
	void setName(std::string Name = "");




public:

	// ĸ���Լ� �����(����,����)
	// �� �Ϲ� �Լ����� cpp���� ����� ���������� ����+ ���� �Լ��� ������Ͽ��� �����Ѵ�.
	// ������� �����ϴ� ģ����~  ����/����, �ζ����Լ�, ���ø�
	// �� ���� ���� �Լ��� Ư�� �Լ����� ������ �Ű��� ����. (���������� ��/�� �Լ��ΰ� �˱�����)
	
	int getHp() { return _hp; }
	void setHp(int hp) { _hp = hp; }

	int getMp(){ return _mp; }
	void setMp(int mp) { _mp = mp; }

	int getDef() { return _def; }
	void setDef(int def) { _def = def; }

	int getAtt() { return _att; }
	void setAtt(int att) { _att = att; }

	float getSpeed() { return _speed; }
	void setSpeed(float speed) { _speed = speed; }






	player_17();
	~player_17(){}  //{}�� ������ �ϰڴٴ� ��
};

