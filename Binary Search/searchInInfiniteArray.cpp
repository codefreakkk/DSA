#include<bits/stdc++.h>
using namespace std;

class Solution {
	public:
		int findPos(vector<int> nums, int target) {		
			int start = 0;
			int end = 1;
			while(target > nums[end]) {
				int newstart = end + 1;
				end = end + (end - start + 1) * 2;
				start = newstart;
			}
			return binarySearch(nums, start, end, target);
		} 

		int binarySearch(vector<int> nums, int start, int end, int target) {
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
};

int main() {
	vector<int> vc = {2,3,5,6,7,8,10,11,12,13,14,15,16,17,18,19};
	int target = 10;
	Solution ob;
	cout << ob.findPos(vc, target);

}