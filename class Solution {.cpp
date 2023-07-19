class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        int sum = n * (n + 1) / 2;
        vector<int> ans(2);
        vector<bool> seen(n+1);
        for (int num : nums) {
            sum -= num;
            if (seen[num]) ans[0] = num;
            seen[num] = true;
        }
        ans[1] = sum + ans[0];
        return ans;
    }
};