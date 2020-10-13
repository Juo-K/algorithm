#include <iostream>

using namespace std;

int main()
{
	//i, j는 탐색용
	//min은 최소값;

	//가장 작은값 index

	int i, j, min, index, temp;


	int array[10] = { 1,10,5,8,7,6,4,3,2,9 };
	for (i = 0; i < 10; i++)
	{
		min = 9999; //모든 원소보다 큰 숫자 / 아무 값;

		for (j = i; j < 10; j++)
		{
			if (min > array[j])
			{
				min = array[j]; // 1 = 1; 2 = 2;
				index = j;
			}
		}

		//가장 앞에 있는 것과 최소값을 바꿈;
		temp = array[i];
		array[i] = array[index];
		array[index] = temp;
	}

	for (i = 0; i < 10; i++)
		cout << array[i] << endl;

	return 0;
}

//선택 정렬
// 가장 작은 값을 앞으로 보냄;

/*
선택 정렬의 시간 복잡도;

10 + 9 + 8 + 7+ ~ + 1
등차수열 고등연산 
10*(10 + 1) / 2 = 55;

N(N+1) / 2 

시간 복잡도 
O(N N)  

빅오표기법 =  특정한 알고리즘의 수행시간을 간략하게 표기
굉장히 느리고 비효율적
*/

