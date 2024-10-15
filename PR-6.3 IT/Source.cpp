#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
template <typename T>
T Create( T* a,  T size, T Low, T High);
template <typename T>
void Print(T* a, T size);
template <typename T>
T quantity(T* a, T size,T& q);

int main()
{
	srand((unsigned)time(NULL)); // ініціалізація генератора випадкових чисел
	int q = 0;
	const int n = 10;
	int a[n];
	int Low = 5;
	int High = 90;
	int sum = 0;
	Create(a, n, Low, High);
	quantity(a, n, q);
	cout << "quantity" << setw(2) << "=" << setw(2)<< q << endl;
	Print(a, n);
	return 0;
}
template <typename T>
T quantity(T* a,T size, T& q)
{
	for (int i = 0; i < size; i++)
		if (a[i]%2 != 0)
			q ++;
	return 0;
}
template <typename T>
T Create(T* a, T size,T Low,T High)
{
	for ( int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
	return 0;
}
template <typename T>
void Print(T* a,T size)
{
	cout << "a[" << setw(1);
	for (int i = 0; i < size; i++)
		if (i == size-1)
			cout << setw(1) << a[i];
		else 
			cout << setw(1) << a[i]<<",";
	cout << "]" << endl;
}

