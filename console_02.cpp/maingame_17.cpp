#include "maingame_17.h"




// ������
maingame_17::maingame_17()
{//  �����Ҵ�
	_player = new player_17;
	_player->setHp(100);

	cout << "�÷��̾� ���� ü��:" << _player->getHp() << endl << endl;
	cout << "���� ���� (1��), ���� ����(2��) ��(3��) ����(4��) ���(5��)" << endl;



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
				cout << "���� �ɷȽ��ϴ�!" << endl;

				_player->setHp(_player->getHp() - _player->getHp() / 10);
			}

			else if (input == 4)
			{
				cout << "���� �������� �Ծ����ϴ�" << endl;
				_player->setHp(_player->getHp() - 100);
			}


			else if (input == 5)
			{
				cout << "���⸦ �¾ҽ��ϴ�" << endl;
				_player->setHp(_player->getHp() - _player->getHp());
			}

			else
			{
				cout << "���� ����" << endl;
			}

			cout << endl;
			cout << "����ü��:";
			cout << _player->getHp() << endl;

		}

		else
		{
			cout << "�÷��̾ �̹� ����Ͽ����ϴ�" << endl; 
		}
	}


	// 3�� :�� (�ϴ� 10%)
	// 4�� : ���� (��� ������)
	// 5�� : ��� 
}


// �Ҹ���
maingame_17::~maingame_17()
{


}

