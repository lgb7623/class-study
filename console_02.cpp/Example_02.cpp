#include<iostream>
#include<time.h>

//using ������ : ������ ���ӽ����̽��� ��� ��Ī�� �� ������ �ִ� �������� ������
//�Ҽ� �������� ��Ī�� �ٷ� ��� ����

using namespace std;
// �� c++ ǥ�ؿ��� �����ϰ� �ִ� �����͵��� std�� ���� ����
// using ������
using std::cin;
using std::cout;
using std::endl;


namespace A
{
	namespace B
	{
		namespace C
		{
			int platerGold;
		}
	}
}

// ����
namespace ABC = A::B::C;


void main()
{
	A::B::C::platerGold;

	ABC::platerGold;
	int TestNumA = true;
	int TestNumB = false;
	int TestResult = TestNumA + TestNumB;

	//?
	cout << "boolean:" << TestResult << endl;

	cout << endl;

	// ���� �ʱ�ȭ ���
	// �� ������ �ʱ�ȭ�� �پ��� ����� ������ �Ϲ������� ���Ǵ� �����
	// �Ʒ��� ����

	// int�� ������ ����
	int Num0;

	// ���� ���� �� ����(�Ҵ�)
	Num0 = 10;

	// ������ ����� ���ÿ� �ʱ�ȭ�� ���������� ���� ���� �ʴ°� ���� �����ϴ�.
	int Num1 = 3;
	int Num2 = 6;
	int Total;

	int Num3;
	int Num4;
	int Num5;

	int Num6, Num7, Num8;

	Num6 = Num7 = Num8 = 100;


	// sizeof Ű���带 �̿��ϸ� ���� �Ǵ� �ڷ����� ũ�⸦ ����ϴ� ���� �����ϴ�.
	cout << "���� 1������:" << sizeof(1) << endl;
	cout << "���� 2������:" << sizeof(2) << endl;
	cout << "true ������:" << sizeof(true) << endl;
	cout << "false ������:" << sizeof(false) << endl;

	cout << endl;


	// ���� �ڷ����� �˾����� �� �� �������� �� �� �ִ�.
/*
	int nValue = 0;

	cout << "���ڸ� �Է��ϼ���" << endl;
	// c++ ��Ÿ��

	cin >> nValue;

	cout << "���� �Է��� ����: " << nValue << endl;
	cout << endl;

	// c ��Ÿ��
	printf("�����Է�: ");
	scanf_s("%d", &nValue);


	cout << endl;

	// ================================================================================================================
	// �پ��� ���� Ÿ��
	
	short ValueA = 10;
	int ValueB = 20;
	long ValueC = 30;
	long long ValueD = 40;
	float ValueE = 50;

	//C ��� Ÿ��
	printf("C��� short : %d, %d\n", ValueA, sizeof(ValueA));
	printf("C��� int : %d, %d\n", ValueB, sizeof(ValueB));
	printf("C��� long : %ld, %d\n", ValueC, sizeof(ValueC));
	printf("C��� long long : %lld, %d\n", ValueD, sizeof(ValueD));
	printf("C��� float : %f, %d\n", ValueE, sizeof(ValueE));

	//C++ ��� Ÿ��
	cout << "C++ short:" << ValueA << "," << "������:" << sizeof(ValueA) << endl;
	cout << "C++ int:" << ValueB << "," << "������:" << sizeof(ValueB) << endl;
	cout << "C++ long:" << ValueC << "," << "������:" << sizeof(ValueC) << endl;
	cout << "C++ long long:" << ValueD << "," << "������:" << sizeof(ValueD) << endl;
	cout << "C++ float:" << ValueE << "," << "������:" << sizeof(ValueE) << endl;
	//c ��� Ÿ��
	
	

	//C++ ��� Ÿ��
	

	cout << endl;
	//

	// ================================================================================================================
	/*
	�� ���� ǥ����� ����

	1. �밡���� ǥ���

	- ������������ ������� �ڵ��� �Ҷ� �� ������ � �������� �˱� ���� ���� ����� �ϵ���
	���� �տ� �� ������ � ���������� ��Ÿ���� ���ڸ� ���δ�

	EX)
	int Num          <=>        nNum
	float ValueA     <=>        fValueA
	double ValueB    <=>        dValueB
	char letter      <=>        chletter

	- ����� ����Ƽ�� �ڵ����� ���� ������� �ʴ´�.
	�� �ֳ��ϸ� ��ü���� ����� �ξ� �� ���� ����ϱ� ������
	   �� ������ ���������� �ٽ� ����� �ǰ� �ִ� �߼��̱� ������ �����ؾ� �Ѵ�.
	   
	�� ǥ����� ���� ����� ���Ѵٰ� �ϴ��� ǥ����� ��Ģ ������ �ݵ�� �˾Ƶ־� �Ѵ�.
	�� ���� �� ���� �ϴ� ��



	2. ī��� ǥ���

	- ��ü�������� ����� �ڵ����� ��ȯ�� �Ǹ鼭 �������� ���� �� �ܾ��� �ձ��ڸ� �빮�ڷ� ǥ���ϴ� ǥ���

	ex)
	int playerSelectNumber;


	3. �Ľ�Į ���̽� ǥ���

	- �⺻ ���´� ī��İ� �����ϴ�.
	
	ex)
	int PlayerSelectNumber;


	4. ������ũ ǥ���
	- �ܾ ����� �������� ��� ǥ���ϴ� ���

	ex)
	int Player_Select_Number;


	�� �⺻ ǥ����ܿ� �߼��� �´� ǥ����� ������ ���� ��� ���� �ϰ���


	�� ���� �̸��� Ư¡
	- �⺻������ ������ �̸��� ���ĺ�, ����, _�� ������ �ȴ�.
	- C���� ��ҹ��ڸ� �����ϸ�, Num�� num�� �ٸ� ���� �̸��̴�.

	�� 1. ������ �̸��� ���ڷ� ������ �� ����.
    �� 2. Ű���� ���� ���� �̸����� ����� �� ����.
	�� 3. �̸����̿� ������ ���Ե� �� ����.

	int num100; o
	int num101; o
	int _num102; (����ٴ� ���) o
	int 6Num; x
	int Num look; x
	int bool x
	
	*/



	// �� ���� �õ�
	// �� ����
	// rand(): ���� �Լ� �� ������ ���ڸ� ��ȯ ��Ų��.
//���� �õ� �ʱ�ȭ
srand(time(NULL));


	int numR;

	numR = rand() % 5; // 0, 1, 2, 3, 4
	cout << "������ �� ��ȯ: " << numR << endl;

	// ������ �������� 20~25���� ������ ����.

	int weaponA = 0;

	weaponA = rand() % 6 + 20;



	//
	//
	//

	cout << "������ ������ ��:" << weaponA << endl;

	

}



#pragma region �ڷ��� + ���� ����
/*

�� �ڷ���
- ������ ������ �ǹ��ϸ� ���� �ڷ���(Data Type)�̶�� �����ϸ� �ȴ�.

�� C/C++ ���� �����ϴ� �ڷ��� ����

- ������
���Ҽ����� ���� ���� ǥ���ϱ� ���� �ڷ���

- �Ǽ���
���Ҽ����� �ִ� ���� ǥ���ϱ� ���� �ڷ���

- ������
�����ڸ� ǥ���ϱ� ���� �ڷ���

- ������
����, ������ �Ǻ��ϴ� �ڷ���

�� C/C++ ��� ������ �ڷ����� ����
-short 
�� 2����Ʈ ũ�⸦ ���ϴ� �ڷ���

-int
�� 4����Ʈ ũ�⸦ ���ϴ� �ڷ���

-long
�� 4~8����Ʈ ũ�⸦ ���ϴ� �ڷ���

-long long
�� 8����Ʈ ũ�⸦ ���ϴ� �ڷ���

�� C/C++ ��� �Ǽ��� �ڷ����� ����

- float
�� 4����Ʈ ũ�⸦ ���ϴ� �ڷ���

- double
�� 8����Ʈ ũ�⸦ ���ϴ� �ڷ���

�� C/C++ ��� ������ �ڷ����� ����

-char
�� 1����Ʈ ũ�⸦ ���ϴ� �ڷ���

�� C/C++ ��� ������ �ڷ����� ����

�� ������! 
- bool 

- 1����Ʈ ũ�⸦ ������ 0(����) 1(��)�� ��Ÿ���� �ڷ���
�� c ���� �������� �ش��ϴ� �� �Ǵ� �����̶�� �ڷ����� ������ �������� �ʱ� ������ �Ϲ������� ���� 0(����), 0�� ������ ������ ������ �����Ѵ�.

��c���� ǥ�� 90��� �Ĺݿ� ������� ǥ��c99���� bool Ÿ���� �߰��ƴ�.
�� ����ϱ� ���ؼ� ������� �ʿ�(stdbool.h)

- ���� c++���� �� �Ǵ� ������ ��Ÿ���� Ű���� true/false�� ���ؼ� �� �Ǵ� ������ ǥ���ϴ� ���� �����ϴ�.

-c/c++ �ڷ����� �⺻������ ����(signed)�� ǥ���ϴ°��� ���������� ��쿡 ���� ������ ǥ������ �ʴ� ��ſ� ����� �� �� ũ�� ǥ���ϴ� ����� �ִ�.
�� ��, unsigned Ű���带 �̿��ϸ� ������ ǥ������ �ʰ� ������� ǥ���ϴ°��� �����ϴ�

- bool �ڷ����� ������ �;� �� ��ġ�� ���� �Ǹ� ���� 1�� 0���� ��ȯ�� �ɻ� ���� 0�� 1�� �ǹ��ϴ°� �ƴϴ�.

�� �ڷ����� ũ��
1. ������ �ڷ���

�ڷ��� Ÿ��      ũ��               ����
int            4byte    �� -21�� ~ 21������ ���� ��´� (x64��  900��)
unsigned int   4byte    0  ~ �� 43������� ���� ��´�. 
long           4byte    �� 21�� ~ 21������ ���� ��´�.
unsigned long  4byte    0  ~ �� 43������� ���� ��´�.
short          2byte    �� -32767 ~32767������ ���� ��´�.(rand)
unsigned short 2byte    �� 0 ~ 65535������ ���� ��´�.


2. �Ǽ��� �ڷ���

�ڷ��� Ÿ��     ũ��                 ����
float         4byte     �Ҽ��� 6~7�ڸ�(c++)������ �Ǽ��� ��´�.
double        8byte     �Ҽ��� 15�ڸ�(c++) ������ �Ǽ��� ��´�.


3. ������ �ڷ���

�ڷ��� Ÿ��     ũ��                 ����
char           1byte   ������ ��´�.(����)
unsigned char  1byte   ���� ������ ��´�.(����)    


4. ������ �ڷ���

�ڷ��� Ÿ��     ũ��                 ����
bool           1byte   0(����), 1(��)


�� �⺻������ �˾ƾߵ� 

=======================================================================================

�� ��������

���� �����̶�?
�� ���� ������ �� �ִ� �޸𸮰����� �̸��� �����ϴ°� ���Ѵ�.


�⺻ ����: ���� ����(����) ������
�� ex: int platerGold; 


������?
�� ���� �� �ִ� ���ڳ� �����͸� �ǹ��Ѵ�
�� ��ǻ�ͷ� �Ͽ��� ���� ������ �� �ִ� �޸� ������ �ٴ� �̸�
�� ������ �̿��ϸ� Ư�� ���� ������ ���� �ش� ���� �̿��� �������� ������ ó���ϴ� ���� �����ϴ�.

EX)
int Num = 20:

- ������ �������� ���ؼ� Num�̶�� �̸����� �޸� ������ �Ҵ�
- int Num= 20; �� �ܼ��� Num�� 20�� �����ϴ°� �ƴ϶� Num�� �ǹ��ϴ� �޸� ������ 20�� ������� �ǹ��̴�.






*/
#pragma endregion