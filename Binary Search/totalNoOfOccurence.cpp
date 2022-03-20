#include<bits/stdc++.h>
using namespace std;

class Solution {
public: 
	int numberOfOccurrence(vector<int> nums, int target) {
		int left = search(nums, target, 1);
		int right = search(nums, target, 0);
		return (right - left) + 1;
	}

	int search(vector<int> nums, int target, int flag) {
		int start = 0;
		int index = -1;
		int end = nums.size() - 1;
		while(start <= end) {
			int mid = (start + end) / 2;
			if (target < nums[mid])
				end = mid - 1;
			else if (target > nums[mid]) 
				start = mid + 1;
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
	vector<int> vc = {1,2,3,3,3,3,5};
	int target = 3;
	Solution ob;
	cout << ob.numberOfOccurrence(vc, target);
}