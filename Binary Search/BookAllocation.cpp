#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	int solve(vector<int> nums, int m, int n) {
		int start = getMax(nums);
		int end = sum(nums);
		int ans = 0;
		while(start <= end) {
			int mid = (start + end) / 2;
			if(isFiseable(nums, m, n, mid)) {
				ans = mid;
				end = mid - 1;
			}
			else {
				start = mid + 1;
			}
		}
		return start;
	}

	int isFiseable(vector<int> nums, int m, int n, int mid) {
		int student = 1;
		int ans = 0;
		for(int i = 0; i < nums.size(); i++) {
			if(ans + nums[i] > mid) {
				student++;
				ans = nums[i];
			} else {
				ans = ans + nums[i];
			}
		}
		return student <= m;
	}

	int sum(vector<int> nums) {
		int ans = 0;
		for (int i = 0; i < nums.size(); i++)
			ans = ans + nums[i];
		return ans;
	}

	int getMax(vector<int> a)
	{
	    int max = a[0];
	    for (int i = 1; i < a.size(); i++)
	    {
	        if (max < a[i])
	        {
	            max = a[i];
	        }
	    }
	    return max;
	}

};

int main() {
	vector<int> vc = {5,5,5,5};
	int m = 2;
	int n = 4;
	Solution ob;
	cout << ob.solve(vc, m, n);
}