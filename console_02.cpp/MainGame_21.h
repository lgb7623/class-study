#pragma once
#include<iostream>
#include<map>
#include<string>
#include<set> // Ű or ���� �ϳ��� ������ �̷���� �༮
#include<vector>
#include<list>
#include<windows.h>
#include<ctime> //  c++�� �ð� ���� ����� �ִ� ��� c: time.h / c++ ctime
#include<tuple> // c++ �ֽ� ��� ������(c++11)
// �� pair�� Ȯ�� ���� -> ��ȯ���� n�� �̻� ������ �� �ִ�.
// ���� �Լ�:
// �� make_tuple(Ʃ�û���) / get(��������) / swap(Ʃ�ð��� ����) / tie(Ʃ�ÿ� �ִ� ���� �з�)







using namespace std;



#pragma region STL ��
/*

�� ���̶�?

- ���Ϳ� ���������� �����͸� �����ϴ� �÷��� Ŭ���� �� �ϳ��ν� �����Ǿ� �ִ� �����͸� Ű / ���� �������� �����ϴ� Ŭ������ �ǹ��Ѵ�.

EX:
std:: map<int,int) ValueListA;         Ű:int��, ����: int��
std::map<std::string, int> ValueListB;  Ű :string�� , ����: int ��



�� ���� Ư¡


- �ΰ��� ¦�� �̷�� ������ ���� �����̳�

- ���� �ڷᱸ���� BinarySearchTree �� ���� �� Ʈ���� �����Ǿ� �ִ�.

- ���� ��Ʈ���� ���������� �����ؼ� �ڽ��� ���� ��� �Ϲ������� �״����� �������....������ n(�������)


�� ���� �� Ʈ���� �ڰ� ���� ���� Ž�� Ʈ���� ���� OR ������ ��带 ����ϸ� ���� ���� ��Ģ�� ������.

�� ��Ʈ ���� ���������� �����ϸ� ���� ��� ���� �������̴�.
   �� NULL(nulleaf): �����Ͱ� ���� Ʈ���� �� ���(���� ���)


�� Ư¡���δ� ������ ���� �������� ���� �� ������ ������ ����� �ڽ��� ������ �̿��� �Ѵ�.(��, �ݴ��� ���� ���� ��Ģ�� �����Ѵ�.)

�� �������� ��Ʈ���� ���� ��ο� �ִ� ������ ����� ������ ����.
  �� ���� �̶� ���� ���ԵǴ� ���� ���� ��尡 �Ǹ� �� ��带 �߽����� ���� �ڽ����� ���� ���� ������.(���� ���)


  �� ���� �� Ʈ���� ���� �����߿� ���� ������ ���ؼ� ȸ���� �Ѵ�(��/��)

  - �뷮�� �˻��� Ưȭ�Ǿ� �ִ�.

  - ���� ������ ����� ����/������ �߻��Ѵٸ� ���� ������ �ƴϴ�.


  - �ʰ� ������ ����� �ϴ� STL ���� �����ϸ� ��Ȳ�� �°� ��� �����̳ʸ� ������� ����� �ϰ� ������ �ؾ� �Ѵ�.

  
  �� STL ���� �ٽ� 

  - 1. Ű�� ���� ���� ����
       �� ù��° ����: FIRST ->  Ű
	   �� �ι�° ����: SECOND -> ��

- 2. �߰��ϴ� ����� insert()�� ����ϸ� Ű�� ����, �ΰ��� ���ÿ� �߰��ؾ� �ϴ� pair �Ǵ� make_pair�� �̿��Ѵ�.

  pair:
  �� �ΰ��� �ڷ����� �ϳ��� ���� ����ü
   �� ���ø� ����ü�̱� ������ � �ڷ����� ������ OK

    make_pair:
	�� ���״�� pair�� ����� �ִ� �Լ�
	   �� EX: p.first = x, p.second = y;
	   �� P = make_pair(x,y);










*/
#pragma endregion






class MainGame_21
{

	
private:
	//��
	map<string, int> _mData;

	// �� �ݺ���
	map<string, int>::iterator _miData;
	
	// ��Ƽ ��
	//multimap<vector<MainGame_21*>, set<vector<float>, list<vector<int>, vector<double> >>> _muData;

	// Ʃ��
	tuple<int, string, char> _tupleValue;


public:


	std::pair<std::pair<int, int>, std::pair<int, int>> getMinMaxValue(std::vector<int> a_oValueList);

	void printMap(std::map<std::string, int> a_oValueList);




	MainGame_21();
	~MainGame_21() {};

};

