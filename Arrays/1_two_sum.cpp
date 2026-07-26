class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        map<int, int> m;
        int b;
        for (int i = 0; i < nums.size(); i++)
        {
            b = target - nums[i];
            if (m.find(b) != m.end())
            {
                return {i, m[b]};
            }
            m[nums[i]] = i;
        }
        return {};
    }
};