#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int n;
	cin >> n;

	vector<int> arr(n);
	vector<int> temp(n);

	cout << "Quant: " << n << "\n";

	// Fill array with inital contents
	for( int i = 0;i < n;i++ ){
		cin >> arr[i];
		temp[i] = arr[i];
	}

	// Array Items [Smallest --> Largest]
	// initialize smallest index value
	sort(temp.begin(), temp.end());
	int smallest = temp[0];
	cout << "Smallest Index: " << smallest << "\n";


	cout << "Original Array: ";
	for(int k=0;k<n;k++){
		cout << arr[k];
	}
	cout << "\n";


	int counter = 0;
	cout << "Sorted Array: ";
	for(int m=0;m<n;m++){
		cout << temp[m];
		if(temp[m] == smallest){
			counter++;
		}
	}
	cout << "\n";


	cout << "New Sorted Array (after first round of cuts): ";
	for(int y=0;y<n;y++){
		for(int z=0;z<counter;z++){
			temp.pop_back();
		}
		temp[y] = temp[y+counter];
	}
	n = n - counter;
	for(int q=0;q<n;q++){
		cout << temp[q];
	}
	cout << "\n";


	cout << "Quant (NEW): " << n << "\n";


	return 0;
}