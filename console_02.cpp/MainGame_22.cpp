#include "MainGame_22.h"


// ������
MainGame_22::MainGame_22()
{

    //
    outPutValue();

    cout << endl;

    //
    outPutValue(50);

    cout << endl;

    //
    outPutFunc("���ø� ���μ���");

    cout << endl;

    //
    outPutFunc(2.5, 3.99);

    cout << endl;

    //
    cout << maxFunc(2.44, 5.55) << endl;

    cout << endl;

    //
    cout << addFunc(4, 56) << endl;

    cout << endl;
    //
    cout << addFunc(3.14, 56.86) << endl;

    cout << endl;

   
    // ���ø��� ����Ҷ��� �������� �ִ�.
    /*
    cout << riskFunc(2.932323. 2.3f) << endl; // ���� ����

    cout << addFunc("�̰�", "�ٷ� ���ø�") << endl; // ������

    */

    // �ǽ�
    /*
    
    
    - �� ���� ���� �Լ��� �����.
     �� 1. ���ø� ������ ��Ģ���� 
      �� 2. �����ڿ��� ȣ�� �Ұ�
       ��  3. main �Լ� ȣ�� 
    
    */


}




// �Ҹ���
MainGame_22::~MainGame_22()
{

}



void MainGame_22::outPutValue()
{


    cout << "���� �Ϲ� �Լ� ����� ����� �ʴ�." << endl;


}

void MainGame_22::outPutValue(int num)
{


    cout << "��" << num << endl;

}



// �Լ� ���뿡�� ���ø� �Լ����� ����ؾ� �Ѵ�.
// ���ø��� �����ؾ� �ϴ� ���� 1. �ζ���ȭ�� ���� 2. ������(��������� ������ ���߼ӵ� ���ϵ�) 1,2�� ������ ���߱Ⱓ �ö󰡸� �������� ������� ������������ ������ ����

template<typename T>
inline void MainGame_22::outPutFunc(T num)
{

    cout << "T �Լ�:" << endl;
    cout << num << endl;

}

template<typename T1, typename T2>
inline void MainGame_22::outPutFunc(T1 numL, T2 numR)
{

    cout << "T1/T2 �Լ�:" << endl;
    cout << numL << "," << numR  << endl;
}

template<typename T3>
inline T3 MainGame_22::maxFunc(T3 numL, T3 numR)
{

    cout << "T3 �Լ�:" << endl;
    
    return (numL >numR) ? numL : numR;
}

template<typename T4>
inline T4 MainGame_22::addFunc(T4 numL, T4 numR)
{
    cout << "T4 �Լ�:" << endl;

    return numL + numR;
}

template<typename T5>
inline T5 MainGame_22::riskFunc(T5 numL, T5 numR)
{
    cout << "T5 �Լ�:" << endl;

    return numL + numR
}




namespace EXAMPLE_1
{
    
    void Example()
    {
    }
}

