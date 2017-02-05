#include <iostream>

using namespace std;	// 이 부분을 눈여겨봐야한다

namespace TEST
{
	int Tnum = 10;
	void TESTFunc()
	{
		cout << "TEST::TESTFunc()" << endl;
	}
}

using namespace TEST;

int main()
{
	TEST::TESTFunc();		// 일반적인 namespace 접근
	::TESTFunc();			// using을 사용한 namespace원소의 명시적 접근
	TESTFunc();				// using을 사용한 namespace원소의 묵시적 접근

	cout << endl;

	cout << TEST::Tnum << endl;	// 일반적인 namespace 접근
	cout << ::Tnum << endl;		// using을 사용한 namespace원소의 명시적 접근
	cout << Tnum << endl;		// using을 사용한 namespace원소의 묵시적 접근
	
}

// 2, 14번째 줄
// using을 사용하였다.

// 5 ~ 12번째 줄
// 네임스페이스를 선언하였다.
// 네임스페이스 안에는 Tnum과 TESTFunc()함수를 정의하였다.

// 18, 24번째 줄
// 네임스페이스로 선언한 TEST의 원소를 호출하는 방식이다.
// 범위 지정 연산자(::)를 사용하여 접근이 가능하다.

// 19, 20, 25, 26번쨰 줄
// using을 사용하여 namespace에 접근하는 방식이다.
// 14번째 줄 using을 사용한 namespace는 범위 지정 연산자(::)를 사용하여 명시적으로,
// 혹은 사용하지 않고 묵시적으로 원소에 접근이 가능하다.

// 참고
// C++은 모든 함수는 namespace로 묶여있다.
// main()함수조차도 namespace로 묶여있다.
// 단지 namespace가 전역이기 때문이다.
// cout, cin, endl 전부 std라는 namespace에 묶여있다.
// 계층구조로 생각을 하면 using을 사용한다는 것은 심해에 있던 namespace에서 전역(수면)으로 올리는 작업이라 할 수 있다.
// namespace안에 namespace를 또 선언할 수 있으며 이를 네임스페이스 다중정의라고 한다.
// 실력을 높이려면 namespace를 사용해서 겹치지 않게 프레임워크를 잘 만들자.