#include<iostream>
#include<iomanip>
using namespace std;

void Create(int* a, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
}

void Print(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << a[i];
}

int Sum(int* a, const int size)
{
	int S = 0;
	for (int i = 0; i < size; i++)
		if (a[i] > 0 || (a[i] % 3 != 3))
			S += a[i];
	return S;
}

int Number(int* a, const int size, int i)
{
	int count = 0;
	for (int i = 0; i < size; i++) {
		if (a[i] > 0 || a[i] % 3 != 0) {
			count++;
		}
	}
	return count;
}

void PrintModifyed(int* a, const int size, int i)
{
	for (int i = 0; i < size; i++)
		if (a[i] > 0 || a[i] % 3 != 0) {
			a[i] = 0;
			cout << setw(4) << a[i];
		}
		else
			cout << setw(4) << a[i];
}


int main()
{
	srand((unsigned)time(NULL));
	const int n = 22;
	int a[n];
	int Low = -10;
	int High = 35;
	Create(a, n, Low, High);
	cout << "masive =   ["; Print(a, n); cout << "  ]" << endl;
	cout << "S = " << Sum(a, n) << endl;
	cout << "number = " << Number(a, n, 0) << endl;
	cout << "Modifyed = ["; PrintModifyed(a, n, 0);
	cout << "  ]" << endl;
	return 0;
}
