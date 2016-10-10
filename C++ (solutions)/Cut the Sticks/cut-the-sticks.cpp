#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int n;
	cin >> n;
	cout << n << "\n";

	vector<int> arr(n);
	vector<int> temp(n);

	// Fill array with inital contents
	for( int i = 0;i < n;i++ ){
		cin >> arr[i];
		temp[i] = arr[i];
	}

	// Array Items [Smallest --> Largest]
	sort(temp.begin(), temp.end());

	while(n>1){
		// initialize smallest index value
		int smallest = temp[0];

		// check for other index where value = index[0]
		int counter = 0;
		for(int m=0;m<n;m++){
			// take note of how many instances
			if(temp[m] == smallest){
				counter++;
			}
		}

		// Move values at index spots X places left
		// equal to # of instances stored as "counter"
		for(int y=0;y<n;y++){
		temp[y] = temp[y+counter];
			// remove index locations at end of array now that values moved up
			for(int z=0;z<counter;z++){
				temp.pop_back();
			}
		}

		// adjust the variable storing total # of index accordingly
		n = n - counter;

		// safety because once total index in array equal 1, OK to end sequence
		if(n==0){
			return 0;
		}

		// output size of current array
		cout << n << "\n";
	}
	return 0;
}