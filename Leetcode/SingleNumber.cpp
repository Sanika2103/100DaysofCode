class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> m;
	for (int i = 0; i < nums.size(); i++) {
		m[nums[i]]++;
	}
	int s;
	for (auto i : m) {
		if (i.second == 1) return i.first;
		else continue;
	}
	return -1;
    }
};
