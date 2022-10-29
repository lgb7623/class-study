#pragma once
#include<iostream>


using namespace std;

#pragma region
/*

▶ 접근자+ 설정자
접근자(accessor): 멤버변수 값을 반환하는 멤버 함수를 지칭한다.
설정자(mutator): 멤버 변수 값을 변경하는 멤버 함수를 지칭한다.


※ 일반적으로 getter / setter(set) 세개의 명을 알고 있어아한다.!






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
	- 기본적으로 c++ 언어의 함수는 호출이 될때 함수의 선언에서 명시한 만큼의 입력을 넘기는것을 원칙으로 한다.
    - 하지만 디폴트 매개변수를 이용하면 함수 호출 시 입력 값 넘기는 것을 생략하는것이 가능하다.
	- 아무런 입력이 없을 경우 기본적으로 지니는 값을 지정하는것이 가능하다는 애기를 뜻한다.
	 
	* 
	*  
	*/


	void setID(int ID = 0);
	void setName(std::string Name = "");




public:

	// 캡슐함수 만들기(겟터,셋터)
	// ㄴ 일반 함수들은 cpp에서 기능을 구현하지만 겟터+ 셋터 함수는 헤더파일에서 구현한다.
	// 헤더에서 구성하는 친구들~  겟터/셋터, 인라인함수, 템플릿
	// ㄴ 겟터 셋터 함수는 특히 함수명을 지을때 신경을 쓴다. (직감적으로 겟/셋 함수인걸 알기위해)
	
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
	~player_17(){}  //{}은 생략을 하겠다는 뜻
};

