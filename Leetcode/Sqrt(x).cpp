
class Solution {
public:
    int mySqrt(int x) {
    int s = 1;
	int e = x;
	int res = 0;
	for (int i = 1; i <= x; i++) {
		long long mid = s + (e - s) / 2;
		long long t = mid * mid;
		long long y = (mid + 1) * (mid + 1);

		if (t <= x && y > x) return mid;
		else if (t > x) e = mid - 1;
		else  s = mid + 1;
        
    }
        return 0;
    }
};
