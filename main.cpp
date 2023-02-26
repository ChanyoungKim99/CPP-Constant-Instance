#include <iostream>

class MyClass
{
private:
	int mValue1;
	int mValue2;

public:
	MyClass() : mValue1{0}, mValue2{0}	// ��������� �����ϰ� 
	{									// ��� �ν��Ͻ��� �ʱ�ȭ�� �ؾ��Ѵ�.

	// �븮 �����ڸ� ����Ѵٸ� ���� �Ű������� �ִ� �����ڸ� �̿���
	// MyClass() : MyClass(0, 0)�� �̿��� �� �ִ�
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
	const MyClass c1;		// ��� �ν��Ͻ�ȭ
	
	const MyClass c2(2, 2);

	// c1.DoSomething1();		// �ȵȴ�! �� �׷���?
	// c2.DoSomething2(); ���� ��ü ������ �ȹٲٴ� �Լ��� �۵��� �ȵȴ�.

	// �Լ��� ���� ��ü�� �ٺ������� ���� ���� 
	// �����Ϸ��� ��� �ν��Ͻ��� ����, �۵��� ���´�.



	// �׷��� ���?  =  ��� ��� �Լ��� ����Ѵ�!

	c1.DoSomething3();

	// �Ϲ� �ν��Ͻ� = �Ϲ� ����Լ�, ��� ����Լ� �Ѵ� ��밡��
	// ��� �ν��Ͻ� = ������ ��� ����Լ��� ��밡��
}