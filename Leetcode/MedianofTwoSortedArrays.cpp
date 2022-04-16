

#include <bits/stdc++.h>
using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

	vector <int>v;
	int m = nums1.size();
	int n = nums2.size();
	int i = 0, j = 0;
	while (i < m && j < n) {
		if (nums1[i] < nums1[j]) {
			v.push_back(nums1[i]);
			i++;
		}
		else {
			v.push_back(nums2[j]);
			j++;
		}
	}
	while (i < m) {
		v.push_back(nums1[i]);
		i++;
	}
	while (j < n) {
		v.push_back(nums2[j]);
		j++;
	}
	double mid = 0;
	int k = v.size();
	if (k % 2 != 0) {
		int a = k / 2;
		mid = v[a];
	}
	else {
		int a = k / 2;
		mid = (double) (v[a] + v[a - 1]) / 2;
	}
	return mid;

}


int main()
{
	int n, m;
	cin >> n >> m;
	vector<int> nums1;
	vector<int>nums2;
	for (int i = 0; i < n; i++) {
		int no;
		cin >> no;
		nums1.push_back(no);

	}
	for (int i = 0; i < m; i++) {
		int no;
		cin >> no;
		nums2.push_back(no);
	}
	cout << findMedianSortedArrays(nums1, nums2) << endl;
	return 0;
}
