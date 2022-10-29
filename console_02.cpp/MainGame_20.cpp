#include "MainGame_20.h"


// 생성자
MainGame_20::MainGame_20()
{
	/*
	
	▶ STL 벡터에서 자주 사용하는 기능

	push_back
	ㄴ데이터 뒤에서 부터 값을 추가

	pop_back()
	데이터 뒤에서부터 값을 삭제

	size()
	ㄴ 벡터의 갯수

	claer() /(방을 전부밈)
	ㄴ 인덱스 전부 삭제

	begin
	ㄴ 벡터의 0번째 인덱스

	end()
	ㄴ 벡터의 마지막 인뎃스

	insert(위치, 값)
	ㄴ 위치에 값 삽입

	insert(위치, 갯수, 값)
	ㄴ 위치에 갯수만큼 값 삽입

	erase(위치)
	ㄴ 지운다.

	resize
	ㄴ벡터의 메모리 다시 계산	





	_vNumbet.push_back(1);
	_vNumbet.push_back(1);
	cout << _vNumbet[0] << endl;
	cout << _vNumbet[1] << endl;

	lineprint();


	_vNumbet.pop_back();
	_vNumbet.pop_back();

	lineprint();

	int num[2];
	num[0] = 1;
	num[1] = 2;
	cout << num[0] << endl;
	cout << num[1] << endl;

	lineprint();


	for (int i = 0; 1 < 10; i++)
	{


		_vNumbet.push_back(i + 1);

		cout << _vNumbet[i] << endl;

		// 안전도: 중

	}
	\
	lineprint();


	_vNumbet.push_back(1);
	_vNumbet.pop_back();

	_vNumbet.clear();  // clear erae가 분기점이므로 집중은 거기부터하면

	_vNumbet.push_back(1);
	_vNumbet.push_back(2);

	_vNumbet.insert(_vNumbet.begin() + 5, 100); // 5면 넘어감

	
	for (int i = 0; 1 < _vNumbet.size(); i++)
	{


		_vNumbet.push_back(i + 1);

		cout << _vNumbet[i] << endl;



		// 안전도: 상 
		// ㄴ직접 참조를 통한 출력

	}

	// 안전도 :최상 // 오류날 여지가 없음
	// ㄴ 반복자를 통한 순회

	for (_viNumbet = _vNumbet.begin(); _viNumbet != _vNumbet.end(); ++_viNumbet)// 정석
	{


		cout << *_viNumbet << endl;  // 이터레이터는 스마트 포인터로 접근 하므로 참조를 걸어야됨

	}


	_viNumbet = _vNumbet.begin();
	for (_viNumbet; _viNumbet != _vNumbet.end(); ++_viNumbet) //  길면 옆으로 삐져 나온다 그래서 길경우  당분간은 두가지
	{


		cout << *_viNumbet << endl;  // 이터레이터는 스마트 포인터로 접근 하므로 참조를 걸어야됨

	}




*/
}

// 소멸자
MainGame_20::~MainGame_20()
{

}

void MainGame_20::privtVetor()
{

	lineprint();
	lineprint();
	lineprint();


	cout << "push.back()" << endl;

	_vNumbet.push_back(1);
	_vNumbet.push_back(2);
	_vNumbet.push_back(3);
	_vNumbet.push_back(4);
	_vNumbet.push_back(5);

	for (size_t i = 0; i < _vNumbet.size(); i++)
	{

		
		cout << _vNumbet[i] << endl;

	}

	lineprint();



	// 2. insert를 사용하면 인덱스 값들이 밀린다.

	cout << "insert" << endl;

	_vNumbet.insert(_vNumbet.begin() +2,10);


	for (size_t i = 0; i < _vNumbet.size(); i++)
	{

		cout << _vNumbet[i] << endl;


	}

	// 3. pop_back();
	
	cout << "pop_back()" << endl;

	_vNumbet.pop_back();

	for(int i = 0; i <  _vNumbet.size(); i++)
	{
	//_vNumbet.pop_back();
	cout << _vNumbet[i] << endl;
	}



	/*
	▶ for each문
	
	
	- 주어진 범위의 모든 데이터를 하나씩 순회하며 동작하는 경우에 사용한다.
	
	
	- for each같은 경우는 컨테이너의 반복자와 비슷한 개념이다.
	ㄴ vector의 컨테이너 요소는 아니고 알고리즘 함수로 구현된 문법
	
	- 모든 컨테이너는 반복자를 가지고 있으며 for each를 사용해서 컨테이너의 
	원소 접근이 가능하다.

	-for each의 내부 구조는 iterator와 마찬가지로 스마트 포인터로 구현이 되어 잇으며 
	컨테이너를 순회하면서 원하는 요소에 접근이 가능하다.
	(쓰라는게 아님 있다는걸 인지하라는 뜻)



	▶ auto 키워드

	- 컴파일러가 컴파일시 자동으로 자료형을 추론한다.
     ㄴ 단, 컴파일러가 자료형을 추론하기 위해서는 명시적인 조건이 반드시 주어져야 한다.





	


	for (_viNumbet = _vNumbet.begin(); _viNumbet != _vNumbet.end(); ++_viNumbet)// 정석
	{


		cout << *_viNumbet << endl;  // 이터레이터는 스마트 포인터로 접근 하므로 참조를 걸어야됨

	}


	// 봉인
	// ㄴ 간소화 외에 단점 x
	for each (auto p in _vNumbet)
	{
		cout << p << endl;
	}



	-c / c++ 언어는 기본적으로 타입에 매우 엄격한 언어
	ㄴ 기본적으로 변수를 선언할 때는 해당 변수의 자료형을 명시해야 한다.
	
	-단, auto 키워드를 이용하면 변수의 자료형을 명시하지 않더라도 컴파일러에 의해서
	자동적으로 변수의 자료형이 결정된다.

	- auto 키워드에 의한 자료형이 결정되는 시점은 변수에 할당되는 초기값을 가지고 판단하기 빼문에
	auto를 통한 변수 선언은 반드시 특정 값을 할당해야 한다.
	(쓰라고 알려준거x 인지하라고 알려준것)
	
	*/
	// 4. erase


	cout<< "erase" << endl;
	// erase(인덱스)
	// erase(시작 -> 끝)




	//_vNumbet.erase(_vNumbet.begin() + 1);
	
	//_vNumbet.erase(_vNumbet.begin(), _vNumbet.begin() + 3);
	

	//for (int i = 0; i < _vNumbet.size(); i++)
	{


	//	cout << _vNumbet[i] << endl;
	}

	lineprint();
	
	//5.reverse
	for (_vriNumbet = _vNumbet.rbegin(); _vriNumbet != _vNumbet.rend(); ++_viNumbet)// 거꾸로
	{


		cout << *_vriNumbet << endl;  // 

	}


	// 6. at

// ㄴ _vNumbet .at (index) == _vnumbet[index] 는 동일하다
	// ㄴ 임의 위치의 원소를 참조하는 두 인터페이스

	cout << _vNumbet.at(4) << endl;
	cout << _vNumbet[4] << endl;
	//차이점[] -> 범위 점검을 하지 않기 때문에 속도면에서 유리
	//at-> 범위점검을 한다. -> 속도면에서 불리하다 (개발자의 실수를 줄일수 있다) -> 개발자 실수 배제
    //ㄴ 오퍼레이터 연산 여부가 다름(연산자 오버로딩)
	


	// 7. fornt: 첫번째 원소 참조

	cout << "front" << endl;
	cout << _vNumbet.front() << endl;

	// 비긴은앤드까지 찾아서 돌아야되지만 프론트는 앞에만 확인해서 알려줌

	// 8. back: 마지막 원소 참조

	cout << "back" << endl;
	cout << _vNumbet.back() << endl;

 
	
	lineprint();

// 9. size: 현재 벡터의 사이즈 확인
	cout << "size" << endl;
	cout << _vNumbet.size() << endl;

// 10/. clear
	cout << "clear" << endl;
	cout << "다 날리자" << endl;
	_vNumbet.clear();


		lineprint();

	//1. empty: 비어있으면 t // 하나이상 있는 경우 f


		if (_vNumbet.empty())
		{
			
			cout << "비어 있다" << endl;
		
			return;
		}


		lineprint();

		cout << _vNumbet.at(2) << endl;

		lineprint();


}




void MainGame_20::sampleVector(std::vector<int> ValueList) // 인트형 데이터 저장
{
	
	
	
	for (int i = 0; i <  ValueList.size(); ++i)
	{


		printf("%d,", ValueList[i]);

	}

	for (auto oIterator = ValueList.begin();
		oIterator != ValueList.end(); ++oIterator)
	{

		printf("%d ", *oIterator);

	}
	

}

void MainGame_20::sampleSTVector(std::vector<STDate> ValueList) // 나머지 데이터 저장(char, float)
{

	for (int i = 0; i < ValueList.size(); ++i)

	{

		printf("%d 번째 구조체 데이터: %d,%s\n", i + 1,

			ValueList[i].m_nValue, ValueList[i].m_ostring.c_str());

	}




	for (STDate stDate : ValueList) // 컨테이너 기반, 레인지 기반포문(2015 부터 지원) // Value LIST 를 돔

	{

		printf("구조체 데이터: %d, %s\n", stDate.m_nValue, stDate.m_ostring.c_str());


		for (auto oIterator = ValueList.begin();
			oIterator != ValueList.end(); ++oIterator)
		{

			int nIndex = oIterator - ValueList.begin();

			printf("%d 번째 구조체 데이터:  %d, %s\n", nIndex + 1,
				oIterator->m_nValue, oIterator->m_ostring.c_str());



		}

	}

	/*
	
	c != c++

	-printf 함수의 서식문자는 c언어 스타일의 문자열을 대체하는 기능을 하기 때문에 일반적인 방법으로는 c++언어의 문자열을 표현하는것이 불가능하다.

	- 그렇기 때문에 c++ 언어의 문자열은 c_str() 함수를 통해서 c언어 스타일의 문자열을 표현하는것이 가능하다.(즉, 해당 기능을 제공한다는걸 의미한다.)
	*/





}

void MainGame_20::practiceVector(void) // 벡터와 반복문을 이용하여 출력
{
	
	
	

	vector<int> ValueListA;
	vector<STDate> ValueListB;

	for (int i = 0; i < 10; ++i)
	{


		ValueListA.push_back(i + 1);


	}

	// to_string(): 특정 자료형을 기반으로 문자열을 반환 시키는 기능
	// EX: \
	// std:: to_string(10)    10
	// std:: to_string(3.14f) 3.14
	// 문자열 반환함수



	for (int i = 0; i < 10; ++i)
	{


		STDate stDate;
		stDate.m_nValue = i + 1;
		stDate.m_ostring = std::to_string(i + 0.5f);
		ValueListB.push_back(stDate);
	

	}



	printf("=========== int 벡터============");
	sampleVector(ValueListA);

		lineprint();


		printf("=========== STData 벡터============");

		sampleSTVector(ValueListB);


		int nNumstring = 0;

		std::vector<std::string> oStringList;

		printf("정수입력: ");
		scanf(("%d"), &nNumstring);

			printf("\n ======문자열 출력 ====\n");

				for (int i = 0; i < nNumstring; ++i)
				{


					char szString[MAX_PATH] = ""; // 260 매크로 윈도우에 정의

					printf("&d 번째 문자열 입력: ",i + 1);
					scanf("&s",szString);

					oStringList.push_back(szString);

				}

				cout << "========문자열 출력====" << endl;

				for (auto oIterator = oStringList.begin();
					oIterator != oStringList.end(); ++oIterator)
				{

					int nIndex = oIterator - oStringList.begin();
					printf("&d 번째 문자열 출력: s%\n",nIndex+1, oIterator->c_str());

				}
}



	


/*











*/