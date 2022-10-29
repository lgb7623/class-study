#pragma once
#include <iostream>
#include<vector>
#include<string>
#include<windows.h>
#

// vector<someclass> _vclass







using namespace std;


struct STDate
{

	
	int m_nValue;
	std::string m_ostring;
	



public:
	
	string name;
	float speed;

	vector<string> _vName;
	vector<float> _vspeed;
	vector<int>::iterator _viNumbet2;
	//std::vector<char> name;
	//std::vector<float> speed;
	
};






class MainGame_20
{

#pragma region STL ���� + ���ͷ�����
/*

�� ���Ͷ�?


- STL (Standrad Template Library) �� ���� �ִ� �÷��� Ŭ���� �� �ϳ��ν�
�迭ó�� �����ϴ� �÷��� Ŭ������ �ǹ��Ѵ�.

- �Ϲ����� �迭�� ���� �����͸� �߰��ϱ� ���� ������ ���ѵǾ� ���� �ʱ� ������
��ǻ�Ͱ� ����ϴ��� ���� ���� �����͸� �߰��ϴ� ���� �����ϴ�.

EX: vector<���ø� �μ�> ��ü �̸�(������ �μ�);

std::vector<int> ValueListA  -> int �� �����͸� �����ϴ� ����
std::vector<float> ValueListA -> float �� �����͸� �����ϴ� ����

- STL ���ʹ� ������ ����̴�.
�� ���ٸ� ��Ģ�̳� ������ ���� �Ϲ����� �����̳�
�� ������ �����̳ʴ� �����͸� �������� �����ϸ� ������ �����̳ʴ� ���Ե� ����� ������ �״�� �����ȴ�.


�� ������ �����̳�

- �⺻ �����̳� ��Ŀ� ��� ��Ģ�� �����ȴٸ� ������ �����̳ʶ�� �θ� �� �ִ�.
�� ��ǥ���� ������ �����̳�: vector, list, dequq ���...



1. ��� ��Ҵ� ���� ������� ��ġ�� �Ǿ� �Ѵ�.
�� ù��° ��ҿ� ������ ��Ҹ� ������ ������ ��ҵ��� �ݵ�� �յڷ� ������ ��Ҹ�
������ �־�� �Ѵ�.

2. ������ �ݺ���(forward iterator)�� ������ �־�� �Ѵ�.
�� �ݺ��ڰ� �̵��Ҷ����� ��ҵ��� ������ ������ ������ ����Ǿ�� �Ѵ�.

3. ������ �����̳��� ��ҵ��� ��Ȯ�� ������ ������ �ִ�.
�� ��Ȯ�� ������ ������ �ֱ� ������ Ư�� ��ġ�� �����ϴ� ���� ���� �����ϴ�.


�� ������ Ư¡

- ������ ���

- �迭 ��� �����̳�

- Ȱ�� �󵵰� ���� ���� ����� ����.

- �˻� �ӵ��� ������.
�� �б� �ɷ��� Ź���ϴ�.

- ������� ������.(���� ������ ������)

- ���ο� �޸𸮸� �Ҵ��� ���� �߰��� ���ҿ� �Բ� �����Ѵ�.

- �޸� ��뷮�� ũ��.



�� ���ͷ����Ͷ�?
- �÷��� Ŭ������ �����Ǿ� �ִ� �� �����Ϳ� �����ϱ� ���� ������ ��ü�μ� stl �� ���ԵǾ� �ִ� ��� �÷��� Ŭ������
������ ���۰� ���� ��Ÿ���� begin�� endl�Լ��� ���ϰ� �ִ�.

- ���� begin ���� �����ؼ� end���� ������ �ݺ��ϸ� �÷��ǿ� ���ԵǾ� �ִ� ��� �����Ϳ�
�����ϴ� ���� �����ϴ�

EX:
for( auto Iterator = ValueVListA.begin();
Iteraotr != ValueListA.end()l;++Iterator)
{
do
}


















*/
#pragma endregion

private:

	vector<int> _vNumbet;
	vector<int>::iterator _viNumbet;
	
	// �������� ���� ����.
	vector<int>::reverse_iterator _vriNumbet;
	
	
	
	std::vector<int> ValueListA;
	std::vector<float> ValueListB;
	
public:



	
	void privtVetor();
	inline void lineprint() { cout << "-======================================" << endl; }; // ����ӵ� ����� ���� ���� ���� ���ÿ� �ְ� ���°� ������ �����Ϸ��� inlineȭ��Ű�⵵ �ϰ� ���ϱ⵵��
	                                                                                        // (inline�� �ᵵ ����� �ƴ϶� ��Ź)

	void sampleVector(std::vector<int> ValueList);
	void sampleSTVector(std::vector<STDate> ValueList); //���Ͱ� ����ü ,Ŭ����(������� �غ���) STL(�̻���)
	void practiceVector(void);


	MainGame_20();
	~MainGame_20();


};

