
#include <bits/stdc++.h>
using namespace std;



int searchInsert(vector<int>& nums, int target) {
	int m = nums.size() - 1;
	int s = 0, e = m;
	int r;
	while (s <= e) {
		int mid = (s + (e - s) / 2);
		if (nums[mid] == target) return mid;
		else if (nums[mid] > target) e = mid - 1;
		else s = mid + 1;


	}
	return (lower_bound(nums.begin(), nums.end(), target ) - nums.begin());
}

int main() {
	int n, t;
	cin >> n >> t;
	vector <int>v;
	int a;
	for (int i = 0; i < n; i++) {
		cin >> a;
		v.push_back(a);
	}
	cout << searchInsert(v, t);


}

