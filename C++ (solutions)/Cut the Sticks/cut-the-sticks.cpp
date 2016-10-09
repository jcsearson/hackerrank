#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int n;
	cin >> n;
	int counter = n;
	int old_count = arr.size();
	vector<int> arr(n);

	for(int arr_i = 0;arr_i < n;arr_i++){
		cin >> arr[arr_i];
	}
	sort(arr.begin(), arr.end());
	int el_min = arr[0];

	while(!arr.empty()){
		cout << counter << endl;
		sort(arr.begin(), arr.end());

		for(int k=0;k<old_count;k++){
			el_min = arr[0];
			if(el_min>=arr[k]){
				arr.pop_back();
				old_count = arr.size();
				counter--;
			}
			if(el_min<arr[k]){
				arr[k] -= el_min;
			}
		}
	}
	return 0;
}