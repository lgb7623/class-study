#include "MainGame_16.h"














MainGame_16::MainGame_16() //: //_x(o)(멤버 이니셜라이저)
{
	_Nuber = 500;	
	cout << "당분간은 여기서 코딩을 해볼까?" << endl;

	/*
	c++ 언어는 생성자에 한해서 멤버 변수를 초기화하는 멤버 이니셜라이저 라는 기능을 제공한다
	ㄴ c++ 언어의 멤버 이니셜 라이저가 필요한 순간
	  ㄴ 1. 객체의 멤버 변수로 심볼릭 상수를 지니고 있을 경우
	  ㄴ 2. 상속 관계에서 부모 클래스의 생성자 호출이 필요한 경우
	
	
	*/
	


}


MainGame_16::~MainGame_16()
{
	// do not
}




void MainGame_16::outPut() // 어디에 멤버인지 써줘야됨
{
	cout << _Nuber << endl;
}
void MainGame_16::showposition(void)
{
	cout << "x:" << _x << ",y:" << _y << endl;
}

void MainGame_16::moveposition(void)
{
	_x += 100;
	_y += 100;
}
void MainGame_16::setposition(int x, int y)
{
	// 클래스를 사용할때는 아래의 코드 방식을 주의해야 한다.
	/*
	
	- this 포인터
	 ㄴ 자기자신을 가리키는 포인터

	 - 모든 클래스의 멤버함수는 자기 자신을 지칭하는 this 키워드를 이용하는것이 가능하다
	 ㄴ this 키워드를 활용하면 이름 중복에 의해서 발생하는 우선순위에 대한 모호함을 없애는것이 
	 가능하다.
	*/
	this->_x = x;
	this->_y = y;

	_x = x;
	_y = y;
}