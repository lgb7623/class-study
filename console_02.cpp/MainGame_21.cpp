#include "MainGame_21.h"


// 생성자
MainGame_21::MainGame_21()
{

	srand(time(NULL));
	/*
	
	▶ STL 맵에서 자주 사용하는 기능

	- STL에서는 컴테이너에 따라 약간의 기능적 차이가 있을 뿐 
	동일안 이름의 멤버 함수를 다수 지원한다.

	begin()
	ㄴ 맵의 0번째 인덱스

	end()
	ㄴ 맵의 마지막 인덱스

	clear()
	ㄴ 전부 삭제

	empty()
	ㄴ 비어 있으면 트루 / 하나 이상 있을경우 펄스

	erase()
	ㄴ 인자로 들어간 인덱스 지운다.

	insert(위치, 값)
	ㄴ 위치에 값을 넣는다.

	size
	ㄴ 맵의 갯수
	
	★ 맵의 핵심 
     find(인자)
	 ㄴ 인자로 들어간 값을 찾는다.
	
	




	*/
	// 페어를 통해 넣기
	//_mData.insert(pair<string, int>("프로그래밍", 50));
	//_mData.insert(pair<string, int>("공부가", 50));
	//_mData.insert(pair<string, int>("제일", 50));
	//_mData.insert(pair<string, int>("쉽다", 50));

	// 메이크 페어를 통해넣기
	_mData.insert(make_pair("이름A", 10));
	_mData.insert(make_pair("이름B", 20));
	_mData.insert(make_pair("이름C", 30));
	_mData.insert(make_pair("이름D", 40));
	_mData.insert(make_pair("이름E", 50));
	_mData.insert(make_pair("이름F", 60));
	
	//3. 야생의 방법
	pair<string, int> pr1("이름G", 100);
	_mData.insert(pr1);




	if (_mData["재능칠드런"]) // 실제로는 대괄호 쓰면 안됨
	{


		cout << "있다" << endl;

	}
	else
	{
		cout << "없다" << endl;
	}

    if (_mData.find("KGA") != _mData.end())
	{
		cout << "있다" << endl;

  }
	else
	{
	cout << "없다" << endl;
	}


	_mData.erase("이름C");

	for (_miData = _mData.begin(); _miData != _mData.end(); ++_miData)

		cout << _miData->first << "." << _miData->second << endl;
	cout << endl;



	// 찾는 사람이 있으면 출력후 -> 지운다
	// 찾는 사람이 없으면 출력후 -> 추가한다.
	// 3. 0번을 누루면 무작위 사람에 데한 데이터를 10개씩 추가한다.


	string name;
	string plus;

	plus = "무작위는 몰르겠다";

	cout << "누구를 찾고 계신지..? " << endl;

	while (cin >> name)
	{
		
	 
		if (_mData.find(name) != _mData.end())
		{
			cout << "의 나이는" << "[" << _mData[name] << "]" << endl;

			_mData.erase(name);

			
		}

		else if (name == "0")
		{
			for (int i = 0; i < 10; i++)


				_mData.insert(make_pair(plus += rand() % 100  , rand() % 100));

			
		}  


		else
		{
			cout << "그런사람은 없는데?" << endl;

			_mData.insert(make_pair(name, rand() % 100 + 1));

			
		}

	}
	

}

// 찾는 사람이 있으면 출력후 -> 지운다
 // 찾는 사람이 없으면 출력후 -> 추가한다.









std::pair<std::pair<int, int>, std::pair<int, int>> MainGame_21::getMinMaxValue(std::vector<int> a_oValueList)
{
	return std::pair<std::pair<int, int>, std::pair<int, int>>();
}

void MainGame_21::printMap(std::map<std::string, int> a_oValueList)
{
}

