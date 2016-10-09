#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

	// t (number of test cases)
	// n (students in the class) K (cancelation threshold)
	// a (a1, a2, ... , a[n]) -- arrival times
	// n (students in the class) K (cancelation threshold)
	// a (a1, a2, ... , a[n]) -- arrival times
			//-- a>0 --> late
			//-- a<=0 --> on-time/early

int main(){
		int t;
		cin >> t;
		for(int y=0;y<t;y++){
				int n, k;
				int goodStudent = 0;
				cin >> n >> k;
				vector<int> a(n);
				for(int b=0;b<n;b++){
						cin >> a[b];
						if(a[b]<=0){
							goodStudent++;
						}
				}
				if(goodStudent<k){
					cout << "YES\n";
				}else{
					cout << "NO\n";
				}
		}
		return 0;
}
