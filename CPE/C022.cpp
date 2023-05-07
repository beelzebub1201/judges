#include <iostream>
using namespace std;

int main()
{
	int low , up, total = 0, n;
	cin >> n;
	for (int i = n; i > 0; i--){
		total = 0;
		cin >> low >> up;
		if (low || up ){
			while (low <= up){
				if (low & 1){
					total += low;
				}
				else {
					total += low + 1;
				}
					low += 2;
			}
			cout << "Case " << n-i+1 << ": " << total << endl; 
		}
		else 
			cout << "Case " << n-i+1 << ": " << "0" << endl;
	}
}
