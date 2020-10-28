#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;



int main()
{
	int a[10][10]{};

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cin >> a[i][j];
		}
	}

	int indexX = 1;
	int indexY = 1;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			

			if (a[indexY][indexX] == 2)
			{

				for (int i = 0; i < 10; i++)
				{
					for (int j = 0; j < 10; j++)
					{
						cout << a[i][j] << " ";
					}
					cout << endl;
				}
				return 0;
			}


			a[indexY][indexX] = 9;
			if (a[indexY][indexX+ 1] != 1)
			{
				indexX++;
			}
			else if (a[indexY + 1][indexX] != 1)
			{
				indexY++;
			}

			
		}
	}

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

}

/* 막대사탕*/
//int main()
//{
//	int w, h; // 가로 세로
//	1 <= w; w <= 100; 1 <= h; h <= 100;
//
//
//	int n; // 막대의 개수 
//	int i, d, x, y; //길이 방향 좌표
//	cin >> w >> h;
//
//	int a[100][100];
//
//	for (int k = 1; k <= w; k++)
//	{
//		for (int f = 1; f <= h; f++)
//		{
//			a[k][f] = 0;
//		}
//	}
//
//	cin >> n;
//	for (int k = 1; k <= n; k++)
//	{
//		cin >> i >> d >> x >> y;
//		if (d == 0)
//		{
//			for (int f = y; f < y + i; f++)
//			{
//				a[x][f] = 1;
//			}//for f
//		
//		}
//
//		if (d == 1)
//		{
//			for (int j = x; j < x+i; j++)
//			{
//				a[j][y] = 1;
//			}//for j
//		}
//	}//for k
//
//	for (int k = 1; k <= w; k++)
//	{
//		for (int f = 1; f <= h; f++)
//		{
//			cout << a[k][f] << " ";
//		}
//		cout << endl;
//	}
//}

//int main() // 바둑판 뒤집기
//{
//	int n;
//	int a[20][20]{};
//
//
//	int x, y;
//	
//
//	for (int i = 1; i < 20; i++)
//	{
//		for (int j = 1; j < 20; j++)
//		{
//			cin >> a[i][j];
//		}
//	}
//
//	cin >> n;
//
//	for (int i = 1; i <= n; i++) //좌표의 개수만큼
//	{
//		cin >> x >> y;
//		for (int j = 1; j <= 19; j++) //가로 줄 흑<->백 바꾸기
//		{
//			if (a[x][j] == 0) a[x][j] = 1;
//			else a[x][j] = 0;
//		}
//		for (int j = 1; j <= 19; j++) //세로 줄 흑<->백 바꾸기
//		{
//			if (a[j][y] == 0) a[j][y] = 1;
//			else a[j][y] = 0;
//		}
//	}
//
//	for (int i = 1; i < 20; i++)
//	{
//		for (int j = 1; j < 20; j++)
//		{
//			cout << a[i][j] << " ";
//		}
//		cout << endl;
//	}
//	
//
//	return 0;
//}

/////////////////////////거꾸로호출
//int main()
//{
//
//
//	int a[10000]{};
//	int n, count;
//
//	cin >> n;
//
//	for (int i = 1; i < n+1; i++)
//	{
//		cin >> a[i];
//	}
//
//	count = a[1];
//	for (int i = 2; i < n + 1; i++)
//	{
//		if (count > a[i])
//			count = a[i];
//	}
//	
//
//	cout << count;
//	
//	return 0;
//}

//int main() //이름좀 그만불러;
//{
//	int b, n;
//
//	int a[24]{};
//
//	cin >> n;
//
//	for (int i = 1; i < n+1; i++)
//	{
//		cin >> b;
//		a[b] = a[b] + 1;
//	}
//
//	for (int i = 1; i < 24; i++)
//	{
//		cout << a[i] << " ";
//	}
//}

//int main()
//{
//	int GCD(int a, int b) // 최소공배수
//	{
//		while (b != 0)
//		{
//			int r = a % b;
//			a = b;
//			b = r;
//		}
//		return a;
//	};
//
//	int ICM(int a, int b) //최대공약수
//	{
//		return a * b / GCD(a, b);
//	};
//
//	int a, b, c;
//	int date = 0;
//	cin >> a >> b >> c;
//	cout <<ICM(ICM(a, b),c);
//}

//int main()
//{
//
//	long long  a, b, c, d;
//
//	int count = 1;
//	cin >> a >> b >> d >> c;
//
//	/*while (true)
//	{
//		a *= b;
//		a += d;
//
//		count++;
//		
//		if (count == c )
//		{
//			cout << a;
//			break;
//		}
//	}*/
//
//	for (int i = 1; i < c; i++)
//	{
//		a *= b;
//		a += d;
//	}
//	cout << a;
//}

// 메가바이트 치환
//int main()
//{
//	double w, h, b;
//	double sum = 0;
//
//	cin >> w >> h >> b;
//
//	sum = w*h*b / pow(2,23);
//
//	
//	printf("%.2lf MB", sum);
//
//}

//구구단
//int main()
//{
//
//
//	int a;
//
//	cin >> a;
//
//	for (int i = 1; i < a; i++)
//	{
//
//		if (i == 3 || i == 6 || i == 9)
//		{
//			cout << "X ";
//		}
//		else if (i % 10 == 3 || i % 10 == 6 || i % 10 == 9)
//		{
//			cout << "X ";
//		}
//		else
//			cout << i << " ";
//
//		
//	}
//
//	cout << endl;
//	return 0;
//}

//int main()
//{
//	char a, b = 'a';
//
//	cin >> a;
//
//	do
//	{
//		cout << b << " ";
//		b += 1;
//	}
//	while (b < a + 1);
//	
//	//do를 while만큼 실행해라 
//	
//
//
//}

//3항 연산자 3개
//int main()
//{
//	int  a , b , c;
//
//
//	cin >> a >> b  >> c;
//	
//	cout << ((a < b ? a : b) < c ? (a < b ? a : b) : c);
//
//	
//
//	
//}

//int main()
//{
//	
//	int a, b, c, d, e;
//	scanf_s("%1d%1d%1d%1d%1d", &a, &b, &c, &d, &e);
//	printf("[%d]\n", a * 10000);
//	printf("[%d]\n", b * 1000);
//	printf("[%d]\n", c * 100);
//	printf("[%d]\n", d * 10);
//	printf("[%d]\n", e * 1);
//}

//int main()
//{
//	const int yubinN = 30;
//	char yubin[yubinN]{};
//
//	cin >> yubin;
//	for (int i = 0; i < yubinN; i++)
//	{
//		if(yubin[i] != NULL)
//		cout << "\'" << yubin[i] << "\'" << endl;
//	}
//
//	return 0;
//}
//int main()
//{
//	char data[2001] = "";
//	fgets(data, 2000, stdin);
//	
//	//fgets()
//	gets_s(data);
//	cout << data;
//
//}

//int main()
//{
//	int a, b, c; 
//	scanf_s("%04d.%02d.%02d", &a, &b, &c);
//	
//	printf("%04d.%02d.%02d",a,b,c);
//}

//int main()
//{
//	int a,b;
//	scanf("%06d-%07d", &a,&b);
//	printf("%06d%07d", a,b);
//}

