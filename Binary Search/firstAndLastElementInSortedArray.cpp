#include<bits/stdc++.h>
using namespace std;

class Solution {
	public : 
		vector<int> searchRange(vector<int> nums, int target) {
			int left = searchInRange(nums, target, 1);
			int right = searchInRange(nums, target, 0);
			vector<int> vc = {left, right};
			return vc;
		}

		int searchInRange(vector<int> nums, int target, int flag) {
			int start = 0;
			int end = nums.size() - 1;
			int index = -1;

			while(start <= end) {
				int mid = (start + end) / 2;
				if(target < nums[mid]) {
					end = mid - 1;
				}
				else if(target > nums[mid]) {
					start = mid + 1;
				}
				else {
					index = mid;
					if(flag == 1)
						end = mid - 1;
					else 
						start = mid + 1;
				}
			}
			return index;
		}
};

int main() {
	vector<int> vc = {};
	int target = 0;
	Solution ob;
	vector<int> ans = ob.searchRange(vc, target);

	for(int i : ans) {
		cout << i << " ";
	}
}