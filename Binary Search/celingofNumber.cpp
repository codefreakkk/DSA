#include<bits/stdc++.h>
using namespace std;

celingOfNumber(vector<int> vc, int target) {

	int start = 0;
	int end = vc.size() - 1;

	while(start <= end) {
		int mid = (start + end) / 2;
		if(target < vc[mid]) {
			end = mid - 1;
		}
		else if(target > vc[mid]) {
			start = mid + 1;
		}
		else {
			return vc[mid];
		}
	}
	return vc[start];
}

int main() {
	vector<int> vc = {2,3,5,9,14,16,18};
	cout << celingOfNumber(vc, 80);
}