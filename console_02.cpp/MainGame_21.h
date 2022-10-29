#pragma once
#include<iostream>
#include<map>
#include<string>
#include<set> // 키 or 벨류 하나의 값으로 이루어진 녀석
#include<vector>
#include<list>
#include<windows.h>
#include<ctime> //  c++의 시간 관련 기능이 있는 헤더 c: time.h / c++ ctime
#include<tuple> // c++ 최신 언어 수문장(c++11)
// ㄴ pair의 확장 버전 -> 반환값을 n개 이상 전달할 수 있다.
// 관련 함수:
// ㄴ make_tuple(튜플생성) / get(가져오기) / swap(튜플값을 전달) / tie(튜플에 있는 값들 분류)







using namespace std;



#pragma region STL 맵
/*

▶ 맵이란?

- 벡터와 마찬가지로 데이터를 관리하는 컬렉션 클래스 중 하나로써 보관되어 있는 데이터를 키 / 벨류 조합으로 관리하는 클래스를 의미한다.

EX:
std:: map<int,int) ValueListA;         키:int형, 벨류: int형
std::map<std::string, int> ValueListB;  키 :string형 , 벨류: int 형



▷ 맵의 특징


- 두개의 짝을 이루는 데이터 저장 컨테이너

- 내부 자료구조는 BinarySearchTree 중 레드 블랙 트리로 구성되어 있다.

- 레드 블랙트리는 검정색으로 시작해서 자식이 레드 노드 일반적으로 그다음은 검정노드....마지막 n(리프노드)


ㄴ 레드 블랙 트리는 자가 균형 이진 탐색 트리로 검정 OR 빨강색 노드를 사용하며 균형 복원 규칙을 따른다.

ㄴ 루트 노드는 검은색으로 시작하며 리프 노드 또한 검은색이다.
   ㄴ NULL(nulleaf): 데이터가 없는 트리의 끝 노드(더미 노드)


ㄴ 특징으로는 빨간색 노드는 연속으로 나올 수 없으며 빨간색 노드의 자식은 검은색 이여야 한다.(단, 반대의 경우는 복원 규칙에 성립한다.)

ㄴ 리프에서 루트까지 가는 경로에 있는 검은색 노드의 갯수는 같다.
  ㄴ 만약 이때 새로 삽입되는 노드는 리프 노드가 되며 이 노드를 중심으로 양쪽 자식으로 연결 시켜 버린다.(리프 노드)


  ㄴ 레드 블랙 트리는 연산 과정중에 균형 복원을 위해서 회전을 한다(좌/우)

  - 대량의 검색에 특화되어 있다.

  - 맵은 데이터 빈번한 삽입/삭제가 발생한다면 좋은 선택이 아니다.


  - 맵과 유사한 기능을 하는 STL 또한 존재하며 상황에 맞게 어느 컨테이너를 사용할지 고민을 하고 설꼐를 해야 한다.

  
  ▷ STL 맵의 핵심 

  - 1. 키와 값을 잊지 말자
       ㄴ 첫번째 인자: FIRST ->  키
	   ㄴ 두번째 인자: SECOND -> 값

- 2. 추가하는 방법은 insert()를 사용하며 키와 벨류, 두개를 동시에 추가해야 하니 pair 또는 make_pair를 이용한다.

  pair:
  ㄴ 두가지 자료형을 하나로 묶는 구조체
   ㄴ 템플릿 구조체이기 때문에 어떤 자료형이 오더라도 OK

    make_pair:
	ㄴ 말그대로 pair를 만들어 주는 함수
	   ㄴ EX: p.first = x, p.second = y;
	   ㄴ P = make_pair(x,y);










*/
#pragma endregion






class MainGame_21
{

	
private:
	//맵
	map<string, int> _mData;

	// 맵 반복자
	map<string, int>::iterator _miData;
	
	// 멀티 맵
	//multimap<vector<MainGame_21*>, set<vector<float>, list<vector<int>, vector<double> >>> _muData;

	// 튜플
	tuple<int, string, char> _tupleValue;


public:


	std::pair<std::pair<int, int>, std::pair<int, int>> getMinMaxValue(std::vector<int> a_oValueList);

	void printMap(std::map<std::string, int> a_oValueList);




	MainGame_21();
	~MainGame_21() {};

};

