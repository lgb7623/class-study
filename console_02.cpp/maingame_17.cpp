#include "maingame_17.h"




// 생성자
maingame_17::maingame_17()
{//  동적할당
	_player = new player_17;
	_player->setHp(100);

	cout << "플레이어 현재 체력:" << _player->getHp() << endl << endl;
	cout << "소형 물약 (1번), 대형 물약(2번) 독(3번) 출혈(4번) 즉사(5번)" << endl;



	int input;


	while (true)
	{

	    cin >> input;


		if (_player->getHp() > 0)
		{
			if (input == 1)
			{

				_player->setHp(_player->getHp() + 100);

			}

			else if (input == 2)
			{
				_player->setHp(_player->getHp() + 500);
			}


			else if (input == 3)
			{
				cout << "독에 걸렸습니다!" << endl;

				_player->setHp(_player->getHp() - _player->getHp() / 10);
			}

			else if (input == 4)
			{
				cout << "출혈 데미지를 입었습니다" << endl;
				_player->setHp(_player->getHp() - 100);
			}


			else if (input == 5)
			{
				cout << "즉사기를 맞았습니다" << endl;
				_player->setHp(_player->getHp() - _player->getHp());
			}

			else
			{
				cout << "정신 차려" << endl;
			}

			cout << endl;
			cout << "현재체력:";
			cout << _player->getHp() << endl;

		}

		else
		{
			cout << "플레이어가 이미 사망하였습니다" << endl; 
		}
	}


	// 3번 :독 (턴당 10%)
	// 4번 : 출혈 (즉시 데미지)
	// 5번 : 즉사 
}


// 소멸자
maingame_17::~maingame_17()
{


}

