#include "MainGame_22.h"


// 생성자
MainGame_22::MainGame_22()
{

    //
    outPutValue();

    cout << endl;

    //
    outPutValue(50);

    cout << endl;

    //
    outPutFunc("템플릿 프로세스");

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

   
    // 템플릿을 사용할때는 주의점이 있다.
    /*
    cout << riskFunc(2.932323. 2.3f) << endl; // 문법 오류

    cout << addFunc("이게", "바로 템플릿") << endl; // 논리오류

    */

    // 실습
    /*
    
    
    - 두 수를 빼는 함수를 만든다.
     ㄴ 1. 템플릿 구현을 원칙으로 
      ㄴ 2. 생성자에서 호출 불가
       ㄴ  3. main 함수 호출 
    
    */


}




// 소멸자
MainGame_22::~MainGame_22()
{

}



void MainGame_22::outPutValue()
{


    cout << "이제 일반 함수 사용은 어렵지 않다." << endl;


}

void MainGame_22::outPutValue(int num)
{


    cout << "값" << num << endl;

}



// 함수 몸통에도 템플릿 함수임을 명시해야 한다.
// 템플릿이 간단해야 하는 이유 1. 인라인화를 위해 2. 가독성(명시적이지 않으면 개발속도 저하됨) 1,2가 만나면 개발기간 올라가며 유지보수 힘들어짐 디자인페턴을 쓸수가 없음

template<typename T>
inline void MainGame_22::outPutFunc(T num)
{

    cout << "T 함수:" << endl;
    cout << num << endl;

}

template<typename T1, typename T2>
inline void MainGame_22::outPutFunc(T1 numL, T2 numR)
{

    cout << "T1/T2 함수:" << endl;
    cout << numL << "," << numR  << endl;
}

template<typename T3>
inline T3 MainGame_22::maxFunc(T3 numL, T3 numR)
{

    cout << "T3 함수:" << endl;
    
    return (numL >numR) ? numL : numR;
}

template<typename T4>
inline T4 MainGame_22::addFunc(T4 numL, T4 numR)
{
    cout << "T4 함수:" << endl;

    return numL + numR;
}

template<typename T5>
inline T5 MainGame_22::riskFunc(T5 numL, T5 numR)
{
    cout << "T5 함수:" << endl;

    return numL + numR
}




namespace EXAMPLE_1
{
    
    void Example()
    {
    }
}

