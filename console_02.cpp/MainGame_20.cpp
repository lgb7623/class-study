#include "MainGame_20.h"


// ������
MainGame_20::MainGame_20()
{
	/*
	
	�� STL ���Ϳ��� ���� ����ϴ� ���

	push_back
	�������� �ڿ��� ���� ���� �߰�

	pop_back()
	������ �ڿ������� ���� ����

	size()
	�� ������ ����

	claer() /(���� ���ι�)
	�� �ε��� ���� ����

	begin
	�� ������ 0��° �ε���

	end()
	�� ������ ������ �ε���

	insert(��ġ, ��)
	�� ��ġ�� �� ����

	insert(��ġ, ����, ��)
	�� ��ġ�� ������ŭ �� ����

	erase(��ġ)
	�� �����.

	resize
	�������� �޸� �ٽ� ���	





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

		// ������: ��

	}
	\
	lineprint();


	_vNumbet.push_back(1);
	_vNumbet.pop_back();

	_vNumbet.clear();  // clear erae�� �б����̹Ƿ� ������ �ű�����ϸ�

	_vNumbet.push_back(1);
	_vNumbet.push_back(2);

	_vNumbet.insert(_vNumbet.begin() + 5, 100); // 5�� �Ѿ

	
	for (int i = 0; 1 < _vNumbet.size(); i++)
	{


		_vNumbet.push_back(i + 1);

		cout << _vNumbet[i] << endl;



		// ������: �� 
		// ������ ������ ���� ���

	}

	// ������ :�ֻ� // ������ ������ ����
	// �� �ݺ��ڸ� ���� ��ȸ

	for (_viNumbet = _vNumbet.begin(); _viNumbet != _vNumbet.end(); ++_viNumbet)// ����
	{


		cout << *_viNumbet << endl;  // ���ͷ����ʹ� ����Ʈ �����ͷ� ���� �ϹǷ� ������ �ɾ�ߵ�

	}


	_viNumbet = _vNumbet.begin();
	for (_viNumbet; _viNumbet != _vNumbet.end(); ++_viNumbet) //  ��� ������ ���� ���´� �׷��� ����  ��а��� �ΰ���
	{


		cout << *_viNumbet << endl;  // ���ͷ����ʹ� ����Ʈ �����ͷ� ���� �ϹǷ� ������ �ɾ�ߵ�

	}




*/
}

// �Ҹ���
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



	// 2. insert�� ����ϸ� �ε��� ������ �и���.

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
	�� for each��
	
	
	- �־��� ������ ��� �����͸� �ϳ��� ��ȸ�ϸ� �����ϴ� ��쿡 ����Ѵ�.
	
	
	- for each���� ���� �����̳��� �ݺ��ڿ� ����� �����̴�.
	�� vector�� �����̳� ��Ҵ� �ƴϰ� �˰��� �Լ��� ������ ����
	
	- ��� �����̳ʴ� �ݺ��ڸ� ������ ������ for each�� ����ؼ� �����̳��� 
	���� ������ �����ϴ�.

	-for each�� ���� ������ iterator�� ���������� ����Ʈ �����ͷ� ������ �Ǿ� ������ 
	�����̳ʸ� ��ȸ�ϸ鼭 ���ϴ� ��ҿ� ������ �����ϴ�.
	(����°� �ƴ� �ִٴ°� �����϶�� ��)



	�� auto Ű����

	- �����Ϸ��� �����Ͻ� �ڵ����� �ڷ����� �߷��Ѵ�.
     �� ��, �����Ϸ��� �ڷ����� �߷��ϱ� ���ؼ��� ������� ������ �ݵ�� �־����� �Ѵ�.





	


	for (_viNumbet = _vNumbet.begin(); _viNumbet != _vNumbet.end(); ++_viNumbet)// ����
	{


		cout << *_viNumbet << endl;  // ���ͷ����ʹ� ����Ʈ �����ͷ� ���� �ϹǷ� ������ �ɾ�ߵ�

	}


	// ����
	// �� ����ȭ �ܿ� ���� x
	for each (auto p in _vNumbet)
	{
		cout << p << endl;
	}



	-c / c++ ���� �⺻������ Ÿ�Կ� �ſ� ������ ���
	�� �⺻������ ������ ������ ���� �ش� ������ �ڷ����� ����ؾ� �Ѵ�.
	
	-��, auto Ű���带 �̿��ϸ� ������ �ڷ����� ������� �ʴ��� �����Ϸ��� ���ؼ�
	�ڵ������� ������ �ڷ����� �����ȴ�.

	- auto Ű���忡 ���� �ڷ����� �����Ǵ� ������ ������ �Ҵ�Ǵ� �ʱⰪ�� ������ �Ǵ��ϱ� ������
	auto�� ���� ���� ������ �ݵ�� Ư�� ���� �Ҵ��ؾ� �Ѵ�.
	(����� �˷��ذ�x �����϶�� �˷��ذ�)
	
	*/
	// 4. erase


	cout<< "erase" << endl;
	// erase(�ε���)
	// erase(���� -> ��)




	//_vNumbet.erase(_vNumbet.begin() + 1);
	
	//_vNumbet.erase(_vNumbet.begin(), _vNumbet.begin() + 3);
	

	//for (int i = 0; i < _vNumbet.size(); i++)
	{


	//	cout << _vNumbet[i] << endl;
	}

	lineprint();
	
	//5.reverse
	for (_vriNumbet = _vNumbet.rbegin(); _vriNumbet != _vNumbet.rend(); ++_viNumbet)// �Ųٷ�
	{


		cout << *_vriNumbet << endl;  // 

	}


	// 6. at

// �� _vNumbet .at (index) == _vnumbet[index] �� �����ϴ�
	// �� ���� ��ġ�� ���Ҹ� �����ϴ� �� �������̽�

	cout << _vNumbet.at(4) << endl;
	cout << _vNumbet[4] << endl;
	//������[] -> ���� ������ ���� �ʱ� ������ �ӵ��鿡�� ����
	//at-> ���������� �Ѵ�. -> �ӵ��鿡�� �Ҹ��ϴ� (�������� �Ǽ��� ���ϼ� �ִ�) -> ������ �Ǽ� ����
    //�� ���۷����� ���� ���ΰ� �ٸ�(������ �����ε�)
	


	// 7. fornt: ù��° ���� ����

	cout << "front" << endl;
	cout << _vNumbet.front() << endl;

	// ������ص���� ã�Ƽ� ���ƾߵ����� ����Ʈ�� �տ��� Ȯ���ؼ� �˷���

	// 8. back: ������ ���� ����

	cout << "back" << endl;
	cout << _vNumbet.back() << endl;

 
	
	lineprint();

// 9. size: ���� ������ ������ Ȯ��
	cout << "size" << endl;
	cout << _vNumbet.size() << endl;

// 10/. clear
	cout << "clear" << endl;
	cout << "�� ������" << endl;
	_vNumbet.clear();


		lineprint();

	//1. empty: ��������� t // �ϳ��̻� �ִ� ��� f


		if (_vNumbet.empty())
		{
			
			cout << "��� �ִ�" << endl;
		
			return;
		}


		lineprint();

		cout << _vNumbet.at(2) << endl;

		lineprint();


}




void MainGame_20::sampleVector(std::vector<int> ValueList) // ��Ʈ�� ������ ����
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

void MainGame_20::sampleSTVector(std::vector<STDate> ValueList) // ������ ������ ����(char, float)
{

	for (int i = 0; i < ValueList.size(); ++i)

	{

		printf("%d ��° ����ü ������: %d,%s\n", i + 1,

			ValueList[i].m_nValue, ValueList[i].m_ostring.c_str());

	}




	for (STDate stDate : ValueList) // �����̳� ���, ������ �������(2015 ���� ����) // Value LIST �� ��

	{

		printf("����ü ������: %d, %s\n", stDate.m_nValue, stDate.m_ostring.c_str());


		for (auto oIterator = ValueList.begin();
			oIterator != ValueList.end(); ++oIterator)
		{

			int nIndex = oIterator - ValueList.begin();

			printf("%d ��° ����ü ������:  %d, %s\n", nIndex + 1,
				oIterator->m_nValue, oIterator->m_ostring.c_str());



		}

	}

	/*
	
	c != c++

	-printf �Լ��� ���Ĺ��ڴ� c��� ��Ÿ���� ���ڿ��� ��ü�ϴ� ����� �ϱ� ������ �Ϲ����� ������δ� c++����� ���ڿ��� ǥ���ϴ°��� �Ұ����ϴ�.

	- �׷��� ������ c++ ����� ���ڿ��� c_str() �Լ��� ���ؼ� c��� ��Ÿ���� ���ڿ��� ǥ���ϴ°��� �����ϴ�.(��, �ش� ����� �����Ѵٴ°� �ǹ��Ѵ�.)
	*/





}

void MainGame_20::practiceVector(void) // ���Ϳ� �ݺ����� �̿��Ͽ� ���
{
	
	
	

	vector<int> ValueListA;
	vector<STDate> ValueListB;

	for (int i = 0; i < 10; ++i)
	{


		ValueListA.push_back(i + 1);


	}

	// to_string(): Ư�� �ڷ����� ������� ���ڿ��� ��ȯ ��Ű�� ���
	// EX: \
	// std:: to_string(10)    10
	// std:: to_string(3.14f) 3.14
	// ���ڿ� ��ȯ�Լ�



	for (int i = 0; i < 10; ++i)
	{


		STDate stDate;
		stDate.m_nValue = i + 1;
		stDate.m_ostring = std::to_string(i + 0.5f);
		ValueListB.push_back(stDate);
	

	}



	printf("=========== int ����============");
	sampleVector(ValueListA);

		lineprint();


		printf("=========== STData ����============");

		sampleSTVector(ValueListB);


		int nNumstring = 0;

		std::vector<std::string> oStringList;

		printf("�����Է�: ");
		scanf(("%d"), &nNumstring);

			printf("\n ======���ڿ� ��� ====\n");

				for (int i = 0; i < nNumstring; ++i)
				{


					char szString[MAX_PATH] = ""; // 260 ��ũ�� �����쿡 ����

					printf("&d ��° ���ڿ� �Է�: ",i + 1);
					scanf("&s",szString);

					oStringList.push_back(szString);

				}

				cout << "========���ڿ� ���====" << endl;

				for (auto oIterator = oStringList.begin();
					oIterator != oStringList.end(); ++oIterator)
				{

					int nIndex = oIterator - oStringList.begin();
					printf("&d ��° ���ڿ� ���: s%\n",nIndex+1, oIterator->c_str());

				}
}



	


/*











*/