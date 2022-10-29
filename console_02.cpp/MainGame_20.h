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

#pragma region STL 벡터 + 이터레이터
/*

▶ 백터란?


- STL (Standrad Template Library) 에 속해 있는 컬렉션 클래스 중 하나로써
배열처럼 동작하는 컬렉션 클래스를 의미한다.

- 일반적인 배열에 비해 데이터를 추가하기 위한 갯수가 제한되어 있지 않기 때문에
컴퓨터가 허락하는한 많은 양의 데이터를 추가하는 것이 가능하다.

EX: vector<템플릿 인수> 객체 이름(생성자 인수);

std::vector<int> ValueListA  -> int 형 데이터를 보관하는 벡터
std::vector<float> ValueListA -> float 형 데이터를 보관하는 벡터

- STL 벡터는 시퀀스 기반이다.
ㄴ 별다른 규칙이나 제약이 없는 일반적인 컴테이너
ㄴ 시퀀스 컨테이너는 데이터를 선형으로 저장하며 시퀀스 컨테이너는 삽입된 요소의 순서가 그대로 유지된다.


▷ 시퀀스 컨테이너

- 기본 컨테이너 방식에 몇가지 규칙이 성립된다면 시퀀스 컨테이너라고 부를 수 있다.
ㄴ 대표적인 시퀀스 컨테이너: vector, list, dequq 등등...



1. 모든 요소는 직선 순서대로 배치가 되야 한다.
ㄴ 첫번째 요소와 마지막 요소를 제외한 나머지 요소들은 반드시 앞뒤로 인접한 요소를
가지고 있어야 한다.

2. 순방향 반복자(forward iterator)를 가지고 있어야 한다.
ㄴ 반복자가 이동할때마다 요소들의 순서가 변하지 않음이 보장되어야 한다.

3. 시퀀스 컨테이너의 요소들은 명확한 순서를 가지고 있다.
ㄴ 명확한 순서를 가지고 있기 때문에 특정 위치를 참조하는 연산 또한 가능하다.


▷ 백터의 특징

- 시퀀스 기반

- 배열 기반 컨테이너

- 활용 빈도가 가장 높고 사용이 쉽다.

- 검색 속도가 빠르다.
ㄴ 읽기 능력이 탁월하다.

- 입출력은 느리다.(삽입 삭제가 느리다)

- 새로운 메모리를 할당해 새로 추가한 원소와 함께 복사한다.

- 메모리 사용량이 크다.



▶ 이터레이터란?
- 컬렉션 클래스에 보관되어 있는 각 데이터에 접근하기 위한 포인터 객체로서 stl 에 포함되어 있는 모든 컬렉션 클래스는
데이터 시작과 끝을 나타내는 begin과 endl함수를 지니고 있다.

- 따라서 begin 부터 시작해서 end가지 루프를 반복하면 컬렉션에 포함되어 있는 모든 데이터에
접근하는 것이 가능하다

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
	
	// 생각보다 자주 쓴다.
	vector<int>::reverse_iterator _vriNumbet;
	
	
	
	std::vector<int> ValueListA;
	std::vector<float> ValueListB;
	
public:



	
	void privtVetor();
	inline void lineprint() { cout << "-======================================" << endl; }; // 실행속도 향상을 위해 적어 놓음 스택에 넣고 빼는걸 없애줌 컴파일러가 inline화시키기도 하고 안하기도함
	                                                                                        // (inline을 써도 명령이 아니라 부탁)

	void sampleVector(std::vector<int> ValueList);
	void sampleSTVector(std::vector<STDate> ValueList); //벡터가 구조체 ,클래스(여기까지 해보기) STL(이상적)
	void practiceVector(void);


	MainGame_20();
	~MainGame_20();


};

