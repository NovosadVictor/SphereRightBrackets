#include<iostream>

long long quantity(int n);

int main()
{
	int N;
	std::cin >> N;
	std::cout << quantity(N) % 1000000000;
	//system("pause");
	return 0;
}
long long quantity(int n)
{
	const long long MAXN = 100;
	static long long a[MAXN];
	if (n == 0) return 1;
	if (a[n] > 0) return a[n];
	for (int i = 0; i < n; ++i)
		a[n] += (((quantity(i)) % 1000000000 ) * ((quantity(n - 1 - i)) % 1000000000) % 1000000000);
	return a[n] % 1000000000;
}