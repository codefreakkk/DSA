#include<bits/stdc++.h>
using namespace std;

class Solution {
	public:
		int findInMountainArray(vector<int> nums, int target) {
			 int pivot = findPivot(nums);
		int leftindex = searchLeft(nums, target, 0, pivot - 1);
        int rightindex = searchRight(nums, target, pivot, nums.size() - 1);
        int index = -1;
        if(leftindex == -1) {
            index = rightindex;
        } 
        else if(rightindex == -1) {
            index = leftindex;
        }
        else {
            index = (leftindex > rightindex) ? rightindex : leftindex;
        }
		return index;
		}

		int searchRight(vector<int> nums, int target, int start, int end) {
			while(start <= end) {
				int mid = (start + end) / 2;
				if(target < nums[mid]) {
					start = mid + 1;
				}
				else if(target > nums[mid]) {
					end = mid - 1;
				}
				else {
					return mid;
				}
			}
			return -1;
		}

		int searchLeft(vector<int> nums, int target, int start, int end) {
			while(start <= end) {
				int mid = (start + end) / 2;
				if(target < nums[mid]) {
					end = mid - 1;
				}
				else if(target > nums[mid]) {
					start = mid + 1;
				}
				else {
					return mid;
				}
			}
			return -1;
		}

		int findPivot(vector<int> nums) {
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
	vector<int> vc = {1,5,2};
	int target = 2;
	Solution ob;
	cout << ob.findInMountainArray(vc, target);
}