#include <iostream>

class MyClass
{
private:
	int mValue1;
	int mValue2;

public:
	MyClass() : mValue1{0}, mValue2{0}	// 상수변수와 동일하게 
	{									// 상수 인스턴스도 초기화를 해야한다.

	// 대리 생성자를 사용한다면 밑의 매개변수가 있는 생성자를 이용해
	// MyClass() : MyClass(0, 0)로 이용할 수 있다
	}

	MyClass(int value1, int value2) : mValue1{value1}, mValue2{value2}
	{

	}

	void DoSomething1()
	{
		mValue1 = 0;
	}

	void DoSomething2()
	{

	}

	void DoSomething3() const
	{
		
	}
};

int main()
{
	const MyClass c1;		// 상수 인스턴스화
	
	const MyClass c2(2, 2);

	// c1.DoSomething1();		// 안된다! 왜 그럴까?
	// c2.DoSomething2(); 같이 객체 내용을 안바꾸는 함수도 작동이 안된다.

	// 함수의 변경 자체를 근본적으로 막기 위해 
	// 컴파일러가 상수 인스턴스의 수정, 작동을 막는다.



	// 그러면 어떻게?  =  상수 멤버 함수를 사용한다!

	c1.DoSomething3();

	// 일반 인스턴스 = 일반 멤버함수, 상수 멤버함수 둘다 사용가능
	// 상수 인스턴스 = 오로지 상수 멤버함수만 사용가능
}