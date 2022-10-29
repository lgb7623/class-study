#pragma once
#include "unit.h"
class Tank : public unit
{










public:


	virtual void attack() override; // 1.부모를 무시하고 재정의 한다 할 경우 오버라이딩을 붙인다 
	                                 //2.버추얼만 붙일경우는 부모에 있는걸쓰지만 내가 정의하겠다




	Tank();
	~Tank();



};

