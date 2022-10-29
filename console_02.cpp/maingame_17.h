#pragma once
#include<iostream>
#include"player_17.h"

class maingame_17
{



private:
	player_17* _player;


public:
	maingame_17();
	~maingame_17();

};




/// 클래스 활용 순서 1. class(플래이어 클래서) 2. manager class(관리하는 클래스 (매니저 클래스) 3. 참조 player_17* player; 4. 구현화 5. 로직작성