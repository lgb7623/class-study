#pragma once
#include<iostream>

using namespace std;




#pragma region 
/*

▶ 템플릿이란?

- 클래스 또는 함수를 선언할때 데이터의 타입을 명시하지 않고 클래스 또는 함수를 정의 할 수 있는 기능을 의미한다.

- 템플릿을 이용하면 특정 타입에 종속되지 않는 로직을 작성하는 것이 가능하다.

 ▷ 템플릿 요약
 
 - 컴파일러가 미리 등록된 함수의 틀을 기억해 두었다가 함수가 호출될때 실제 함수를 만드는 장치

 - 템플릿: 여러가지 함수, 클래스를 찍어내는 틀
    ㄴ 템플릿의 종류는 클래스 템플릿, 함수 템플릿이 있다.

 1. 함수 템플릿 : 함수위에 템플릿 선언
  ㄴ 함수 템플릿은 함수마다 선언을 해줘야 한다.

  EX: 함수 템플릿
  
  template: 함수 템플릿 정의, <typename T> 함수 본체에서 사용할 이름
  trmplate <typename T> T functin()
  {
      T........;

  
  }


  2. 클래스 템플릿 

  - 클래스 템플릿은 클래스에 선언이 되는 템플릿이며 Type선언의 class를 명시해야 한다.

  EX: 클래스 템플릿
  template<class T1>
  template<tmplate<typename, typename> class container>


  ▷ 템프릿의 특징

  - 템플릿만 정의하고 함수를 호출하지 않으면 아무런 일도 일어나지 않으며 템플릿 자체는 메모리를 소모하지 않는다.


  - 호출에 의해 템플릿이 구체화되어 실제 함수가 될때만 프로그램의 크기가  늘어난다.

  - 템플릿은 일반적으로 헤더 파일 구현을 원칙으로 한다.

  ▷ 헤더 파일에 함ㅅ를 직접 구현하는 경우

  1. 캡슐화 (접근자, 설정자)
  ㄴ c++은 객체지향 언어 -> 캡슐화는  oop 특징중 하나
  -> 상속, 캡슐화 다형성 등등 많이 있다.


  2. 템플릿 

  - h 와 .cpp로 구분지어 코드를 구현할 수 잇지만 일반적으로는 헤더 파일 구현을 원칙으로 한다.
  (헤더파일 구현 원칙이 깨졌다면 .cpp 파일 구현을 원칙으로 한다.


  - 컴파일 순서에 의한 처리가 필요하기 때문에

  - 헤더파일 구현 원칙을 지키지 않으면 대개 에러가 생긴다.

  3. 인라인


  - 무거운 함수 구조나 연산이 많은 로직이 구현된 함수는 시간의 문제 일뿐 언젠가는 스택 오버 플로가 발생한다.
      ㄴ 함수를 인라인화 시킴으로 실행속도 향상을 얻을 수 있다.

  - 함수를 호출하면 스택의 할당과 반환이라는 과정이 발생하는데 인라인화 된 함수는 이러한 과정을 거치지 않는다.

  ▶ inline 키워드 적용의 좋은 사례

  1. 간결한 코드에 적용하면 좋다.
   ㄴ 인라인 이라는 키워드는 어디까지나 컴파일러에게 명시적으로 알려주는 키워드일뿐
   컴파일러 인라인화 시킬것인지/ 아닐지는 결국 컴파일러 마음
    ㄴ 반대로 인라인 키워드를 붙이지 않아도 컴파일러에 의해서 인라인화 되는 경우도 있다.


    2. 인라인화가 왜 필요한지에 대해서 알려면 매크로의 장점과 단점에 대해 알고 있으면 좋다.
    ㄴ 매크로 함수는 자료형에 독립적이다.
     ㄴ EX: #define add(x) ((x) * (x)) -> x로 올 수 있는 자료형은 자유롭다.


     - 인라인으로 선언된 함수를 위의 형태로 정의하려면 각 자료형마다 함수 오버로딩을 해줘야 한다.(즉 매크로 함수와 달리 함수는 자료형에 독립적이지 못하다.)

     ★ 이러한 인라인 함수를 자료형에 독립적으로 선언할 수 있게 만드는 키워드가 바로 템플릿

     ※ 처리 단계
     1. 소스 파일 병합
     2. 선행 처리기
     3. ★전처리기
     4. ★컴파일(컴파일러)
     5. 오브젝트 파일 분할

     --------------컴파일 과정 끝! ------------------------

     6. ★시동 코드와 표준 라이브러리 파일 병합
     7. ★링커에 의한 obj 파일들 링크
     8. 실행








*/



#pragma endregion





class MainGame_22
{

private:
    int m_nNumber;
    int _numberCount;
    int _NumberCount;

public:
    // 1.일반 함수
    void outPutValue();
    void outPutValue(int num);


    // 2. 함수 템플릿
    template <typename T> void outPutFunc(T num);
    template <typename T1, typename T2> void outPutFunc(T1 numL, T2 numR);
    template <typename T3> T3 maxFunc(T3 numL, T3 numR);
    template <typename T4> T4 addFunc(T4 numL, T4 numR);
    template <typename T5> T5 riskFunc(T5 numL, T5 numR);

    template <typename T6> T6 minus(T6 numL, T6 numR);






	MainGame_22();
	~MainGame_22();
};


template<typename T6>
T6 MainGame_22::minus(T6 numL, T6 numR)
{
    cout << "T6 함수" << endl;

    return numL - numR;
}


namespace EXAMPLE_1
{



    void Example();
}

