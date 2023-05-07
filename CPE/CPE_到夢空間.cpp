#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n;
	string a, name;
	vector<string> v;
	for (cin >> n; n >= 0; n--){
		cin >> a;
		if (a == "Sleep"){
			cin >> name;
			v.push_back(name);
		}
		
		if(a == "Test"){
			if (v.size() == 0)
				cout << "Not in a dream\n";
			else
				cout << *(v.end()-1) << endl; //.end 是最後一個數字的下一個位置 
		}
		
		if (a == "Kick"){
			if (v.size() != 0)
				v.erase(v.end()-1);
		}
	}
	
	
} 
