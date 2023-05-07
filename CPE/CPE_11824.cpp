#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

int main()
{
	int i, total, Li;
	vector<int> v;
	
	for (cin >> i; i >= 0; i--){
		while (cin >> Li && Li){
			v.push_back(Li);
		}
		
		sort(v.begin(), v.end());
		
		int y = 1;
		for (int y = 1; y <= v.size(); y++){
			//cout << v[y-1] << " ";
			total += 2 * pow(*(v.end()-y), y);
		}
		
		if (total <= 5000000)
			cout << total << endl;
		else 
			cout << "Too expensive\n";
		v.clear();
		total = 0;
	}
}
