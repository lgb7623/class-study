#include "MainGame_16.h"




void main()
{
	/*
	- ���𹮿� ���� ������ Ŭ�������� ������ �ν��Ͻ���� �θ���.
	- Ŭ������ �������� Ÿ���� ������ ����ü�� ������ �����ϴ� ������ �ƴϴ�.
	- ����ü�� �����Ѵٰ� �ؼ� ����ü ������ ����� ���� �ƴ� ��ó��
	Ŭ������ �����Ѵٰ��ؼ� ������ ���� ����� �� �ִ� �޸𸮰� �Ҵ���� �ʴ´�.
	*/
	//MainGame_16* mg; (����)
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
		// (����)(�޸𸮿� ���� �Ǵ� ���� �ڵ����� ������ ȣ�� (mollc�� x)
}



#define MAX_ITEM 100


enum  EItem
{

	/*
	�����۸���Ʈ
	
	



	
	*/



};

struct  tahPlayer
{/*



 �÷��̾� �����̴���
��

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
