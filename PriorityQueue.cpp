#include "PriorityQueue.h"
#include <iostream>

#include <time.h>
#include <stdlib.h>
#include <queue> // 기본적으로 maxHeap
#include <functional>

using namespace std;

class SGA
{
public:
	SGA(string name, int birth) : name(name), birth(birth) {}

	/*bool operator <(const SGA& other) const
	{
		return birth < other.birth;
	}*/

	friend ostream& operator << (ostream & os, const SGA& dt);

	string name;
	int birth;
	
};

struct Compare
{
	bool operator() (const SGA& lhs, const SGA& rhs)const
	{
		return lhs.birth < rhs.birth;
	}
};

ostream& operator << (ostream&os, const SGA& dt)
{
	os << dt.birth;
	return os;
}

template<typename T , typename U>
auto Funtion(T a, U b) -> decltype(a + b)
{
	return  a + b;
}

int main()
{
	srand((unsigned int)time(NULL));
	
	/*MaxHeap h;
	for (int i = 0; i < 100; i++)
		h.Push(rand());

	for (int i = 0; i < 100; i++)
		cout << h.Pop() << endl;*/

	//priority_queue<int> pq;

	//for (int i = 0; i < 10; i++)
	//	pq.push(i);

	//while (pq.empty() == false)
	//{
	//	cout << pq.top() << endl; // 그냥 queue는 front
	//	pq.pop();
	//}

	auto comp = [](const SGA& lhs, const SGA& rhs)
	{
		return lhs.birth < rhs.birth;
	};

	//priority_queue<SGA, vector<SGA>, Compare> pq;
	//priority_queue< SGA, vector<SGA>, decltype(comp)> pq(comp); // decltype 타입을( 결과값을 )추론; auto 자료를 추정 
	//decltype(구조체) > pq(객체)

	//priority_queue<SGA, vector<SGA> ,
	//	function<bool(const SGA& lhs, const SGA &rhs)>>
	//	pq([](const SGA&lhs, const SGA& rhs)
	//{
	//	return lhs.birth < rhs.birth;
	//});
	
	


	pq.push(SGA("김유빈", 19));
	pq.push(SGA("김태우", 28));
	pq.push(SGA("권주오", 27));
	pq.push(SGA("허가경", 25));
	pq.push(SGA("장한별", 23));

	while (pq.empty() == false)
	{
		cout << pq.top() << endl;
		pq.pop();
	}


	return 0;
}