
#include <iostream>
#include <vector>
using namespace std;
vector<int> searchRange(vector<int>& nums, int target) {
	int s = 0;
	int e = nums.size() - 1;
	int res1 = -1, res2 = -1;
	vector <int>final;
	while (s <= e) {
		int mid = s + (e - s) / 2;
		if (target == nums[mid]) {
			res1 = mid;
			e = mid - 1;
		}
		else if (target < nums[mid]) e = mid - 1;
		else s = mid + 1;
	}
	int s1 = 0, e1 = nums.size() - 1;
	final.push_back(res1);
	while (s1 <= e1) {
		int mid = s1 + (e1 - s1) / 2;
		if (target == nums[mid]) {
			res2 = mid;
			s1 = mid + 1;
		}
		else if (target < nums[mid]) e1 = mid - 1;
		else s1 = mid + 1;
	}
	final.push_back(res2);
	return final;
}
int main() {

	int n, t;
	cin >> n >> t;
	vector <int> v;
	int a;
	for (int i = 0; i < n; ++i)
	{

		cin >> a;
		v.push_back(a);
	}
	vector <int> m = searchRange(v, t);
	for (int i = 0; i < m.size(); ++i)
	{
		cout << m[i] << " ";
	}
	return 0;
}


