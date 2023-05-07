#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

int main()
{
	int a, b, i;
	while (cin >> a >> b && (a || b) ){
		int carry = 0;
		for (;a > 0;){
			if (a%10 + b%10 + i >= 10){
				i = 0;
				carry++;
				i = 1;
			}
			b /= 10;
			a /= 10;
		}
		if (carry == 0)
			cout << "No carry operation.\n";
		else if(carry == 1)
			cout << "1 carry operation.\n";
		else
			cout << carry << " carry operations.\n";
	}
}
