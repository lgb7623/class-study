#include "MainGame_16.h"




void main()
{
	/*
	- 선언문에 의해 생성된 클래스형의 변수를 인스턴스라고 부른다.
	- 클래스는 어디까지나 타입일 뿐이지 그자체가 정보를 저장하는 변수는 아니다.
	- 구조체를 선언한다고 해서 구조체 변수가 생기는 것이 아닌 것처럼
	클래스를 선언한다고해서 실제로 값을 기억할 수 있는 메모리가 할당되지 않는다.
	*/
	//MainGame_16* mg; (정적)
	//mg.outPut();//
	MainGame_16* mg = new MainGame_16; 
	// 
	mg->showposition();
	
	mg->setposition(100, 100);
    mg->showposition();
	mg->moveposition();
	mg->moveposition();
	mg->moveposition();
	mg->showposition();
		// (동적)(메모리에 구현 되는 순간 자동으로 생성자 호출 (mollc는 x)
}



#define MAX_ITEM 100


enum  EItem
{

	/*
	아이템리스트
	
	



	
	*/



};

struct  tahPlayer
{/*



 플레이어 스테이더스
ㅍ

 */
};

/*
class PlayerInfo;
	{


	private:
		int x, y;
		int hp;
		int shiedl;
		int level;
		double exp;
		EItem items[MAX_ITEM];

	public:
		
		void walk();
		void jump(short height);
		void trun(int direction);
		void defene();
		bool attack(int what);
		bool hrut();
		bool die;



	};
	*/
