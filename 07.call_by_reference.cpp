#include <iostream>
using namespace std;

void Swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	int x = 10, y = 20;

	Swap(x, y);
	cout << "x : " << x << ", " << "y : " << y << endl;
}

// 4번째 줄
// 값을 서로 바꾸는 Swap함수를 정의 하였다.
// 정의를 main()함수 앞에 하는 것이 C++ 스타일의 코딩이다.
// C 스타일의 코딩은 main() 함수 앞에 선언을 한 뒤, 후에 정의를 하는 것
//
// 파라미터가 포인터가 아닌 &를 사용하였다.
// 참조형 변수 이므로 주소값, 실제 값 모두 일치하므로 포인터를 사용하지 않아도 값이 변한다.
// C에서 포인터를 사용한 call by address와는 다른 개념이다.
// 이게 훨씬 성능이 좋으니 애용하자.