#include<bits/stdc++.h>
using namespace std;

class Solution {
public: 
	int maxDistance(vector<int> nums, int m) {
		sort(nums.beg in(), nums.end());
		int start = 0;
		int ans = 0;
		int end = nums[nums.size() - 1];
		while(start <= end) {
			int mid = start + (end - start) / 2;
			if(isFiseable(nums, mid, m)) {
				ans = mid;
				start = mid + 1;
			}
			else 
				end = mid - 1;
		}
		return ans;
	}

	int isFiseable(vector<int> nums, int mid, int m) {
		int cow = nums[0];
		int c = 1;
		for(int i = 1; i < nums.size(); i++) {
			int dist = nums[i] - cow;
			if(dist >= mid) {
				cow = nums[i];
				c++;
				if(c == m)
					return 1;
			} 
		}
		return c == m;
	}
};

int main() {
	vector<int> vc = {5,4,3,2,1,1000000000};
	int m = 2;
	Solution ob;
	cout << ob.maxDistance(vc, m);
}