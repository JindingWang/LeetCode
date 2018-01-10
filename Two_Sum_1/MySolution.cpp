class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        bool flag = false;
        vector<int> rst;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i+1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    flag = true;
                    rst.push_back(i);
                    rst.push_back(j);
                    break;
                }
            }
            if (flag) break;
        }
        return rst;
    }
};
