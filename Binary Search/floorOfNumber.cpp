#include<bits/stdc++.h>
using namespace std;

floorOfNumber(vector<int> vc, int target) {

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
	if(end < 0)
		return -1;
	else 
		return vc[end];
}

int main() {
	vector<int> vc = {2,3,5,9,14,16,18};
	cout << floorOfNumber(vc, -2);
}