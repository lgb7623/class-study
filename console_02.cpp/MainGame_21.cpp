#include "MainGame_21.h"


// ������
MainGame_21::MainGame_21()
{

	srand(time(NULL));
	/*
	
	�� STL �ʿ��� ���� ����ϴ� ���

	- STL������ �����̳ʿ� ���� �ణ�� ����� ���̰� ���� �� 
	���Ͼ� �̸��� ��� �Լ��� �ټ� �����Ѵ�.

	begin()
	�� ���� 0��° �ε���

	end()
	�� ���� ������ �ε���

	clear()
	�� ���� ����

	empty()
	�� ��� ������ Ʈ�� / �ϳ� �̻� ������� �޽�

	erase()
	�� ���ڷ� �� �ε��� �����.

	insert(��ġ, ��)
	�� ��ġ�� ���� �ִ´�.

	size
	�� ���� ����
	
	�� ���� �ٽ� 
     find(����)
	 �� ���ڷ� �� ���� ã�´�.
	
	




	*/
	// �� ���� �ֱ�
	//_mData.insert(pair<string, int>("���α׷���", 50));
	//_mData.insert(pair<string, int>("���ΰ�", 50));
	//_mData.insert(pair<string, int>("����", 50));
	//_mData.insert(pair<string, int>("����", 50));

	// ����ũ �� ���سֱ�
	_mData.insert(make_pair("�̸�A", 10));
	_mData.insert(make_pair("�̸�B", 20));
	_mData.insert(make_pair("�̸�C", 30));
	_mData.insert(make_pair("�̸�D", 40));
	_mData.insert(make_pair("�̸�E", 50));
	_mData.insert(make_pair("�̸�F", 60));
	
	//3. �߻��� ���
	pair<string, int> pr1("�̸�G", 100);
	_mData.insert(pr1);




	if (_mData["���ĥ�己"]) // �����δ� ���ȣ ���� �ȵ�
	{


		cout << "�ִ�" << endl;

	}
	else
	{
		cout << "����" << endl;
	}

    if (_mData.find("KGA") != _mData.end())
	{
		cout << "�ִ�" << endl;

  }
	else
	{
	cout << "����" << endl;
	}


	_mData.erase("�̸�C");

	for (_miData = _mData.begin(); _miData != _mData.end(); ++_miData)

		cout << _miData->first << "." << _miData->second << endl;
	cout << endl;



	// ã�� ����� ������ ����� -> �����
	// ã�� ����� ������ ����� -> �߰��Ѵ�.
	// 3. 0���� ����� ������ ����� ���� �����͸� 10���� �߰��Ѵ�.


	string name;
	string plus;

	plus = "�������� �����ڴ�";

	cout << "������ ã�� �����..? " << endl;

	while (cin >> name)
	{
		
	 
		if (_mData.find(name) != _mData.end())
		{
			cout << "�� ���̴�" << "[" << _mData[name] << "]" << endl;

			_mData.erase(name);

			
		}

		else if (name == "0")
		{
			for (int i = 0; i < 10; i++)


				_mData.insert(make_pair(plus += rand() % 100  , rand() % 100));

			
		}  


		else
		{
			cout << "�׷������ ���µ�?" << endl;

			_mData.insert(make_pair(name, rand() % 100 + 1));

			
		}

	}
	

}

// ã�� ����� ������ ����� -> �����
 // ã�� ����� ������ ����� -> �߰��Ѵ�.









std::pair<std::pair<int, int>, std::pair<int, int>> MainGame_21::getMinMaxValue(std::vector<int> a_oValueList)
{
	return std::pair<std::pair<int, int>, std::pair<int, int>>();
}

void MainGame_21::printMap(std::map<std::string, int> a_oValueList)
{
}

