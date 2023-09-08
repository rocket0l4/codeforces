#include <bits/stdc++.h>
#include <algorithm>
#define ll long long
using namespace std;
int main()
{

	// int t;
	// cin >> t;
	// while (t--)
	// {
	// 	// int count = LONG_LONG_MAX;
	// 	// int n;
	// 	// cin >> n;
	// 	// int a, b;
	// 	// for (int i = 0; i < n; i++)
	// 	// {
	// 	// 	cin >> a >> b;
	// 	// 	b--;
	// 	// 	count = min(count, a + b / 2);
	// 	// }
	// 	// cout << count << endl;
	// 	int a, b;
	// 	cin >> a >> b;
	// 	if (b <= 3)
	// 	{
	// 		cout << -1 << endl;
	// 	}
	// 	else if (a == b)
	// 	{
	// 		for (int i = 2; i * i <= b; i++)
	// 		{
	// 			if (b % i == 0)
	// 			{
	// 				cout << i << ' ' << b - i << endl;
	// 			}
	// 		}
	// 		cout << "-1" << endl;
	// 	}
	// 	else if (b & 1)
	// 	{
	// 		b--;
	// 	}
	// 	cout << b / 2 << ' ' << b / 2 << endl;
	// }
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		if (n == 2)
			cout<< true<<endl;
		else if (n < 2 || n % 2 == 0)
			cout << false << endl;
		for (ll i = 3; i * i <= n; i += 2)
		{
			if (n % i == 0)
				cout << false << endl;
				break;
		}
		cout << true << endl;
	}
}