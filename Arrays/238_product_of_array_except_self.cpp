class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int pre= 1;
        int pos= 1;
        vector<int> r(n, 0);
        for (int i = 0; i < n; i++) {
            r[i] = pre;
            pre*= nums[i];
        }
        for (int i = n - 1; i >= 0; i--) {
            r[i] *= pos;
            pos*= nums[i];
        }
        return r;
    }
};