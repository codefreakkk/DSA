#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	int sqrtOfNumber(int x) {
		int start = 0;
		int end = x;
		int ans = -1;
		while(start <= end) {
			int mid = (start + end) / 2;
			if ((mid * mid) > x)
				end = mid - 1;
			else if ((mid * mid) < x) {
				ans = mid;
				start = mid + 1;
			}
			else 
				return mid;
		}
		return ans;
	}
};

int main() {
	Solution ob;
	cout << ob.sqrtOfNumber(81);
}