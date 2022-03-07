#include<bits/stdc++.h>
using namespace std;

class Solution {
	public:
		int search(vector<int> nums, int target) {
			int pivot = findPivot(nums);
			int left = searchInArray(nums, target, 0, pivot);
			int right = searchInArray(nums, target, pivot + 1, nums.size() -1);
			if(left != -1) 
				return left;
			else 
				return right;
		} 

		int searchInArray(vector<int> nums, int target, int start, int end) {
			while(start <= end) {
				int mid = (start + end) / 2;
				if(target < nums[mid])
					end = mid - 1;
				else if(target > nums[mid]) 
					start = mid + 1;
				else 
					return mid;
			}
			return -1;
		}

		int findPivot(vector<int> nums) {
			int start = 0;
			int end = nums.size() - 1;
			int last = nums[nums.size() - 1];
			while(start <= end) {
				int mid = (start + end) / 2;
				if(mid < (nums.size() - 1) && (nums[mid] > nums[mid + 1])) 
					return mid;
				else if(nums[mid] > last)
					start = mid + 1;
				else 
					end = mid - 1;
			}
			return -1;
		}
};

int main() {
	vector<int> vc = {5,1,3};
	Solution ob;
	cout << ob.search(vc, 5);
}