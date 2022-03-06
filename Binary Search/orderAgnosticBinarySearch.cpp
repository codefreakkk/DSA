#include<bits/stdc++.h>
using namespace std;

int orderAgnosticBinarySearch(vector<int> vc, int target) {

	int start = 0;
	int end = vc.size() - 1;

	while(start <= end) {
		int mid = (start + end) / 2;
		if(target > vc[mid]) {
			end = end - 1;
		}
		else if(target < vc[mid]) {
			start = start + 1;
		}
		else {
			return mid;
		}
	}
	return -1;
}

int main() {
	vector<int> vc = {5,4,3,2,1};
	cout << orderAgnosticBinarySearch(vc, 0);
}