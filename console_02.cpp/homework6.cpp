#include<iostream>
#include<windows.h>
#include<time.h>
#include<string.h>
using namespace std;


//NUMB 1 3 5
//NUMA//6 4 2

//numb[0] + numa[0] +numb[2]				





void main()
{

	char NumF[15];
	char NumB[100];
	int lenA;

#pragma region 
	/*
	����1. ���ڿ� ����

	- ���ڸ� �Է� �޾� �Է¹��� ���ڸ� �Ųٷ� ���
	�� EX: ABCD -> DCBA
	 char [?] =
	 lenA = strlen(numB)

	 lenA= []
	 CHAR[LENA- I]  CHAT[0]
	012345
	543210

	- �ִ� �״�θ� ��������� ¦���� �ִ� ���ڸ� �Ųٷ� ���
	�� EX: ASDFG -> AFDSG

	- �ֹι�ȣ�� �Է��ϰ� -�� ���ŵ� �ֹι�ȣ�� ���
	�� EX:	931230-1111111> - ������

	�����ڿ� �����Ϳ� �迭 �����͸� ����ϸ� ��
	(��� �Է� ������ �˴ϴ�)

	�ʼ�:
	��string ��� ����

	*/
#pragma endregion 

	cout << "���ڿ��� �Ųٷ� ����մϴ� ���ڿ��� ����� �Է����ּ���" << endl;

	cin >> NumB;

	lenA = strlen(NumB);

	cout << "�Է��Ͻ� ���ڸ� �Ųٷ��ϸ�";


	for (int i = 0; i != lenA; i++)
	{

		cout << NumB[(lenA - 1) - i];

	}
	cout << "�Դϴ�" << endl;



	char NumA[100];


	strcpy(NumA, NumB);//COPY

	cout << "¦���� �ٲپ� ��� �ϸ�";


	if ((lenA % 2) == 1)//HORSE
	{
		int j = 0;
		for (int i = 1; i != lenA; i += 2)  //0, 1, 2, 3, 4, 5, 6,7, NULL
		{
			cout << NumA[j];
			cout << NumB[(lenA - 1) - i];


			j += 2;
		}
		cout << NumA[lenA - 1];
	}
	else//¦��
	{
		int j = 0;
		for (int i = 0; i != lenA; i += 2)  //0,1,2,3,4,5,6,NULL
		{
			cout << NumA[j];
			cout << NumB[(lenA - 1) - i];

			j += 2;
		}
	}
	cout << "�Դϴ�" << endl;

	cout << "�ֹι�ȣ - ���ű��Դϴ�" << endl;


	cin >> NumF;



	char* numD;
	numD = strtok(NumF, "-");

	while (numD != NULL)
	{
		cout << numD;
		numD = strtok(NULL, "-");
	}

	// �Ϲ������� ���ڿ��� ��� �ϴ� ���̽�







}














