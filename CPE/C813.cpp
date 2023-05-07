#include <iostream>
using namespace std;

long long G(long long n){
	long long x = 0;
	if (n/10 < 1)
		return n;
	else 
		while (n/10 >= 1){
			x += n%10;
			n /= 10;
		}
		x += n;
		return G(x);
}

int main()
{
	long long n, x = 0;
	while(cin >> n && n){
		cout << G(n) << endl;
	}
}
