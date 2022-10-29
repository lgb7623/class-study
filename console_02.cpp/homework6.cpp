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
	과제1. 문자열 과제

	- 문자를 입력 받아 입력받은 문자를 거꾸로 출력
	ㄴ EX: ABCD -> DCBA
	 char [?] =
	 lenA = strlen(numB)

	 lenA= []
	 CHAR[LENA- I]  CHAT[0]
	012345
	543210

	- 있는 그대로를 출력하지만 짝수에 있는 문자만 거꾸로 출력
	ㄴ EX: ASDFG -> AFDSG

	- 주민번호를 입력하고 -가 제거된 주민번호로 출력
	ㄴ EX:	931230-1111111> - 없어짐

	ㄴ문자열 포인터와 배열 포인터를 사용하면 굿
	(영어만 입력 받으면 됩니다)

	필수:
	ㄴstring 사용 금지

	*/
#pragma endregion 

	cout << "문자열을 거꾸로 출력합니다 문자열을 영어로 입력해주세요" << endl;

	cin >> NumB;

	lenA = strlen(NumB);

	cout << "입력하신 문자를 거꾸로하면";


	for (int i = 0; i != lenA; i++)
	{

		cout << NumB[(lenA - 1) - i];

	}
	cout << "입니다" << endl;



	char NumA[100];


	strcpy(NumA, NumB);//COPY

	cout << "짝수만 바꾸어 출력 하면";


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
	else//짝수
	{
		int j = 0;
		for (int i = 0; i != lenA; i += 2)  //0,1,2,3,4,5,6,NULL
		{
			cout << NumA[j];
			cout << NumB[(lenA - 1) - i];

			j += 2;
		}
	}
	cout << "입니다" << endl;

	cout << "주민번호 - 제거기입니다" << endl;


	cin >> NumF;



	char* numD;
	numD = strtok(NumF, "-");

	while (numD != NULL)
	{
		cout << numD;
		numD = strtok(NULL, "-");
	}

	// 일반적으로 문자열을 사용 하는 케이스







}














