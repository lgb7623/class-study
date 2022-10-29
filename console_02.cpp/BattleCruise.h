#pragma once
#include"unit.h"
//#include"Tank.h"



class BattleCruise :public unit /*Tank*/ // 다중상속 c++에 대한 깊이가 없으면 스파게티 코드를 유발한다// c#에서는 단일상속 밖에 안됨// 그럼에도 간단한건 써보고 어필
{






public: 
	

	virtual void attack();



	BattleCruise();
	~BattleCruise();
};

