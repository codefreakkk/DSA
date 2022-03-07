#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> vc, int start, int n, int target) {

	int end = n - 1;

	while(start <= end) {
		int mid = (start + end) / 2;
		if(target > vc[mid]) {
			start = mid + 1;
		}
		else if(target < vc[mid]) {
			end = mid - 1;
		}
		else {
			return mid;
		}
	}
	return -1;
}

int main() {
	vector<int> vc = {1,2,3,4,5};
	cout << binarySearch(vc, 0, 5, 3);	
}