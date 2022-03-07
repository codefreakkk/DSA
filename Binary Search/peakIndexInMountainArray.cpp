#include<bits/stdc++.h>
using namespace std;

class Solution {
	public:
		int peakIndexInMountainArray(vector<int> nums) {
			int start = 0;
			int end = nums.size() - 1;

			while(start < end) {
				int mid = (start + end) / 2;
				if(nums[mid] > nums[mid + 1])
					end = mid;
				else 
					start = mid + 1;
			}
			return end;
		} 
};

int main() {
	vector<int> vc = {0,1,2,4,2,1};
	Solution ob;
	cout << ob.peakIndexInMountainArray(vc);
}