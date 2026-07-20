class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int xorall = 0;
        int n = nums.size();
        for (int i : nums) {
            xorall ^= i;
        }
        for (int i = 1; i <= n; i++) {
            xorall ^= i;
        }
        xorall; // = missing ^ duplicate
        int rsb = xorall & (-xorall);
        int bucket1 = 0;
        int bucket2 = 0;
        for (int i : nums) {
            if (i & rsb) {
                bucket1 ^= i;
            } else {
                bucket2 ^= i;
            }
        }
        for (int i = 1; i <= n; i++) {
            if (i & rsb) {
                bucket1 ^= i;
            } else {
                bucket2 ^= i;
            }
        }

        for (int i : nums) {
            if (i == bucket1) {
                return {bucket1, bucket2};
            }
            if (i == bucket2) {
                return {bucket2, bucket1};
            }
        }
        return {};
    }
};