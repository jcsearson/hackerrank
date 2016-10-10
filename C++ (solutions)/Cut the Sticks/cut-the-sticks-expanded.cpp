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

	cout << "Initial Size of Array: " << n << "\n\n";

	// Fill array with inital contents
	for( int i = 0;i < n;i++ ){
		cin >> arr[i];
		temp[i] = arr[i];
	}

	// Array Items [Smallest --> Largest]
	sort(temp.begin(), temp.end());

	while( n>1 ){
		// initialize smallest index value
		int smallest = temp[0];
		cout << "Smallest Index: " << smallest << "\n";

		cout << "Original Array: ";
		for(int k=0;k<n;k++){
		   	cout << arr[k];
		}
		cout << "\n";


		// check for other index where value = index[0]
		int counter = 0;
		cout << "Sorted Array: ";
		for(int m=0;m<n;m++){
			cout << temp[m];
			// record how many occurences
			if(temp[m] == smallest){
				counter++;
			}
		}
		cout << "\n";

		// Move values at index spots X places left
		// equal to # of instances stored as "counter"
		cout << "New Sorted Array (after first round of cuts): ";
		for(int y=0;y<n;y++){
			// remove index locations at end of array now that values moved up
			for(int z=0;z<counter;z++){
				temp.pop_back();
			}
			temp[y] = temp[y+counter];
		}

		// adjust the variable storing total # of index accordingly
		n = n - counter;
		for(int q=0;q<n;q++){
			cout << temp[q];
		}
		cout << "\n";

		// safety because once total index in array equal 1, OK to end sequence
		if(n==0){
			return 0;
		}

		// output size of current array
		cout << "Current Size of Array: " << n << "\n\n";
	}

	return 0;
}