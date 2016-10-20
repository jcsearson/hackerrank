#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	string sofc;
	unsigned long int range;
	cin >> sofc >> range;
	cout << "String (s): " << sofc << "\nRange (n): " << range << "\n";

	int truecount, tencount;
	truecount = sofc.length();

	// Count 'a' in initial string
	int smalla = count(sofc.begin(), sofc.end(), 'a');
	if(smalla==1){
		cout << range;
		return 0;
	}
	cout << "Count (per string): " << smalla << "\n";

	// Count 'a' in range from full strings only
	tencount = (((range/truecount) * smalla));
	cout << "Count (per range): " << tencount << "\n";

	// Count 'a' in fractional range
	int leftover = count(sofc.begin(), sofc.begin() + range%sofc.size(), 'a');
	cout << "Additional Space: " << leftover << "\n";

	// Add both counts to final value
	cout << "Answer: " << (tencount + leftover);

	return 0;
}