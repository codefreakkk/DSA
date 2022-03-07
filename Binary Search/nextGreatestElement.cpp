#include<bits/stdc++.h>
using namespace std;

char nextGreatestElement(vector<char> vc, char target) {

	int start = 0;
	int end = vc.size() - 1;

	while(start <= end) {
		int mid = (start + end) / 2;
		if (target < vc[mid]) {
			end = mid - 1;
		}
		else {
			start = mid + 1;	
		}
	}

	if(start > vc.size() - 1) 
		return vc[0];
	else 
		return vc[start];
}

int main() {
	vector<char> vc = {'c', 'f', 'j'};
	char target = 'h';
	cout << nextGreatestElement(vc, target);
}